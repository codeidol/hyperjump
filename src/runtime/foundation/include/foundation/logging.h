#pragma once

#ifdef _MSC_VER
// Disable warnings that we don't have control over
// since external libraries bring them.
#pragma warning(push)
//#pragma warning(disable : 4514 4710 4820)
// Disable C4514: unreferenced inline function has been removed
#pragma warning(disable: 4514)
// Disable C4710: `f()` function not inlined
#pragma warning(disable: 4710)
// Disable C4820: x bytes padding added after data member xy
#pragma warning(disable : 4820)
#endif
#include <chrono>
#include <stdio.h>
#ifdef _MSC_VER
#pragma warning(pop)
#endif

#ifdef _DEBUG
#define LOG(fmt)                                                                                                 \
	{                                                                                                            \
		auto currtime = std::chrono::system_clock::now();                                                        \
		auto time = std::chrono::system_clock::to_time_t(currtime);                                              \
		auto rtime = std::chrono::system_clock::from_time_t(time);                                               \
		int usec = std::chrono::duration_cast<std::chrono::duration<int, std::micro>>(currtime - rtime).count(); \
		char timefmt[32] = {};                                                                                   \
		strftime(timefmt, sizeof(timefmt), "%Y-%m-%dT%H:%M:%S", localtime(&time));                               \
		fprintf_s(stdout, "-- [%s.%d] [%s:%ld %s]: %s", timefmt, usec, __FILE__, __LINE__, __FUNCTION__, fmt);   \
	}
#define LOGV(fmt, ...)                                                                                           \
	{                                                                                                            \
		auto currtime = std::chrono::system_clock::now();                                                        \
		auto time = std::chrono::system_clock::to_time_t(currtime);                                              \
		auto rtime = std::chrono::system_clock::from_time_t(time);                                               \
		int usec = std::chrono::duration_cast<std::chrono::duration<int, std::micro>>(currtime - rtime).count(); \
		char timefmt[32] = {};                                                                                   \
		strftime(timefmt, sizeof(timefmt), "%Y-%m-%dT%H:%M:%S", localtime(&time));                               \
		fprintf_s(stdout, "-- [%s.%d] [%s:%ld %s]: ", timefmt, usec, __FILE__, __LINE__, __FUNCTION__);          \
		fprintf_s(stdout, fmt, ##__VA_ARGS__);                                                                   \
	}
#else
#define LOG(fmt)
#define LOGV(fmt, ...)
#endif

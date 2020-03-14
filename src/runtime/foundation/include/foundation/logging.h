#pragma once

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 4514 4710)
#endif
#include <stdio.h>
#ifdef _MSC_VER
#pragma warning(pop)
#endif

#ifdef _DEBUG
#define LOG(msg) fprintf_s(stdout, msg)
#define LOGV(fmt, ...) fprintf_s(stdout, fmt, ##__VA_ARGS__)
#else
#define LOG(msg)
#define LOGV(fmt, ...)
#endif

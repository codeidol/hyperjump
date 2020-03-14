#include "main.h"
#include "platform/win32/minimal_win32.h"
#include "logging.h"

static int _main(int argc, char **argv)
{
	(void)(argc);
	(void)(argv);
	LOGV("-- <_gd_main,%d,%p> running...\n", argc, argv);
	return main(argc, argv);
}

extern int WINAPI WinMain(HINSTANCE hCurrInst, HINSTANCE hPrevInst, LPSTR lpCmdLine, int iCmdShow)
{
	(void)(hCurrInst);
	(void)(hPrevInst);
	(void)(lpCmdLine);
	(void)(iCmdShow);

	LOGV("-- <WinMain,%p,%p,%p,%d> running...\n", hCurrInst, hPrevInst, lpCmdLine, iCmdShow);
	return _main(0, 0);
}

// This class is responsible for showing the logs
// and manage itself in memory.
class Console
{
public:
	Console()
	{
#ifdef _WIN32
		AllocConsole();
		FILE *fpstdin = stdin, *fpstdout = stdout, *fpstderr = stderr;
		freopen_s(&fpstdin, "CONIN$", "r", stdin);
		freopen_s(&fpstdout, "CONOUT$", "w", stdout);
		freopen_s(&fpstderr, "CONOUT$", "w", stderr);
#endif
	}

	~Console()
	{
#ifdef _WIN32
		FreeConsole();
#endif
	}
};

Console console;

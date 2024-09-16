#include "main.h"
#include "logging.h"

extern int main(int argc, char **argv)
{
	(void)(argc);
	(void)(argv);
	LOGV("-- Launcher started {%d,%p}\n", argc, argv);
	getchar();
	return 0;
}

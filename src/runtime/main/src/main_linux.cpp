#include "main.h"

#ifdef __linux__
int _gd_main(int argc, char** argv)
{
	(void)(argc);
	(void)(argv);
	return 0;
}
#endif

#include "main.h"
#include "logging.h"

static int _main(int argc, char **argv)
{
	(void)(argc);
	(void)(argv);
	LOG("\n");
	return main(argc, argv);
}

int main(int argc, char** argv)
{
	(void)(argc);
	(void)(argv);
	LOG("\n");
	return _main(argc, argv);
}

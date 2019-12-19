#include "FindFile.h"
#include <stdio.h>

int main(int argc, const char **argv)
{
    if(argc == 3)
    {
        char buffer[MAX_PATH];
        RecursiveFindFile(argv[1], argv[2], buffer, sizeof(buffer));
        printf("__DONE__\n");
        getchar();

    }

    return 0;
}
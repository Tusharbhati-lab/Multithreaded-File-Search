#include <stdio.h>
#include "search.h"

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Usage: ./search <directory> <filename>\n");
        return 1;
    }

    printf("Searching in: %s\n", argv[1]);
    printf("Searching for: %s\n\n", argv[2]);

    searchDirectory(argv[1], argv[2]);

    return 0;
}
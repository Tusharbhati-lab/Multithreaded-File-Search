#include <stdio.h>
#include <string.h>
#include <dirent.h>

#include "search.h"

void searchDirectory(const char *directory,
                     const char *targetFile)
{
    DIR *dir;

    struct dirent *entry;

    dir = opendir(directory);

    if(dir == NULL)
    {
        printf("Cannot open directory.\n");
        return;
    }

    while((entry = readdir(dir)) != NULL)
    {

        printf("%s\n", entry->d_name);

    }

    closedir(dir);
}
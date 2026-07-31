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

    while ((entry = readdir(dir)) != NULL)
{
    if (strcmp(entry->d_name, ".") == 0 ||
        strcmp(entry->d_name, "..") == 0)
    {
        continue;
    }

    if (strcmp(entry->d_name, targetFile) == 0)
    {
        printf("Found!\n");
        printf("%s/%s\n", directory, entry->d_name);
    }
}

    closedir(dir);
}
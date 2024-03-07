#include <stdio.h>
#include <stdlib.h>

int main() {
    char *valueName = getenv("USERNAME");
    for (size_t i = 0; i < 5; i++)
    {        
        printf("Hello, World!%s\n ", valueName);
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {
    char *valueName = getenv("USERNAME");
    char*valueLenguage = getenv("FAVORITE_LANGUAGE");
    
    if (valueName != NULL && valueLenguage != NULL) {
        printf("Hello, %s\n", valueName, valueLenguage);
    }
    else {
        for (size_t i = 0; i < 5; i++)
        {        
            printf("Hello, World!\n");
        }
    }

    return 0;
}

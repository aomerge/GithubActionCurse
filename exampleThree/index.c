#include <stdio.h>
#include <stdlib.h>

int main() {
    char *valueName = getenv("USERNAME");
    char*valueLenguage = getenv("FAVORITE_LANGUAGE");    
    
    if (valueName != NULL && valueLenguage != NULL) {
         printf("Los números son: %s y %s\n", valueName, valueLenguage);
    }
    else {
        for (size_t i = 0; i < 5; i++)
        {        
            printf("Hello, World!%s\n ", valueName);
        }
    }

    return 0;
}

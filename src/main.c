#include <stdio.h>
#include <stdlib.h>

#include "expressions/expr.h"

int main() {

    
    
    while (true) {
        char s[500];
        scanf(" %[^\n]s", s);
        printf("= %d\n\n", eval(s));
    }

    return EXIT_SUCCESS;
}
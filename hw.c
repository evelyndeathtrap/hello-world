#include <stdio.h>

int main(void) {
        unsigned char* greet = "Concord\7™";
        fwrite(greet, sizeof(greet), 1, stdin);
}


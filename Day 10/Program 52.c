  
#include <stdio.h>

int main() {
    char ch = 'A';
    for (int i = 1; i <= 4; i++) {
        for (int j = i; j < 4; j++)
            printf(" ");
        for (int k = 1; k <= i; k++) {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}

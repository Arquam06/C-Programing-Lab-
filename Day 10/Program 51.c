
#include <stdio.h>

int main() {
    int num = 1;
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}

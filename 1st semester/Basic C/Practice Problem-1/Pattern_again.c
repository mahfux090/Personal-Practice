#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);


    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= i; j++) 
        {
            printf("%d", j);
        }
        printf("\n");
    }
    for (int i = n-1; i >= 1; i--) 
    {
        for (int k = 0; k < n - i; k++) 
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) 
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}


#include <stdio.h>
#include <stdlib.h>

int Year(int n) {
	
    if (n == 0)
        return 1;
    if (n < 4)
        return 0;
 
    if (n >= 400 && n % 400 == 0)
        return 1;
 
    if (n >= 100) {
        if (n % 100 != 0 && n % 4 == 0)
            return 1;
    }
    else {
        if (n % 4 == 0)
            return 1;
    }
 
    return 0;
}

int main() {
    int n, re = 0;
    scanf("%d", &n);
 
    if (!Year(n)) {
        printf("%d", 0);
        return 0;
    }
 
    for (int i = 0; i <= n; i++)
        if (Year(i))
            re++;
 
    printf("%d", re);
    return 0;
}

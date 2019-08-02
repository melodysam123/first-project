  
#include<stdio.h>

int sum(int k) {
    int i, sum = 0;
    for(i = 1; i <= k; i++) {
        sum += i;
    }

    return sum;
}

int main() {
    int k;
    printf("enter the nos of terms");
    scanf("%d", &k);
    printf("%d", sum(k));
    return 0;
}

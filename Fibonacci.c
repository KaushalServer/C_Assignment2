# include <stdio.h>
int main(){
    int a = 0, b = 1, sum = 0, n;
    printf("Enter the length of the series:- ");
    scanf("%d", &n);
    printf("Your Fibonacci Series :- ");
    printf("%d %d",a,b);
    for(int i =0; i < n - 2; i++){
        sum = a + b;
        printf(" %d",sum);
        a = b;
        b = sum;
    }
    return 0;
}
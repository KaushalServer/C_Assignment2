# include <stdio.h>
int main(){
    int n,rev=0;
    printf("Enter number to be reversed :- ");
    scanf("%d",&n);
    while(n!=0){
        int res = n%10;
        rev = rev * 10 + res;
        n = n/10;
    }
    printf("Your reversed number is:- %d",rev);
    return 0;
}
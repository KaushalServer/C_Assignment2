# include <stdio.h>
int main(){
    int n, res=0,sum=0,rem=0,on;
    printf("Enter the number:- ");
    scanf("%d",&n);
    on=n;
    while(n!=0){
        res = n%10;
        rem = res*res*res;
        sum = sum + rem;
        res = 0;
        n=n/10;
    }
    if (sum == on){
        printf("Entered number is Armstrong number");
    }
    else{
        printf("Entered number is not Armstrong number");
    } 
    return 0;
}
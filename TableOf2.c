# include <stdio.h>
int main(){
    int i=1, n;
    printf("Enter how many digits you want:- ");
    scanf("%d",&n);
    printf("Your table of 2 is as follows:- ");
    while(i<=n){
        printf("\n");
        int b = 2*i;
        printf("2 * %d = %d",i,b);
        i++;
    }
    return 0;
}
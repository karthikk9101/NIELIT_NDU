#include <stdio.h>

int main(void){
    int n,i=0;
    int binary[32];

    printf("Enter decimal: ");
    scanf("%d",&n);

    if (n==0){
        printf("Binary equivalent: 0\n");
        return 0;
    }

    while (n>0){
        binary[i]=n%2;
        n=n/2;
        i++;
    }

    printf("Binary equivalent: ");

    for (int j=i-1;j>=0;j-){
        printf("%d",binary[j]);
    }
    printf("\n");

    return 0;
}
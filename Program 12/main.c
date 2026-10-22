#include <stdio.h>
#include <stdlib.h>

//Kartik(U32JX26S0029)
int main(){
    int n,i,j;
    printf("Enter n: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}

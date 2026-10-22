#include <stdio.h>
#include <stdlib.h>

//KARTIK(U32JX26S0029)
int main(){
    int a[100],n;
    int i,j,temp;

    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter elements: \n");

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Original Array: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    /* Ascending */
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("\n Ascending order: ");
    for(i=0; i<n; i++){
        printf("%d ",a[i]);
    }

    /* Descending */
    for(i=0;i<n-1;i++){
        for(j=0;j<n;j++){
            if(a[i]<a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("\n Descending order: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}


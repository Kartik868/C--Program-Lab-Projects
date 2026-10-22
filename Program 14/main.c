#include <stdio.h>
#include <stdlib.h>

//KARTIK(U32JX26S0029)
int main(){
    int a[100],n,key,i,count=0;

    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter elements: \n");

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter element to search: ");
    scanf("%d",&key);
    for(i=0;i<n;i++){
            if(a[i] == key){
                printf("Postion= %d\n",i+1);
                count++;
            }
    }
    if(count == 0){
        printf("Element not found.\n");
    }else{
        printf("Frequency= %d\n",count);
    }
    return 0;
}

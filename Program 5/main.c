#include <stdio.h>
#include <stdlib.h>

//Kartik(U32JX26S0029)
/* determining the leap year */
int main(){
    int year;
    printf("Enter a year: ");
    scanf("%d",&year);
    if(year % 400 == 0){
        printf("%d is a leap year. \n",year);
    }else if(year % 100 == 0){
        printf("%d is not a leap year. \n",year);
    }else if(year % 4 == 0){
        printf("%d is a leap year. \n",year);
    }else{
    printf("%d is not a leap year. \n",year);
    }
    return 0;
}

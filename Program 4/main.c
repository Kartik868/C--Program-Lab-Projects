#include <stdio.h>
#include <stdlib.h>

//Kartik(U32JX26S0029)
/* Largest number in three integer */

int main()
{
    int a,b,c;
    printf("Enter three integers: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c){
        printf("All three numbers are equal. \n");
    }else if(a==b){
        if(a>c){
            printf("largest=%d\n",a);
        }else{
            printf("largest=%d\n",c);
        }
        printf("First and second numbers are equal. \n");
    }else if(a==c){
            if(a>b){
                printf("largest=%d\n",a);
            }else{
                printf("largest=%d\n",b);
            }
            printf("First and third numbers ar equal. \n");
    }else if(b==c){
        if(b>a){
            printf("largest=%d\n",b);
        }else{
            printf("largest=%d\n",a);
        }
        printf("Second and third numbers are equal. \n");
    }else{
        if(a>b){
                if(a>c){
                    printf("largest=%d\n",a);
                }else{
                   printf("largest=%d\n",c);
                }
        }else{
            if(b>c){
                printf("largest=%d\n",b);
            }else{
                printf("largest=%d\n",c);
            }
        }
    }
    return 0;
}

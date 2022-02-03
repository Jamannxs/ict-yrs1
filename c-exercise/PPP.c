#include<stdio.h>
int main(){
    /*int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("Hello world\n");
    }

    int n1;
    scanf("%d",&n1);
    for(int i=1;i<=n1;i++){
        printf("%d ",i%10);
    }

    int a;
    do{
        scanf("%d",&a);
        if(a<18 || a>122){
            printf("Invalid\n");
        }
    }while(a<18 || a>122);
        printf("Okay, you pass!");

    int n2;
    scanf("%d",&n2);
    if(n2<=1000&&n2>=1){
        for(int i=1;i<=n2;i++){
            if(i%3==0){
                printf("%d ",i);
            }
            else if(i%7==0){
                printf("%d ",i);
            }
        }
    }
    else{
        printf("%d",n2);
    }*/

    int n3,i;
    scanf("%d",&n3);
    if(n3>0){
        for(int i=n3;i>=1;i--){
            if(n3%i==0){
                printf("%d",i);
            }
            if(i==1){
                printf("and %d.",i);
            }else
                printf(",");


        }
    }




return 0;
}

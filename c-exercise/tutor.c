#include<stdio.h>
int main(){
    
    //modulus by not using %
    // int a,b,c=0;
    // scanf("%d %d",&a,&b);
    // if(b>0){
    //     c=a/b;
    //     printf("%d\n",a-(c*b));
    // }

    // int year[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    // int date,month,day=0;
    // scanf("%d %d",&month,&date);
    // for(int i=0;i<month-1;i++){
    //     day+=year[i];
    // }
    // day=day+date-1;
    // printf("%d\n",day);

    // int n;
    // scanf("%d",&n);
    // int A[n],x;
    // do{
    //     for(int i=0;i<n;i++){
    //         x=0;
    //         scanf("%d",&A[i]);
    //         x=A[i];
    //     }
    // }while(x<=0||x>=9);

    // int hours,minutes;
    // do{
    //     scanf("%d %d",&hours,&minutes);
    // }while(hours<0||hours>24||minutes<0||minutes>59);
    // if(hours>12&&hours!=24){
    //     printf("%d:%d PM\n",hours-12,minutes);
    // }
    // else if(hours==24){
    //     printf("%d:%d AM\n",hours-12,minutes);
    // }
    // else if(hours==0){
    //     printf("%d:%d AM\n",hours+12,minutes);
    // }
    // else{
    //     printf("%d:%d AM\n",hours,minutes);
    // }

    // for(int i=1;i<=6;i++){
    //     for(int j=1;j<=i;j++){
    //         printf("%d ",(i*2*j));
    //     }
    //     printf("\n");
    // }

    // int c,d,gcd=0;
    // do{
    //     scanf("%d %d",&c,&d);
    // }while(c<=0||d<=0);
    // for(int i=1;i<=c&&i<=d;i++){
    //     if(c%i==0&&d%i==0){
    //         gcd=i;
    //     }
    // }
    // printf("%d\n",c*d/gcd);

    // int q,r;
    // do{
    //     scanf("%d %d",&q,&r);
    // }while(q<24&&q<=12);
    // if(q>=24){
    //     if(r>=60){
    //         printf("%d:%d AM",q%24+1,r%60);
    //     }
    //     else{
    //         printf("%d:%d AM",q%24,r);
    //     }
    // }
    // else{
    //     if(r>=60){
    //         printf("%d:%d PM",q%12+1,r%60);
    //     }
    //     else{
    //         printf("%d:%d PM",q%12,r);
    //     }
    // }

    int input;
    scanf("%d",&input);
    char A[input];
    for(int i=0;i<input;i++){
        scanf(" %c",&A[i]);
             
    } 
    for(int i=0;i<input;i++){
    while(A[i]<=48||A[i]>=57)
            { 
                if(A[i]<57&&A[i]>48){
                scanf(" %c",&A[i]);  
                }
                
             }      
             
    } 
    
    for(int i=0;i<input;i++){
        switch (A[i])
        {
            case 49:
                printf("one ");
            break;
            case 50:
                printf("two ");
            break;
            case 51:
                printf("three ");
            break;
            case 52:
                printf("four ");
            break;
            case 53:
                printf("five ");
            break;
            case 54:
                printf("six ");
            break;
            case 55:
                printf("seven ");
            break;
            default:
                printf("eight ");
            break;
        }
    }

}
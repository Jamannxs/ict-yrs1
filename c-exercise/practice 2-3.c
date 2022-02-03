#include<stdio.h>
#include<stdlib.h>
#define pi 3.14
int main(){

    //hours mins secs
    /*int n,hrs=0,min=0,sec=0;
    scanf("%d",&n);
    hrs=n/3600;
    min=(n-(hrs*3600))/60;
    sec=n%60;
    printf("%d:%d:%d",hrs,min,sec);*/

    //kilo meter centi
    /*int y,km=0,m=0,cm=0;
    scanf("%d",&y);
    km=y/100000;
    m=(y-(km*100000))/100;
    cm=y%100;
    printf("%d:%d:%d",km,m,cm);*/

    //circle
    /*float rad,peri=0,area=0;
    scanf("%f",&rad);
    peri=pi*rad*2;
    area=pi*rad*rad;
    printf("perimeter: %f",peri);
    printf("area: %f",area);*/

    //bmi
    /*float w,h,bmi=0;
    printf("weight(kg): ",w);
    scanf("%f",&w);
    printf("height(m): ",h);
    scanf("%f",&h);
    if(w>0&&h>0){
        bmi=w/(h*h);
        if(bmi<18.5){
            printf("Underweight");
        }
        else if(bmi>=18.5&&bmi<=24.9){
            printf("Normal weight");
        }
        else if(bmi>=25&&bmi<=29.9){
            printf("Over weight");
        }
        else{
            printf("Obese");
        }
    }
    else{
        printf("Invalid!");
    }*/

    //price ver.switch
    /*char v,m,n,x;
    int price,a,b,c;
    printf("Price: ");
    scanf(" %d",&price);
    printf("VIP(v) Member(m) Non-member(n)\n");
    printf("Membership status: ");
    scanf(" %c",&x);
    a = price*80/100;
    b = price*90/100;
    c = price;
    switch(x)
    {
    case 'v':
        printf("Total price:%d",a);break;
    case 'm':
        printf("Total price:%d",b);break;
    case 'n':
        printf("Total price:%d",c);break;
    default:
        printf("Thank you");break;
    }*/

    //price ver.if else
    /*char v1,m1,n1,x1;
    int price1;
    printf("Price: ");
    scanf(" %d",&price1);
    printf("VIP(v) Member(m) Non-member(n)\n");
    printf("Membership status: ");
    scanf(" %c",&x1);
    if(x1=='v'){
        printf("Total price:%d",price1*80/100);
    }
    else if(x1=='m'){
        printf("Total price:%d",price1*90/100);
    }
    else if(x1=='n'){
        printf("Total price:%d",price1);
    }
    else{
        printf("Thank you");
    }*/

    //score
    /*int q;
    printf("Score: ");
    scanf(" %d",&q);
    if(q>80){
        printf("Grade A");
    }
    else if(q<=80&&q>70){
        printf("Grade B");
    }
    else if(q<=70&&q>60){
        printf("Grade C");
    }
    else if(q<=60&&q>50){
        printf("Grade B");
    }
    else{
        printf("Grade E");
    }*/

    int n1,n2;
    srand(time(NULL));
    n1=rand();
    do {
        scanf(" %d",&n2);
        if(n1>n2){
            printf("Too low");
        }
        else{
            printf("Too high");
        }
    }while (n1==n2);
    if(n1==n2){
        printf("Congratulation!");
    }
    //WTF


return 0;
}

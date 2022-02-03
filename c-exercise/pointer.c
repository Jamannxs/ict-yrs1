#include<stdio.h>
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main(){

    // int m=10;
    // int n,o;
    // int *z=&m;
    // printf("z stores the address of m = %p\n",z);
    // printf("*z stores the value of m = %d\n",*z);
    // printf("&m is the address of m = %p\n",&m);
    // printf("&n stores the address of n = %p\n",&n);
    // printf("&o stores the address of o = %p\n",&o);
    // printf("&z stores the address of z = %p\n",&z);

    // int a,b;
    // printf("Input the first number: ");
    // scanf("%d",&a);
    // printf("Input the second number: ");
    // scanf("%d",&b);  
    // int *x=&a,*y=&b;
    // printf("The sum of the entered numbers is : %d",*x+*y);

/*     int a[5];
    for(int i=0;i<5;i++){
        printf("element - %d : ",i);
        scanf("%d",&a[i]);
    } 
    int *ptr;
    ptr=a; //a[0]
    printf("The elements you entered are : \n");
    for(int i=0;i<5;i++){
        printf("element - %d : %d\n",i,*(ptr+i)); //a[i]
    } */

    // char q='A';
    // char *p=&q;
    // for(int i=0;i<26;i++){
    //     printf("%c ",*p+i);
    // }

/*     int x,y;
    printf("Input the first number: ");
    scanf("%d",&x);
    printf("Input the second number: ");
    scanf("%d",&y);
    int *a=&x,*b=&y;
    *a>=*b?printf("%d is the maximum number\n",*a):printf("%d is the maximum number\n",*b); */
    // if(*a>=*b){
    //     printf("%d is the maximum number\n",*a);
    // }
    // else{
    //     printf("%d is the maximum number\n",*b);
    // }

/*     int n;
    printf("Input the number of elements to store in the array (max 10) : ");
    scanf("%d",&n);
    int A[n];
    printf("Input %d number of elements in the array: \n",n);
    for(int i=0;i<n;i++){
        printf("elment - %d : ",i+1);
        scanf("%d",&A[i]);
    }
    int *pt=A;
    for (int i=1;i<n;i++){
        *pt+=pt[i];
    }
    printf("The sum of array is : %d",*pt); */

/*     int n;
    printf("Input the number of elements to store in the array (max 10) : ");
    scanf("%d",&n);
    int A[n];
    printf("Input %d number of elements in the array: \n",n);
    for(int i=0;i<n;i++){
        printf("elment - %d : ",i+1);
        scanf("%d",&A[i]);
    }
    int *pt=A;
    printf("The elements of array in reverse order are : \n");
    for (int i=n-1;i>=0;i--){
        printf("elment - %d : %d\n",i,pt[i]);     
    } */

/*     int A[3];
    printf("Input the value of 1st element: ");
    scanf("%d",&A[0]);
    printf("Input the value of 2nd element: ");
    scanf("%d",&A[1]);
    printf("Input the value of 3rd element: ");
    scanf("%d",&A[2]);
    int *x=&A[0],*y=&A[1],*z=&A[2];
    printf("The value before swapping are: \n");
    for(int i=0;i<3;i++){
        printf("element %d = %d\n",i+1,A[i]);
    }
    swap(&A[0],&A[1]);
    swap(&A[0],&A[2]);
    printf("The value after swapping are: \n");
    for(int i=0;i<3;i++){
        printf("element %d = %d\n",i+1,A[i]);
    }     */


    


    return 0;
}
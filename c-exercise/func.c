#include<stdio.h>
int isEven(int aaa);
int isNegative(int bbb);
void repeatN(int ccc);
int greatThan(int one, int two);
int minimum(int one, int two);
int maximum(int one, int two);
int findSum(int one, int two);
float findAvg(int one, int two);
void swapp(int one, int two);
void printt(int one, int two);
void printCon(int *first,int sec);
void printConBack(int *first, int sec);
int FindMin(int *first, int sec);
int LocatedMin(int *first, int sec);
int FindMax(int *first, int sec);
int LocatedMax(int *first, int sec);
int SumSum(int *first, int sec);
float SumAvg(int *first, int sec);

int main(){
    /* int inpa,outa=0;
    scanf("%d", &inpa);
    outa=isEven(inpa);
    outa==1?printf("This is even number\n"):printf("This is odd number\n"); */

/*     int inpb, outb = 0;
    scanf("%d", &inpb);
    outb = isNegative(inpb);
    if(outb==-1){
        printf("This is negative number\n");
    }
    else if(outb==1){
        printf("This is positive number\n");
    }
    else{
        printf("Neither\n");
    } */

/*     int inpc;
    scanf("%d", &inpc);
    repeatN(inpc); */

    /* int inpua1,inpua2,outta=0;
    scanf("%d %d", &inpua1, &inpua2);
    outta = greatThan(inpua1, inpua2);
    outta == 1 ? printf("Greater than\n") : printf("Not greater than\n"); */

/*     int inpub1, inpub2;
    scanf("%d %d", &inpub1, &inpub2);
    printf("The minimum is %d\n", minimum(inpub1, inpub2));
    printf("The maximum is %d\n", maximum(inpub1, inpub2)); */

/*     int inpuc1, inpuc2;
    scanf("%d %d", &inpuc1, &inpuc2);
    printf("Ths sum is %d", findSum(inpuc1, inpuc2)); */

/*     int inpue1, inpue2;
    scanf("%d %d", &inpue1, &inpue2);
    printf("The average is %.2f\n", findAvg(inpue1, inpue2)); */

    /*     int inpuf1, inpuf2;
    scanf("%d %d", &inpuf1, &inpuf2);
    swapp(inpuf1, inpuf2); */

/*     int inpug1, inpug2;
    scanf("%d %d",&inpug1,&inpug2);
    printt(inpug1, inpug2); */

/*     int ia;
    scanf("%d", &ia);
    int oa[ia];
    for (int i = 0; i < ia;i++){
        scanf("%d", &oa[i]);
    }
    printCon(oa, ia); */

/*     int ib;
    scanf("%d", &ib);
    int ob[ib];
    for (int i = 0; i < ib;i++){
        scanf("%d", &ob[i]);
    }
    printConBack(ob, ib); */

/*     int ic;
    scanf("%d", &ic);
    int oc[ic];
    for (int i = 0; i < ic;i++){
        scanf("%d", &oc[i]);
    }
    printf("%d\n", FindMin(oc, ic)); */

/*     int id;
    scanf("%d", &id);
    int od[id];
    for (int i = 0; i < id;i++){
        scanf("%d", &od[i]);
    }
    printf("%d\n", LocatedMin(od,id)); */

/*     int ie;
    scanf("%d", &ie);
    int oe[ie];
    for (int i = 0; i < ie;i++){
        scanf("%d", &oe[i]);
    }
    printf("%d\n", FindMax(oe, ie)); */

/*     int iq;
    scanf("%d", &iq);
    int oq[iq];
    for (int i = 0; i < iq;i++){
        scanf("%d", &oq[i]);
    }
    printf("%d\n", LocatedMax(oq,iq)); */

/*     int ig;
    scanf("%d", &ig);
    int og[ig];
    for (int i = 0; i < ig;i++){
        scanf("%d", &og[i]);
    }
    printf("%d\n", SumSum(og, ig)); */

    int ih;
    scanf("%d", &ih);
    int oh[ih];
    for (int i = 0; i < ih;i++){
        scanf("%d", &oh[i]);
    }
    printf("%.2f\n", SumAvg(oh, ih));

    return 0;
}

int isEven(int aaa){
    if(aaa%2==0){
        return 1;
    }
    return 0;
}

int isNegative(int bbb){
    if(bbb<0){
        return -1;
    }
    else if(bbb==0){
        return 0;
    }
    return 1;
}

void repeatN(int ccc){
    for (int i = 1; i <= ccc;i++){
        printf("%d ",ccc);
    }
}

int greatThan(int one, int two){
    if(one>two){
        return 1;
    }
    return 0;
}

int minimum(int one, int two){
    int min;
    // if(one<=two){
    //     min = one;
    // }
    // else{
    //     min = two;
    // }
    // return min;
    if(one<=two){
        return one;
    }
    return two;
}

int maximum(int one, int two){
    if(one>=two){
        return one;
    }
    return two;
}

int findSum(int one, int two){
    int sum = 0;
    sum = one + two;
    return sum;
}

float findAvg(int one,int two){
    float avg = 0;
    avg = findSum(one, two) / 2.0;
    return avg;
}

void swapp(int one, int two){
    int temp;
    temp = one;
    one = two;
    two = temp;
    printf("%d %d\n", one , two );
    
}

void printt(int one, int two){
    printf("%d %d\n", one, two);
}

void printCon(int *first,int sec){
    for (int i = 0; i < sec;i++){
        printf("%d ", first[i]);
    }
}

void printConBack(int *first,int sec){
    for (int i = sec-1; i >= 0;i--){
        printf("%d ", first[i]);
    }
}

int FindMin(int *first,int sec){
    int min = first[0];
    for (int i = 1; i < sec;i++){
        if(min>first[i]){
            min = first[i];
        }
    }
    return min;
}

int LocatedMin(int *first,int sec){
    int x = FindMin(first, sec);
    for (int i = 0; i < sec;i++){
        if(x==first[i]){
            return i;
        }
    }
}

int FindMax(int *first,int sec){
    int max = first[0];
    for (int i = 1; i < sec;i++){
        if(max<first[i]){
            max = first[i];
        }
    }
    return max;
}

int LocatedMax(int *first,int sec){
    int x = FindMax(first, sec);
    for (int i = 0; i < sec;i++){
        if(x==first[i]){
            return i;
        }
    }
}

int SumSum(int *first, int sec){
    int sum = 0;
    for (int i = 0; i < sec;i++){
        sum += first[i];
    }
    return sum;
}

float SumAvg(int *first,int sec){
    float avg = 0.0;
    avg = SumSum(first, sec) / (sec*1.0);
    return avg; 
}
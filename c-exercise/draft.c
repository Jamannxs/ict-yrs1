#include<stdio.h> 
#include<string.h>
#define MaxLen 21

struct format{
    char name[MaxLen];
    int age;
    float income;
};

int main(){
    /* int count=0;
    int size = 3;
    int n[size][size];
    printf("Please input %dx%d matrix:\n",size,size);
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            scanf("%d",&n[i][j]);
        }
    }
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(n[i][j]==0){
                count++;
            }
        }
    }        
    printf("\nYour matrix:\n");
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            printf("%d ", n[i][j]);
        }
        printf("\n");
    }  
    printf("\n\nThis matrix has %d zero", count);
    if(count>1){
        printf("s");
    }
    printf("%c\n", 46); */

/*     int A[3][3];
    for (int i = 0; i < 3;i++){
        for (int j = 0; j < 3;j++){
            scanf("%d", &A[i][j]);
        }
    }
    for (int i = 0; i < 3;i++){
        for (int j = 0; j < 3;j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    } */

/*     int B[3][3];
    for (int i = 0; i < 3;i++){
        for (int j = 0; j < 3;j++){
            scanf("%d", &B[i][j]);
        }
    }
    for (int j = 0; j < 3;j++){
        for (int i = 0; i < 3;i++){
            printf("%d ", B[i][j]);
        }
        printf("\n");
    } */

/*     int C[3][3],D[3][3];
    for (int i = 0; i < 3;i++){
        for (int j = 0; j < 3;j++){
            scanf("%d", &C[i][j]);
        }
    }
    for (int i = 0; i < 3;i++){
        for (int j = 0; j < 3;j++){
            scanf("%d", &D[i][j]);
        }
    }
    for (int i = 0; i < 3;i++){
        for (int j = 0; j < 3;j++){
            C[i][j] += D[i][j];
        }
    }
    for (int i = 0; i < 3;i++){
        for (int j = 0; j < 3;j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    } */

/*     int E[5][3];
    for (int i = 0; i < 5;i++){
        for (int j = 0; j < 3;j++){
            scanf("%d", &E[i][j]);
        }
    }
    printf("\nFinal matrix:\n");
    for (int i = 0; i < 5;i++){
        int sum = 0;
        for (int j = 0; j < 3;j++){
            printf("%d ", E[i][j]);
            sum += E[i][j];
        }
        printf("%d", sum);
        printf("\n");
    } */

    //เหลือข้อ๕,๖

/*     char str1[MaxLen];
    scanf("%s", str1);
    printf("%d\n", strlen(str1)); */

/*     char str2[MaxLen];
    scanf("%s", str2);
    int x = 0;
    for (int i = 0; i < 21;i++){
        if(str2[i]>=32){
            x++;
        }
    }
    printf("%d\n", x); */

/*     char str[20] = "PROGRAMMER";
    int i = 0,e=0,m=0,p=0;
    printf("E: ");
    while(str[i]!='\0'){
        if(str[i]=='E'){
            e = i;
            printf("%d ", e);
        }
        i++;
    }
    i = 0;
    printf("\nM: ");
    while(str[i]!='\0'){
        if(str[i]=='M'){
            m = i;
            printf("%d ", m);
        }
        i++;
    }
    i = 0;
    printf("\nP: ");
    while(str[i]!='\0'){
        if(str[i]=='P'){
            p = i;
            printf("%d ", p);
        }
        i++;
    } */

/*     char str3[MaxLen],str4[MaxLen];
    scanf("%s %s", str3, str4);
    if((strcmp(str3, str4))==0){
        printf("Equal!\n");
    }
    else{
        printf("Not equal!\n");/
    } */

/*     char str5[MaxLen],str6[MaxLen];
    // scanf("%s %s", str5, str6);
    fgets(str5, MaxLen, stdin);
    fgets(str6, MaxLen, stdin);
    int i = 0,y = 0,j = 0;
    int x = 0, z = 0;
    for (i = 0; i < MaxLen;i++){
        if(str5[i]>32&&str5[i]<127){
            x++;
        }
        if(str6[i]>32&&str6[i]<127){
            z++;
        }
        printf("%d %c ",i,str5[i]);
        printf("%c",str6[i]);
        printf("\n");
    }
    printf("%d %d\n", x, z);
    if(x!=z){
        y++;
    }
    i = 0, j = 0;
    while((str5[i]!='\0' && str6[j]!='\0')){
        if(str5[i]!=str6[j]){
            y++;
        }
        i++;
        j++;
    }
    if(y>0){
        printf("Not equal!\n");
    }
    else{
        printf("Equal!\n");
    }  */

/*     int w;
    printf("Number of persons: ");
    scanf("%d", &w);
    struct format S[w];
    for (int i = 0; i < w;i++){
        scanf("%s %d %f", S[i].name, &S[i].age, &S[i].income);
    }
    printf("\nNames of people whose age < 18: \n");
    int j = 0;
    for (int i = 0; i < w;i++){
        if(S[i].age<18){
            j++;
            printf("%d) %s\n", j, S[i].name);
        }
    }
    float sum = 0,avg = 0.0;
    for (int i = 0; i < w;i++){
        sum += S[i].income;
    }
    avg = sum / w;
    printf("\nAverage income: %.2f\n",avg);
    printf("\n* of the youngest person and age >= 18:\n");
    int k = 0;
    int z[w],count=0;
    for (int i = 0; i < w;i++){
        if(S[i].age>=18){
            z[count] = i;
            count++;
        }  
    }
    int min = S[z[0]].age;
    for (int i = 0; i < count;i++){
        if(S[z[i]].age<=min){
            min = S[z[i]].age;
        }
    }
    for (int i = 0; i < w;i++){
            if(S[i].age==min){
                k++;
                printf("%d) %s, %d years, income: %.2f\n", k, S[i].name, S[i].age, S[i].income);
            }
    } */

/*     char st5[MaxLen], st6[MaxLen];
    fgets(st5, MaxLen, stdin);
    fgets(st6, MaxLen, stdin);
    int y=1;
    int i = 0;
    while (st5[i]!='\0'&&st6[i]!='\0'){
        if(st5[i]!=st6[i]){
            y = 0;
            break;
        }
        i++;
    }
    while (st5[i]!='\0'||st6[i]!='\0'){
        if((st5[i]=='\0'&&st6[i]!='\0')||(st5[i]!='\0'&&st6[i]=='\0')){
            y = 0;
        }
        i++;
    }
    if(y==1){
        printf("Equal!\n");
    }
    else if(y!=1){
        printf("Not equal!\n");
    } */

    /* char str7[MaxLen], str8[MaxLen];
    fgets(str7, MaxLen, stdin);
    char temp,minn=*str7;
    int i = 0;
    while (str7[i]!='\0'){
        if(str7[i]<=minn){
            temp = str7[i];
            str7[i] = minn;
            minn = temp;
        }
        i++;
    }
        printf("%s\n", str7);
        printf("%s", strupr(str7));
 */

    int n1,m1,n2,m2;
    do{
        printf("First matrix: ");
        scanf("%d %d",&n1,&m1);
        printf("Second matrix: ");
        scanf("%d %d",&n2,&m2);
    } while (m1 != n2);
    int A[n1][m1], B[n2][m2],C[n1][m2];
    for (int i = 0; i < n1;i++){
        for (int j = 0; j < m1;j++){
            scanf("%d", &A[i][j]);
        }
    }
    for (int i = 0; i < n2;i++){
        for (int j = 0; j < m2;j++){
            scanf("%d", &B[i][j]);
        }
    }

    int sum = 0;
    for (int i = 0; i < n1;i++){
        for (int j = 0; j < m2;j++){
            sum = 0;
            for (int k = 0; k < n2;k++){
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }

    for (int i = 0; i < n2;i++){
        for (int j = 0; j < m2;j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }    

        return 0;
}

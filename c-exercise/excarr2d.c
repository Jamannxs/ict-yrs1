#include<stdio.h>
int main(){
    // int val[3][4]={ {8,16,9,52},{3,15,27,6},{14,25,2,10}};
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<4;j++){
    //         printf("%d ",val[i][j]);
    //     }
    //     printf("\n");
    // }

    // int val[3][4]={ {8,16,9,52},{3,15,27,6},{14,25,2,10}};
    // int sum=0;
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<4;j++){
    //         sum+=val[i][j];
    //     }
    // }
    // printf("%d\n",sum);

    // int val[3][4]={ {8,16,9,52},{3,15,27,6},{14,25,2,10}};
    // int sum=0;
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<4;j++){
    //         if(val[i][j]>10){
    //             sum+=val[i][j];
    //         }
    //     }
    // }
    // printf("%d\n",sum);

    // int val[3][4]={ {8,16,9,52},{3,15,27,6},{14,25,2,10}};
    // int sum=0;
    // for(int j=0;j<4;j++){
    //     for(int i=0;i<3;i++){
    //         sum+=val[i][j];
    //     }
    //     printf("%d ",sum);
    // }

    // int a,b;
    // scanf("%d %d",&a,&b);
    // int A[a][b];
    // for(int i=0;i<a;i++){
    //     for(int j=0;j<b;j++){
    //         scanf("%d",&A[i][j]);
    //     }
    // }
    // int B[a][b];
    // for(int i=0;i<a;i++){
    //     for(int j=0;j<b;j++){
    //         scanf("%d",&B[i][j]);
    //     }
    // }
    // for(int i=0;i<a;i++){
    //     for(int j=0;j<b;j++){
    //         A[i][j]+=B[i][j];
    //     }
    // }
    // for(int i=0;i<a;i++){
    //     for(int j=0;j<b;j++){
    //         printf("%d ",A[i][j]);
    //     }
    //     printf("\n");
    // }

    // int n,m,sum1=0,sum2=0,x=0;
    // scanf("%d %d",&n,&m);
    // int case1[n][m];
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         scanf("%d",&case1[i][j]);
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     sum1=0;
    //     for(int j=0;j<m;j++){
    //         printf("%d ",case1[i][j]);
    //         sum1+=case1[i][j];
    //     }
    //     printf("%d",sum1);
    //     x=sum1;
    //     printf("\n");
    // }
    // for(int j=0;j<m;j++){
    //     sum2=0;
    //     for(int i=0;i<n;i++){
    //         sum2+=case1[i][j];
    //     }
    //     printf("%d ",sum2);
    // }
    // printf("%d",x+sum2);

    // int n,sum3=0;
    // float avg=0.0;
    // scanf("%d",&n);
    // int case2[n][n];
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         scanf("%d",&case2[i][j]);
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         if(j==i){
    //             printf("%d ",case2[i][j]);
    //             sum3+=case2[i][j];
    //         }
    //     }
    // }
    // printf("\n");
    // avg=sum3/n;
    // printf("%.2f",avg);

    // int a,b;
    // scanf("%d %d",&a,&b);
    // int A[a][b];
    // for(int i=0;i<a;i++){
    //     for(int j=0;j<b;j++){
    //         if(i%2!=0&&j%2==0){
    //             printf("1 ");
    //         }
    //         else{
    //             if(j%2!=0&&i%2==0){
    //                 printf("1 ");
    //             }
    //             else{
    //                 printf("0 ");
    //             }
    //         }
    //     }
    //     printf("\n");
    // }

    // int a,b;
    // scanf("%d %d",&a,&b);
    // int T[a][b];
    // for(int i=0;i<a;i++){
    //     for(int j=0;j<b;j++){
    //         scanf("%d",&T[i][j]);
    //     }
    // }
    // for(int i=0;i<a;i++){
    //     for(int j=0;j<b;j++){
    //         printf("%d ",T[i][j]);
    //     }
    //     printf("\n");        
    // }   
    // for(int j=0;j<b;j++){
    //     for(int i=0;i<a;i++){
    //         printf("%d ",T[i][j]);
    //     }
    //     printf("\n");
    // }    

    int a,b;
    scanf("%d %d",&a,&b);
    int A[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(i%2==0){
                if(j%2==0){
                    A[i][j]=0;
                }
                else{
                    A[i][j]=1;
                }
            }
            else{
                if(j%2==0){
                    A[i][j]=1;
                }
                else{
                    A[i][j]=0;
                }
            }
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
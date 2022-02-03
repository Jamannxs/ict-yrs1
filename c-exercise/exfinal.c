#include<stdio.h>
int main(){

    // int a,b;
    // scanf("%d %d",&a,&b);
    // int A[a][b];
    // for(int i=0;i<a;i++){
    //     for(int j=0;j<b;j++){
    //         scanf("%d",&A[i][j]);
    //     }
    // }
    // for(int i=0;i<a;i++){
    //     for(int j=0;j<b;j++){
    //         printf("%d ",A[i][j]);
    //     }
    //     printf("\n");
    // }    

    // int a1,b1;
    // scanf("%d %d",&a1,&b1);
    // int A[a1][b1];
    // for(int i=0;i<a1;i++){
    //     for(int j=0;j<b1;j++){
    //         scanf("%d",&A[i][j]);
    //     }
    // }
    // for(int i=0;i<a1;i++){
    //     for(int j=0;j<b1;j++){
    //         if(i==j){
    //             printf("%d ",A[i][j]);
    //         }
    //         else{
    //             printf("  ");
    //         }
    //     }
    //     printf("\n");
    // }

    // int a1,b1;
    // scanf("%d %d",&a1,&b1);
    // int A[a1][b1];
    // for(int i=0;i<a1;i++){
    //     for(int j=0;j<b1;j++){
    //         scanf("%d",&A[i][j]);
    //     }
    // }
    // for(int i=0;i<a1;i++){
    //     for(int j=0;j<b1;j++){
    //         if(i+j==a1-1){
    //             printf("%d ",A[i][j]);
    //         }
    //         else{
    //             printf("  ");
    //         }
    //     }
    //     printf("\n");
    // }

    // int a2,b2;
    // scanf("%d %d",&a2,&b2);
    // int B[a2][b2];
    // for(int i=0;i<a2;i++){
    //     for(int j=0;j<b2;j++){
    //         scanf("%d",&B[i][j]);
    //     }
    // }
    // for(int j=0;j<b2;j++){
    //     for(int i=0;i<a2;i++){
    //         if(i+j==a2-1){
    //             printf("%d ",B[j][i]);
    //         }
    //         else{
    //             printf("  ");
    //         }
    //     }
    //     printf("\n");
    // }

    // int a1,b1;
    // scanf("%d %d",&a1,&b1);
    // int A[a1][b1];
    // for(int i=0;i<a1;i++){
    //     for(int j=0;j<b1;j++){
    //         scanf("%d",&A[i][j]);
    //     }
    // }
    // for(int j=0;j<b1;j++){
    //     for(int i=0;i<a1;i++){
    //         if(i==j){
    //             printf("%d ",A[j][i]);
    //         }
    //         else{
    //             printf("  ");
    //         }
    //     }
    //     printf("\n");
    // }

    // int a,b;
    // scanf("%d %d",&a,&b);
    // int arr[a][b];
    // for(int i=0;i<a;i++){
    //     for(int j=0;j<b;j++){
    //         scanf("%d",&arr[i][j]);
    //     }
    // }
    // int ss[a*b][2];
    // int count=0;
    // for(int i=0;i<a;i++){
    //     for(int j=0;j<b;j++){
    //         if(arr[i][j]%2==0){
    //             ss[count][0]=i;
    //             ss[count][1]=j;
    //             count++;
    //         }
    //     }
    // }
    // for(int i=0;i<count;i++){
    //     printf("(%d,%d)",ss[i][0],ss[i][1]);
    //     if(i!=count-1){
    //         printf(", ");
    //     }
    // }

    // printf("\n");
    // int rr[a*b][2];
    // int cnt=0;
    // for(int i=0;i<a;i++){
    //     for(int j=0;j<b;j++){
    //          if(arr[i][j]%2!=0){
    //             rr[cnt][0]=i;
    //             rr[cnt][1]=j;
    //             cnt++;
    //          }                    
    //     }
    // }
    // for(int i=0;i<cnt;i++){
    //     printf("(%d,%d)",rr[i][0],rr[i][1]);
    //     if(i!=cnt-1){
    //         printf(", ");
    //     }
    // } 

    // int n,m;
    // scanf("%d %d",&n,&m);
    // int A[n][m],B[n][m];
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         scanf("%d",&A[i][j]);
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         scanf("%d",&B[i][j]);
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         A[i][j]+=B[i][j];
    //         printf("%d ",A[i][j]);
    //     }
    //     printf("\n");
    // }

    // int n,m;
    // scanf("%d %d",&n,&m);
    // int A[n][m],B[n][m];
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         scanf("%d",&A[i][j]);
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         scanf("%d",&B[i][j]);
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         A[i][j]-=B[i][j];
    //         printf("%d ",A[i][j]);
    //     }
    //     printf("\n");
    // }

    int n,m;
    scanf("%d %d",&n,&m);
    int A[n][m],B[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&B[i][j]);
        }
    }   
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            A[i][j]*=B[j][i];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if()
        }
    }     
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }  

    return 0;
}
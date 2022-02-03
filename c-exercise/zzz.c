#include<stdio.h>
#include<stdlib.h>

int sort(int *x, int y);

int main(){
    
    //22
/*     int n, m;
    printf("Input the rows and columns of the matrix : ");
    scanf("%d %d", &n, &m);
    printf("Input elements in the first matrix : \n");
    int A[n][m];
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("This matrix is : \n\n");
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("The transpose of a matrix is : \n");
    for (int j = 0; j < m;j++){
        for (int i = 0; i < n;i++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }     */

    //21 19
    /* int n1, m1, n2, m2;
    printf("Input the rows and columns of first matrix : ");
    scanf("%d %d", &n1, &m1);
    printf("Input the rows and columns of second matrix : ");
    scanf("%d %d", &n2, &m2);
    int B[n1][m1],C[n2][m2];
    printf("Input elements in the first matrix : \n");
    for (int i = 0; i < n1;i++){
        for (int j = 0; j < m1;j++){
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    printf("Input elements in the second matrix : \n");
    for (int i = 0; i < n2;i++){
        for (int j = 0; j < m2;j++){
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &C[i][j]);
        }
    }
    printf("The First matrix is : \n\n");
    for (int i = 0; i < n1;i++){
        for (int j = 0; j < m1;j++){
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    printf("The Second matrix is : \n\n");
    for (int i = 0; i < n2;i++){
        for (int j = 0; j < m2;j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    printf("The multiplication of two matrix is : \n\n");
    int D[n1][m1],sum=0;
    if(m1==n2){
        for (int i = 0; i < n1;i++){
            for (int j = 0; j < n2;j++){
                sum = 0;
                for (int k = 0; k < n1;k++){
                    sum += B[i][k] * C[k][j];
                }
                D[i][j] = sum;
            }
        }
        for (int i = 0; i < n1;i++){
            for (int j = 0; j < n2;j++){
                printf("%d ", D[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("Error!\n");
    }
    printf("\nThe Addition of two matrix is : \n\n");
    for (int i = 0; i < n1;i++){
        for (int j = 0; j < n1;j++){
            B[i][j] += C[i][j];
            printf("%d ", B[i][j]);
        }
        printf("\n");
    } */

        //18
        /* int E[3][3];
    printf("Input elements in the matrix : \n");
    for (int i = 0; i < 3;i++){
        for (int j = 0; j < 3;j++){
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &E[i][j]);
        }
    }
    printf("\nThe matrix is : \n");
    for (int i = 0; i < 3;i++){
        for (int j = 0; j < 3;j++){
            printf("%d ", E[i][j]);
        }
        printf("\n");
    } */

    //23 25
    /* int a;
    printf("Input the size of the square matrix : ");
    scanf("%d", &a);
    printf("Input element in the first matrix : \n");
    int F[a][a];
    for (int i = 0; i < a;i++){
        for (int j = 0; j < a;j++){
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &F[i][j]);
        }
    }
    printf("The matrix is : \n");
    for (int i = 0; i < a;i++){
        for (int j = 0; j < a;j++){
            printf("%d ", F[i][j]);
        }
        printf("\n");
    }
    int summy = 0;
    for (int i = 0; i < a;i++){
        for (int j = 0; j < a;j++){
            if(i==j){
                summy += F[i][j];
            }
        }
    }    
    printf("Addition of the right Diagonal elements is : %d\n", summy);
    printf("\nThe sum or rows and columns of the matrix is : \n");
    int sumrow = 0, sumcol = 0;
    for (int i = 0; i < a;i++){
        sumrow = 0;
        for (int j = 0; j < a;j++){
            sumrow += F[i][j];
            printf("%d ", F[i][j]);
        }
        printf("%d\n", sumrow);
    } 
    for (int j = 0; j < a;j++){
        sumcol = 0;
        for (int i = 0; i < a;i++){
            sumcol += F[i][j];
        }
        printf("%d ", sumcol);
    }  */

    //26
    /* int b;
    printf("Input the size of the square matrix : ");
    scanf("%d", &b);
    printf("Input elements in the first matrix : \n");
    int G[b][b];
    for (int i = 0; i < b;i++){
        for (int j = 0; j < b;j++){
            printf("element - [%d],[%d] : ",i,j);
            scanf("%d", &G[i][j]);
        }
    }
    printf("The matrix is : \n");
    for (int i = 0; i < b;i++){
        for (int j = 0; j < b;j++){
            printf("%d ", G[i][j]);
        }
        printf("\n");
    }  
    for (int i = 0; i < b;i++){
        for (int j = 0; j < b;j++){
            if(i>j){
                G[i][j] = 0;
            }
        }
    }
    printf("\nSetting zero in lower triangular matrix\n");
    for (int i = 0; i < b;i++){
        for (int j = 0; j < b;j++){
            printf("%d ", G[i][j]);
        }
        printf("\n");
    } */  

    //30
    /* int q1, r1, q2, r2;
    printf("Input Rows and Columns of the 1st matrix : ");
    scanf("%d %d", &q1, &r1);
    printf("Input Rows and Columns of the 2nd matrix : ");
    scanf("%d %d", &q2, &r2);
    int H[q1][r1], I[q2][r2];
    printf("Input elements in the first matrix : \n");
    for (int i = 0; i < q1;i++){
        for (int j = 0; j < r1;j++){
            printf("element - [%d],[%d] : ",i,j);
            scanf("%d", &H[i][j]);
        }
    }
    printf("Input elements in the second matrix : \n");
    for (int i = 0; i < q2;i++){
        for (int j = 0; j < r2;j++){
            printf("element - [%d],[%d] : ",i,j);
            scanf("%d", &I[i][j]);
        }
    }
    printf("The first matrix is : \n");
    for (int i = 0; i < q1;i++){
        for (int j = 0; j < r1;j++){
            printf("%d ", H[i][j]);
        }
        printf("\n");
    }   
    printf("The second matrix is : \n");
    for (int i = 0; i < q2;i++){
        for (int j = 0; j < r2;j++){
            printf("%d ", I[i][j]);
        }
        printf("\n");
    }
    printf("The Matrices can be compared : \n");
    int count = 0;
    for (int i = 0; i < q1;i++){
        for (int j = 0; j < r1;j++){
            if(H[i][j]==I[i][j]){
                count++;
            }
        }
    }
    if(count==q1*r1){
        printf("Two matrices are equal.\n");
    }
    else{
        printf("Two matrices are not equal.\n");
    }
 */

    //31
    /* int K[3][3];
    for (int i = 0; i < 3;i++){
        for (int j = 0; j < 3;j++){
            printf("element - [%d],[%d] : ",i,j);
            scanf("%d", &K[i][j]);
        }
    }
    int asa = 0,wosa=0;
    for (int i = 0; i < 3;i++){
        for (int j = 0; j < 3;j++){
            if(i==j){
                if(K[i][j]==1){
                    asa++;
                }
            }
            else{
                if(K[i][j]==0){
                    wosa++;
                }
            }
        }
    }
    for (int i = 0; i < 3;i++){
        for (int j = 0; j < 3;j++){
            printf("%d ", K[i][j]);
        }
        printf("\n");
    }
    if(asa==3&&wosa==6){
        printf("The matrix is an identity matrix.\n");
    }  
    else{
        printf("The matrix is not an identity matrix.\n");
    }   */

    //14
/*     int dog;
    scanf("%d", &dog);
    int setofdog[dog];
    for (int i = 0; i < dog;i++){
        printf("%d) ", i + 1);
        scanf("%d", &setofdog[i]);
    }
    int *bone = setofdog;
    sort(bone, dog);
    for (int i = 0; i < dog;i++){
        printf("%d) %d\n", i + 1, setofdog[i]);
    } */

    //21
    /* char alp = 'A';
    char *pp = &alp;
    for (int i = 0; i < 26;i++){
        printf("%c ", *pp + i);
    } */

    /* FILE *wee;
    wee = fopen("test.txt", "w");
    char eee[100] = {"This is the content of the file test.txt.\n"};
    fprintf(wee,"%s",eee);
    fclose(wee); */

    /* FILE *woo;
    char ddd[100];
    scanf("%s", ddd);
    woo = fopen(ddd,"r");
    // fgets(ddd, 100, woo);
    while(fscanf(woo,"%s",ddd)!=EOF){
        printf("%s ", ddd);
    } */





    return 0;
}

int sort(int *x, int y){
    int temp;
    for (int i = 0; i < y;i++){
        for (int j = 0; j < y;j++){
            // if(x[i]<=x[j]){
            //     temp = x[i];
            //     x[i] = x[j];
            //     x[j] = temp;
            // }
            if(*(x+i)<=*(x+j)){
                temp = *(x + i);
                *(x + i) = *(x + j);
                *(x + j) = temp;
            }
        }
    }
    return 0;
}
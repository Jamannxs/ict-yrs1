#include<stdio.h>
#include<string.h>
int check(char *x, int y,char *z);
int main(){

    /* char strr[100];
    fgets(strr, 100, stdin);
    char *pos;
    if ((pos=strchr(strr, '\n')) != NULL)
    *pos = '\0';
    int solong = strlen(strr);
    char edok[100],i=0;
    while(strr[i]!='\0'){
        edok[solong-i-1] = strr[i];
        i++;
    }
    edok[i] == '\0';   
    int j = 0;
    for(int i = 0; strr[i] != '\0';i++){
        if(strr[i]==edok[i]){
            j++;
        }
    }
    if (j == solong){
        printf("Palindrome\n");
    }
    else{
        printf("Not palindrome\n");
    } */

    /* char sleepy[100];
    fgets(sleepy, 100, stdin);
    char *pos;
    if ((pos=strchr(sleepy, '\n')) != NULL)
    *pos = '\0';
    int mak = strlen(sleepy);
    char wake[100];
    int fufu = check(sleepy,mak,wake);
    if(fufu==1){
        printf("Palindrome\n");
    }
    else{
        printf("Not palindrome\n");
    }

    return 0; */

    char bibo[100];
    fgets(bibo, 100, stdin);
    char *pos;
    if((pos=strchr(, '\n')) != NULL)
    *pos = '\0';

}
int check(char *x, int y,char *z){
    int count,i=0;
    while(x[i]!='\0'){
        z[y - i - 1] = x[i];
        i++;
    }
    z[i] = '\0';
    printf("%s", z);
    for (i = 0; x[i] != '\0';i++){
        if(x[i]==z[i]){
            count++;
        }
    }
    if(count==y){
        return 1;
    }
    else{
        return 0;
    }
}
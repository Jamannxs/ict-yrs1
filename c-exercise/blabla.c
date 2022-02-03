#include<stdio.h>
#include<string.h>
#include <ctype.h>
int main(){
    //2
    /* char strrrr[100];
    scanf("%s", strrrr);
    int count = 1;
    for (int i = 0; strrrr[i] != '\0';i++){
        count++;
    }
    printf("%d\n", count); */

    //3
    /* char sd[100];
    scanf("%s", sd);
    for (int i = 0; sd[i] != '\0';i++){
        printf("%c ", sd[i]);
    } */

    //4
    /*    char str[100];
        fgets(str, 100, stdin);

        int check = strlen(str);
        for (int i = check-1; i >= 0;i--){
            printf("%c ", str[i]);
        }
    */

    //5
    /* char sating[100];
    fgets(sating, 100, stdin);
    int longgy = strlen(sating);
    for (int i = 0; i < longgy - 1;i++){
        if(sating[i]>=48&&sating[i]<=57){
            printf("%c ", sating[i]);
        }
    } */

    //6
    /* char first[100], second[100];
    fgets(first, 100, stdin);
    fgets(second, 100, stdin);
    int fufu = 0,fifi = 0;
    for (int i = 0; first[i] != '\0';i++){
        fufu++;
    }
    for (int i = 0; second[i] != '\0';i++){
        fifi++;
    }
    if(fufu==fifi){
        printf("equal\n");
    }
    else{
        printf("not equal\n");
    } */

    //7
    /* char lidia[100];
    fgets(lidia, 100, stdin);
    int num = 0, ch = 0, spe = 0;
    int all = strlen(lidia);
    for (int i = 0; lidia[i] != '\0';i++){
        if(lidia[i]>=48&&lidia[i]<=57){
            num++;
        }
        if((lidia[i]>=65&&lidia[i]<=90)||(lidia[i]>=97&&lidia[i]<=122)){
            ch++;
        }
    }
    printf("Number: %d\n", num);
    printf("Character: %d\n", ch);
    printf("Specility: %d\n", all-num-ch); */

    //8
    /* char fff[100], ttt[100];
    fgets(fff, 100, stdin);
    strcpy(ttt, fff);
    printf("%s", ttt);
    printf("%d", strlen(ttt)); */

    //11
    /* char hungry[100];
    fgets(hungry, 100, stdin);
    char tempp;
    for (int i = 0; hungry[i] != '\0'; i++){
        for (int j = 0; hungry[j] != '\0'; j++){
            if(hungry[i]<=hungry[j]){
                tempp = hungry[i];
                hungry[i] = hungry[j];
                hungry[j] = tempp;
            }
        }
    }
    printf("%s", hungry); */

    //15
    /* char boring[100];
    fgets(boring, 100, stdin);
    for (int i = 0; boring[i] != '\0';i++){
        if(isupper(boring[i])){
            boring[i] += 32;
        }
        else if(islower(boring[i])){
            boring[i] -= 32;
        }
    }
    printf("%s", boring); */

    //18
    /* char kiki[100];
    fgets(kiki, 100, stdin);
    char what;
    scanf("%c", &what);
    int bye = 0;
    for (int i = 0; kiki[i] != '\0';i++){
        if(kiki[i]==what){
            bye++;
        }
    }
    printf("%d\n", bye); */

    //12
    /* int fact;
    scanf("%d", &fact);
    int bull=1;
    int *poii = &fact;
    for (int i = *poii; i > 0;i--){
        bull *= i;
    }
    printf("%d\n", bull); */

    //13
    /* char mama[100];
    fgets(mama, 100, stdin);
    int vowel = 0, cons = 0;
    for (int i = 0; mama[i] != '\0';i++){
        if(mama[i]=='a'||mama[i]=='e'||mama[i]=='i'||mama[i]=='o'||mama[i]=='u'){
            vowel++;
        }
        else if(mama[i]>=97&&mama[i]<=122){
            cons++;
        }
    }
    printf("%d %d\n", vowel, cons); */

    /* char reverse[100];
    fgets(reverse, 100, stdin);
    char xxx[100];
    int i = 0;
    int solong = strlen(reverse)-1;
    while(reverse[i]!='\0'){
        xxx[solong - i] = reverse[i];
        i++;
    }
    xxx[i] = '\0';
    printf("%s", xxx); */

    return 0;
}
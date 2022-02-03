#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int SizeofTopping;
/*--------------------Interface-------------------*/
char tea[7][100]={"Black tea","Green tea","Thai tea","Passion fruit green tea","Taro smoothie tea","Peach tea"};
char flavor[4][100]={"Normal","Milk","Honey","Brown sugar"};
char topping[4][100]={"Boba ","Popping Boba","Jelly","Pudding"};
int UnitsTopping[4]={10,10,10,10},TmpUnits[4],IfyesUnits[4];
int PriceSizeM[6]={30,30,30,45,40,35},PriceSizeL[6]={40,40,40,55,50,45},Priceflavor[4]={0,5,5,10},Pricetopping[4]={5,15,10,10};
/*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>Machine babab<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<*/
int CashInMachine[6]={0,3,3,3,3,3},UserCash[6]={0},ValuesOfCash[6]={10000000,100,50,20,10,5},Change_cash[6]={0};
struct Data {
    int tea;
    int size;
    int flavor;
    int FirstTopping;
    int SecondTopping;

} base;

void interface(){
    int i;
    system("clear");
    printf("--------------------------BOBA TEA----------------------------------\n");
    printf("\nMenu                                                  M  L  \n");
    for ( i = 0; i <5; i++){printf("%d:%-24.24s                           %-d %-d \n",i,tea[i],PriceSizeM[i],PriceSizeL[i]);
     }
    printf("\nFlavor                                \n");
    for ( i = 0; i <=3; i++){printf("%d:%-24.12s                           +%d\n",i,flavor[i],Priceflavor[i]);
    }
    printf("\nTopping                                \n");
    for ( i = 0; i <=3; i++){printf("%d:%-24.13s                           +%-2d   (%d units left)\n",i,topping[i],Pricetopping[i],UnitsTopping[i]);
    }
}
int check(int TmpInput,int max){
    if(TmpInput>=0&&TmpInput<=max) return TmpInput; else return -1; //-1 mean invalid
}
int Topping(char input[],int TmpInput,int price,int check_units){
    int maxtop;
        for(int i=0;i<4;i++){
                IfyesUnits[i]=0;
            }
        (check_units>=2)? (maxtop=2):(maxtop=1);
        for(int i=0;i<4;i++){
            TmpUnits[i]=UnitsTopping[i];
        }
        do{
            F5: printf("How many topping do you like(maximum %d) (q to exits): ",maxtop);
                gets(input);TmpInput=atoi(input);if(input[0]=='q'&&input[1]==0) return -1;
                TmpInput=check(TmpInput,maxtop); if(TmpInput==-1) goto F5;
                for(int i=0;i<strlen(input);i++){
                    if(input[i]>57||input[i]<48){goto F5;}
                }
                if(TmpInput>2||TmpInput<0) printf("Invalid\n");
                if((input[0]<48||input[0]>57)&&TmpInput==0) goto F5;
        }while(TmpInput!=0&&TmpInput!=1&&TmpInput!=2);SizeofTopping=TmpInput;
            
            for(int i=0;i<SizeofTopping;i++){
            F6: printf("Please select your %d topping:",i+1);
                gets(input);TmpInput=atoi(input);if(input[0]=='q'&&input[1]==0) return -1;
                for(int i=0;i<strlen(input);i++){
                    if(input[i]>57||input[i]<48){goto F6;}
                }
                    
                    while(TmpUnits[TmpInput]<=0||(TmpInput>3||TmpInput<0)||(input[0]=='q'&&input[1]==0)){
                        if(TmpUnits[TmpInput]<=0&&strlen(input)==1){
                            printf("Sorry out of stock,Please select again:");
                            gets(input);TmpInput=atoi(input);if(input[0]=='q'&&input[1]==0) return -1;
                                }
                                else {
                                printf("Invalid,Please select again:");
                                gets(input);TmpInput=atoi(input);}if(input[0]=='q'&&input[1]==0) return -1;
                    }
                        TmpUnits[TmpInput]-=1; IfyesUnits[TmpInput]+=1;
                    if(i+1==1) base.FirstTopping=TmpInput; else base.SecondTopping=TmpInput;
            }
            price=price+Pricetopping[base.FirstTopping]+Pricetopping[base.SecondTopping];
        return price;
}

int Machnice_cash(char input[],int TmpInput,int price){
    int SumUseriCash=0,change=0,Amount_cashChange=0,Calculate_money=0,tmpchange=0;
    printf("Toatal price:%d\n",price);
    printf("Machine cash(100=%d,50=%d,20=%d,10=%d,5=%d)\n",CashInMachine[1],CashInMachine[2],CashInMachine[3],CashInMachine[4],CashInMachine[5]);
    printf("Please insert cash (q to exits):\n");
            for(int i=0;i<6;i++){
                    UserCash[i]=0;Change_cash[i]=0;
            }
 baby:   while(SumUseriCash<price){ 
            for(int i=1;i<=5;i++){
        Holy:   printf("%d:",ValuesOfCash[i]);
                gets(input);TmpInput=atoi(input); if(input[0]=='q'&&input[1]==0) return 'q' ;
                    for(int i=0;i<strlen(input);i++){
                        if(input[i]>57||input[i]<48){goto Holy;}
                    }
                        if(TmpInput<0||(input[0]<48||input[0]>57)){
                            goto Holy;
                        }
                SumUseriCash+=ValuesOfCash[i]*TmpInput; //sum user cash
                UserCash[i]+=TmpInput;//Change_cash[i]=UserCash[i]; //store user cash in to arr

            }
        if(SumUseriCash<price){
            printf("Sorry your payment is't enough, add more?(y/n):");
            gets(input);
            if(input[0]=='y') goto baby; else printf("Change is %d (100=%d,50=%d,20=%d,10=%d,5=%d)\n",SumUseriCash,UserCash[1],UserCash[2],UserCash[3],UserCash[4],UserCash[5]);return 'q'; // goto somewhere
        }
    }
    printf("Total cash %d \n",SumUseriCash);change=SumUseriCash-price; Calculate_money=tmpchange=change;
    printf("Change is %d\n",change);
            for(int i=1;i<=5;i++){ 
                if(Calculate_money>=ValuesOfCash[i]&&Calculate_money<ValuesOfCash[i-1]){
                    Amount_cashChange=Calculate_money/ValuesOfCash[i];
                    if(CashInMachine[i]>=Amount_cashChange) Calculate_money-=(ValuesOfCash[i]*Amount_cashChange);
                    else if(CashInMachine[i]<Amount_cashChange){
                        printf("---Sorry,not enough cash to give change---\nChange:%d (100=%d,50=%d,20=%d,10=%d,5=%d)\n",SumUseriCash,UserCash[1],UserCash[2],UserCash[3],UserCash[4],UserCash[5]); return 'q';
                    }
                }

            }
            if(Calculate_money==0){
                for(int i=1;i<=5;i++){
                    if(change>=ValuesOfCash[i]){
                        Change_cash[i]=change/ValuesOfCash[i]; change-=Change_cash[i]*ValuesOfCash[i]; //store in change cash
                    }
                }
                printf("Change:%d (100=%d,50=%d,20=%d,10=%d,5=%d)\n",tmpchange,Change_cash[1],Change_cash[2],Change_cash[3],Change_cash[4],Change_cash[5]);
                for(int i=1;i<=5;i++){
                    CashInMachine[i]=CashInMachine[i]-Change_cash[i]+UserCash[i];// CashInMachine[i]+=UserCash[i]; //update cash in machine
                }
            }
    printf("Machine cash(100=%d,50=%d,20=%d,10=%d,5=%d)\n",CashInMachine[1],CashInMachine[2],CashInMachine[3],CashInMachine[4],CashInMachine[5]);
    return 0;
}

int main(){
    char input[10];
    int TmpInput,price=0,kaya=1,check_units=0,boring=-1000;
    Hi_there :
    interface(); price=0;
            
            do{
            F1: printf("Please Select tea(q to exits): "); 
                gets(input);TmpInput=atoi(input);if(input[0]=='q'&&input[1]==0) goto End;
                if(TmpInput>5||TmpInput<0) printf("Invalid\n");
                if((input[0]<48||input[0]>57)&&TmpInput==0) goto F1;
            }while((TmpInput>5||TmpInput<0)||strlen(input)!=1);base.tea=TmpInput;

            do{
            F2: printf("Please Select size(q to exits): ");
                gets(input);if(input[0]=='q'&&input[1]==0) goto End; 
                if(strlen(input)!=1&&TmpInput==0) goto F2;
            }while((input[0]!='m'&&input[0]!='l')||strlen(input)!=1); 
            if(input[0]=='m') price+=PriceSizeM[base.tea]; else price+=PriceSizeL[base.tea];

            do{
            F3: printf("Please Select flavor(q to exits): ");
                gets(input);TmpInput=atoi(input);if(input[0]=='q'&&input[1]==0) goto End; 
                if(TmpInput>5||TmpInput<0) printf("Invalid\n");
                if((input[0]<48||input[0]>57)&&TmpInput==0) goto F3;
            }while((TmpInput>3||TmpInput<0)||strlen(input)!=1);base.flavor=TmpInput; price+=Priceflavor[base.flavor];
            check_units=0;                                                              //set check units =0
            for(int i=0;i<4;i++){
                check_units+=UnitsTopping[i];                                           //calculate units
            }
                if(check_units==0){printf("Sorry Topping out of stock\n"); goto F4;}    //if units=0 goto pay monry
                    if(check_units>=1) price=Topping(input,TmpInput,price,check_units); //if units>=1 topping function
                        if(price==-1) goto End;                                         //prince -1 mean user press 'q' 
            do{
            F4: printf("Ready to pay or not>>'y'or'n'<<:");
                gets(input);if((input[0]=='q'||input[0]=='n')&&strlen(input)==1) goto End; 
                if(strlen(input)!=1&&TmpInput==0) goto F4;
            }while((input[0]!='y'&&input[0]!='n')||strlen(input)!=1); 

    kaya=Machnice_cash(input,TmpInput,price);
    printf("\n\n");
    if(kaya!='q'){
        if(SizeofTopping==2){printf("Here is your %s+%s+%s+%s\n",tea[base.tea],flavor[base.flavor],topping[base.FirstTopping],topping[base.SecondTopping]);
        }   else if(SizeofTopping==1){
            printf("Here is your %s+%s+%s\n",tea[base.tea],flavor[base.flavor],topping[base.FirstTopping]);
            }   else{
                printf("Here is your %s+%s\n",tea[base.tea],flavor[base.flavor]);
                }
            for(int i=0;i<4;i++){
                UnitsTopping[i]-=IfyesUnits[i];IfyesUnits[i]=0; 
            }
    }
    End: printf("Press any key to continue....(q to exits)\n");
        gets(input); if(input[0]=='q') return printf("Thank you!!\n"); else {system("clear"); goto Hi_there;}

    return 0;
}

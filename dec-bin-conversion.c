#include<stdio.h>
#include<math.h>
//use "gcc dec-bin-conversion -lm" to compile
int bintodec(long long int bin){
    int rem = 0,i = 0,dec=0;
    while(bin!=0){
        rem=bin%10;
        bin=bin/10;
        dec+=rem*pow(2,i);
        i++;
    }
    return dec;
}

long long int dectobin(int dec){
    int rem = 0,i=1;
    long long int bin = 0;
    while(dec!=0){
        rem=dec%2;
        dec=dec/2;
        bin+=rem*i;
        i=i*10;
    }
    return bin;
}
int main(){
    int choice;
    long long int bin;
    int dec;
    printf("Enter 0: dec to bin\n");
    printf("Enter 1: bin to dec\n");
    scanf("%d",&choice);

    if(choice){
        printf("Enter the Input(in bin): ");
        scanf("%lld",&bin);
        printf("%lld --> %d\n",bin,bintodec(bin));
    }
    else{
        printf("Enter the Input(in dec): ");
        scanf("%d",&dec);
        printf("%d --> %lld\n",dec,dectobin(dec));
    }
return  0;
}
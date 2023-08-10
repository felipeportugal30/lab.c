#include <stdio.h>
int main(){
    int x;
    int i1 = 0, i2 = 0;
    printf("Enter one integers and find it out if is pair and if is prime:\n ");
    scanf("%d", &x);
    
    //Par ou ímpar
    if (x % 2){
        printf("this integers is ODD!\n");
    }else{
        printf("this integers is PAIR!\n");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    
    if(n >= 100 && n <= 999){
        if(n == 404){
            printf("NOT FOUND\n");
        }
        else{
        printf("FOUND\n");
        }
        
    }


    return 0;
}
//This is not fully completed yet. But half of the problem has been solved. After solving the code, this one will be uploaded.
#include<stdio.h>
int main(){
    int n;
    printf("Enter how many value do you want to add: ");
    scanf("%d", &n);
    int array[n];
    int i, sum = 0;
    for(i = 0; i < n; i++){
        scanf("%d", &array[i]);
        sum += array[i];
    }
    //printf("%d\n", sum);

    int mean, median, mode;
    mean = sum / n;
    printf("Mean: %d\n", mean);

    int add = 0;
    for(i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(array[i] == array[j]){
                add++;
            }
        }
        if(add > 1){
            mode = array[i];
            break;
        }
    }
    printf("Mode: %d\n", mode);



    return 0;
}
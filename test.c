#include<time.h>
#include<stdio.h>
#include<stdlib.h>

int main(){
    clock_t start, end;
    
    start = clock();

    int numeros[24998];

    int insert;
    for(int i=2;i < 25000;i++){
        if(i != 0 && i != 1){
            numeros[insert] = i;
            insert = insert +1;
        }
    }

    int s = ( sizeof(numeros) / sizeof(numeros[0]) );
    int primo[2762] = {};
    int count = 0;
    for(int n=0;n < s;n++){
        int mult = 0;
        for(int j=2;j < numeros[n]+1;j++){
            if(numeros[n] % j == 0){
                mult = mult +1;
            }
        }

        if(mult <= 1){
            primo[count] = numeros[n];
            count++;
        }
    }

    end = clock();

    double total_time = (end - start)/CLOCKS_PER_SEC;
    printf("%f\n", total_time);

    return 0;
}
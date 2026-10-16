#include <stdio.h>

void minmax(double tomb[], double *min, double *max){
    *min = 100;
    *max = 0;
    for(int i = 0; i < 10; i++){
        if(tomb[i] < *min){
            *min = tomb[i];
        }
        if(tomb[i] > *max){
            *max = tomb[i];
        }
    }
}


int main() {
printf("Hello Git -A es -B kozos verzio");
double tomb[100];
double min;
double max;
minmax(tomb,min,max);
 return 0;
}

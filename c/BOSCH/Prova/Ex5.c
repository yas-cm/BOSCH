#include <stdio.h>
int main(){

    int array[] = {64,34,25,12,22,11,90};
    int n = sizeof(array)/sizeof(array[0]);
    
    for(int step = 0; step < n- 1; ++ step){
        for(int i = 0; i < n- step - 1; ++i){
            if(array[i] > array[i+1]){
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
    for(int i = 0; i < 7; i++) printf("%d  ", array[i]);
    return 0;
}
#include <stdio.h>

int main() {
     int w,h;

    for(w=1; w<=5; ++w){
        //공백
        for(h=4; 0<=h-w; --h){
            printf(" ");
        }
        //별
        for(h=1; h <= w*2-1; ++h){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}

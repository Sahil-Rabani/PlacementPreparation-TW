// 1. Print a Single Star (*).
// 2. Print Four Stars (****).
// 3. Print n Stars on Same Line.
// 4. Print Square of Stars (n × n Stars).
// 5. Print an Increasing Triangle of Stars.
// 6. Print a Right-Aligned Triangle of Stars.
// 7. Print Stars in Even Numbers (2, 4, 6, 8, 10).
// 8. Print Stars in Odd Numbers (1, 3, 5, 7, 9).

#include <stdio.h>

void singleStar(){
    printf("*");
}

void fourStar(){
    printf("****");
}

void starline(int n){
    for(int i = 1; i <= n; i++){
        printf("*");
    }
}

void oneline(int row){
    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= row; j++){
            printf("*");
        }
        printf("\n");
    }
}

void triangle(int row){
    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
}

void rightAlignedTriangle(int row){
    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= row-i; j++){
            printf(" ");
        }
        for(int k = 1; k <= i; k++){
            printf("*");
        }
        printf("\n");
    }
}

void evenTriangle(int row){
    for(int i = 1; i <= row; i++){
        for(int j = 0; j < i*2; j++){
            printf("*");
        }
        printf("\n");
    }
}

void oddTriangle(int row){
    for(int i = 1; i <= row; i++){
        for(int j = 1; j< i*2; j++){
            printf("*");
        }
        printf("\n");
    }
}

void main(){
    singleStar();
    printf("\n\n");
    fourStar();
    printf("\n\n");
    starline(5);
    printf("\n\n");
    oneline(5);
    printf("\n\n");
    triangle(5);
    printf("\n\n");
    rightAlignedTriangle(5);
    printf("\n\n");
    evenTriangle(5);
    printf("\n\n");
    oddTriangle(5);
    printf("\n\n");
}

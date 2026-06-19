// 9. Print a Centered Pyramid of Stars
// Output:
//     *
//    ***
//   *****
//  *******
// *********

// 10. Print Stars and Spaces Alternating (Stars and Blank Spaces) (b = blank space here)
// Output:
// bbbb*
// bbb*b*
// bb*b*b*
// b*b*b*b*
// *b*b*b*b*

// 11. Print Numbers in an Increasing Sequence (1, 12, 123, 1234, 12345)
// Output:
// 1
// 12
// 123
// 1234
// 12345

// 12. Print Repeated Numbers per Row (Same Number Repeated)
// Output:
// 1
// 22
// 333
// 4444
// 55555

// 13. Print Numbers in a Continuous Triangle Pattern
// Output:
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

// 14. Print Numbers in Floyd's Triangle Style
// Output:
// 1
// 2 3
// 4 5 6
// 7 8 9 0
// 1 2 3 4 5
// 5 7 8 9 0 1
// 2 3 4 5 6 7 8

#include <stdio.h>

void pyramid(int row){
    for(int i = 1; i <= row; i++){
        for(int j = row; j > i; j--){
            printf(" ");
        }
        for(int k = 1; k < i*2; k++){
            printf("*");
        }
        printf("\n");
    }
}

void main(){
    pyramid(5);
    printf("\n\n");
}

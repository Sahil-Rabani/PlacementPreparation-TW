// 1. Print all numbers between 1 and 100 whose sum of digits is even.
// 2. Count total numbers between 1 and 500 that are divisible by 7 but not divisible by 5.
// 3. Print all palindrome numbers between 1 and 500.
// 4. Print all numbers from 1 to 100 whose sum of digits is a multiple of 3.
// 5. Print all numbers from 1 to n whose binary representation contains an even number of 1s.
// 6. Print a pattern where the i-th row prints the value i × i.
// 7. Find and print the sum of odd digits and the sum of even digits of the given number.
// 8. Print all Armstrong numbers between 1 and 1000.
// 9. Print all Perfect numbers between 1 and 1000.
// 10. Find the number between 1 and n that has the maximum digit sum, and print that number along with its digit sum.


#include <stdio.h>

void sumDigit(){
    for(int i = 1; i <= 100; i++){
        int sum = 0, j = i;
        while(j != 0){
            int digit = j % 10;
            sum+=digit;
            j /= 10;
        }
        if(sum % 2 == 0){
            printf("%d ", i);
        }
    }
}

void countDivisible(){
    int count = 0;
    for(int i = 1; i <= 500; i++){
        if(i % 7 ==0 && i % 5 != 0){
            count++;
        }
    }
    printf("Total division = %d", count);
}

void pallindrome(){
    for(int i = 1; i <= 500; i++){
        int j = i, reverse = 0;
        while(j != 0){
            int digit = j %10;
            reverse = (reverse *10)+digit;
            j /= 10;
        }
        if(i == reverse){
            printf("%d, ", i);
        }
    }
}

void multipleThree(){
    printf("Sum of digit is multiple of 3:- ");
    for(int i = 1; i <= 100; i++){
        int j = i, sum = 0;
        while(j != 0){
            int digit = j %10;
            sum+= digit;
            j /= 10;
        }
        if(sum % 3 == 0){
            printf("%d, ", i);
        }
    }
}

void countOnes(int n){
    printf("Counting ones in binary:- ");
    for(int i = 1; i <= n; i++){
        int temp = i, count = 0;
        while(temp != 0){
            if(temp % 2 == 1){
                count++;
            }
            temp/= 2;
        }
        if(count % 2 == 0){
            printf("%d, ", i);
        }
    }
}

void pattern(int rows){
    for(int i = 1; i <= rows; i++){
        printf("%d \n", i*i);
    }
}

void oddEvenDigits(int num){
    int eSum = 0, oSum = 0;
    while(num != 0){
        int digit = num % 10;
        if(digit % 2 == 0){
            eSum += digit;
        }else oSum += digit;
        num /= 10;
    }
    printf("Sum of Even digits = %d & Odd digits = %d", eSum, oSum);
}

void armstrong(){
    for(int i = 1; i <= 1000; i++){
        int pow = 0, sum = 0, temp = i, temp2 = i;
        while( temp != 0){
            pow++;
            temp /= 10;
        }
        while(temp2 != 0){
            int power = 1;
            int digit = temp2%10;
            for(int j = 1; j <= pow; j++){
                power *= digit;
            }
            sum+=power;
            temp2/=10;
        }
        if(sum == i){
            printf("%d, ", i);
        }
    }
}

void pefect(){
    for(int i = 1; i <= 1000; i++){
        int sum = 0;
        for(int j = 1; j < i; j++){
            if(i % j == 0){
                sum += j;
            }
        }
        if(sum == i){
            printf("%d, ", i);
        }
    }
}

void highestDigit(int n){
    int maxSum = 0, maxNum = 0;
    for(int i = 1; i <= n; i++){
        int temp = i, sum = 0;
        while(temp != 0){
            sum += temp%10;
            temp/= 10;
        }
        if(sum > maxSum){
            maxSum = sum;
            maxNum = i;
        }
    }
    printf("Number = %d & Sum of digit = %d", maxNum, maxSum);
}

void main(){
    sumDigit();
    printf("\n");
    countDivisible();
    printf("\n");
    pallindrome();
    printf("\n");
    multipleThree();
    printf("\n");
    countOnes(10);
    printf("\n");
    pattern(5);
    printf("\n");
    oddEvenDigits(897543);
    printf("\n");
    armstrong();
    printf("\n");
    pefect();
    printf("\n");
    highestDigit(20);
    printf("\n");
}

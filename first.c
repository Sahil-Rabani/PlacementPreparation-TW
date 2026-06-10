// Input and print a number
// Add two numbers
// Check even/odd
// Find largest of 2 numbers
// Print 1 to N numbers
// Sum of N numbers
// Reverse a number
// Palindrome number
// Factorial using loop
// Prime number check
// Swap two numbers
// Count digits
// Sum of digits
// Simple interest calculation
// Fibonacci series (first N terms)

#include <stdio.h>
void IO(){
    int num;
    printf("Enter number:- ");
    scanf("%d", &num);
    printf("Number entered by you is %d", num);
}

void add(int num1, int num2){
    printf("%d", num1+num2);
}

void largest(int num1, int num2){
    if(num1>num2){
        printf("Num1 is largest");
    }else{
        printf("Num2 is largest");
    }
}

void nth(int n){
    for(int i = 1; i <= n; i++){
        printf("%d", i);
    }
}

void nths(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    printf("%d", sum);
}

void reverse(int num){
    int rev = 0;
    while(num != 0){
        int digit = num % 10;
        rev = (rev*10) + digit;
        num /= 10;
    }
    printf("reverse = %d", rev);
}

void pallindrome(int num){
    int temp = num, rev = 0;
    while(num != 0){
        int digit = num % 10;
        rev = (rev*10) + digit;
        num /= 10;
    }
    if(rev == temp){
        printf("Number is pallindrome");
    }else{
        printf("Number is not pallindrome");
    }
}

void factorial(int num){
    int fact = 1;
    for(int i = 1; i <= num; i++){
        fact *= i;
    }
    printf("Factoral = %d", fact);
}

void prime(int num){
    int isprime = 1;
    if(num == 2)printf("Number is prime");
    for(int i = 3; i < num; i++){
        if(num % i == 0){
            printf("NUmber is not prime");
            isprime = 0;
            break;
        }
    }
    if(isprime){
        printf("Number is prime");
    }else{
        printf("Number is not prime");
    }
}

void swap(int num1, int num2){
    int temp = num2;
    num2 = num1;
    num1 = temp;
    printf("NUmber1 = %d & Number2 = %d", num1,num2);
}

void count(int num){
    int cnt = 0;
    while(num != 0){
        cnt++;
        num /= 10;
    }
    printf("Digits = %d", cnt);
}

void sumdig(int num){
    int sum = 0;
    while(num != 0){
        int digit = num % !0;
        sum+= digit;
        num/= 10;
    }
    printf("SUm = %d", sum);
}

void SI(int p, int r, int t){
    int si = p*r*t;
    printf("Simple Interest = %d",si);
}

void fibonacci(int n){
    int num1 = 0, num2 = 0;
    for(int i = 1; i <= n; i++){
        int temp = num1+num2;
        printf("%d", temp);
        num1 = num2;
        num2 = i;
    }
}

void main(){
    fibonacci(10);
    printf("\n");
}


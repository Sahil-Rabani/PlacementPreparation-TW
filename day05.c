// Phase 1 : While Loop
// 1.​ Print all numbers from 1 to 10 using a loop.
// 2.​ Print numbers from 10 down to 1 in reverse order.
// 3.​ Print all even numbers between 1 and 100.
// 4.​ Print all odd numbers between 1 and 100.
// 5.​ Print the multiplication table of a given number from n × 1 to n × 10.
// 6.​ Calculate and print the sum of the first n natural numbers.
// 7.​ Calculate the sum of all even numbers from 1 up to n.
// 8.​ Calculate the sum of all odd numbers from 1 up to n.
// 9.​ Calculate and print the factorial of a given number.
// 10.​Find and print the product of all digits of a given number.
// 11.​Count and print the total number of digits in a given number.
// 12.​Reverse the given number and print the reversed value.
// 13.​Check whether the given number is a palindrome.
// 14.​Find and print the sum of digits of the given number.
// 15.​Check whether the given number is an Armstrong number.
// 16.​Check whether the given number is a Perfect number.
// 17.​Print all prime numbers between 1 and 100.

#include <stdio.h>

void counting(){
    int i = 1;
    while(i != 10){
        printf("%d", i);
        i++;
    }
}

void revCounting(){
    int i = 10;
    while( i >= 1){
        printf("%d", i);
        i--;
    }
}

void evenNum(){
    int i = 1;
    while(i <=100){
        if(i%2 == 0){
            printf("%d",i);
        }
        i++;
    }
}

void oddNum(){
    int i = 0;
    while( i <= 100){
        if(i % 2 != 0){
            printf("%d", i);
        }
        i++;
    }
}

void table(int n){
    int i = 0;
    while(i <= 10){
        printf("%d X %d = %d", n,i,(n*i));
        i++;
    }
}

void sumNatural(int n){
    int i = 1, sum = 0;
    while(i != n){
        sum+= i;
        i++;
    }
    printf("Sum = %d", sum);
}

void sumEven(int n ){
    int i = 1, sum = 0;
    while( i <= n){
        if(i % 2 == 0){
            sum += i;
        }
        i++;
    }
    printf("Sum of even Number = %d", sum);
}

void oddSum(int n){
    int i = 1, sum = 0;
    while(i <= n){
        if(i % 2 != 0){
            sum += i;
        }
        i++;
    }
    printf("Sum of Odd Number = %d", sum);
}

void factorial(int n){
    int i = 1, fact = 1;
    while( i <= n){
        fact *= i;
        i++;
    }
    printf("Factorial of a given number = %d", fact);
}

void productDigit(int num){
    int prod = 1;
    while(num != 0){
        int digit = num % 10;
        prod *= digit;
        num/=10;
    }
    printf("Product of digits = %d", prod);
}

void countDigit(int num){
    int cout = 0;
    while(num != 0){
        cout++;
        num/=10;
    }
    printf("Total no. of digits = %d", cout);
}

void reverseNum(int num){
    int reverse = 0;
    while(num>=0){
        int digit = num % 10;
        reverse = (reverse*10)+digit;
        num/=10;
    }
    printf("Reverse Number = %d", reverse);
}

void pallindrome(int num){
    int reverse = 0, temp = num;
    while (temp != 0)
    {
        int digit = temp % 10;
        reverse = (reverse*10)+digit;
        temp/=10;
    }
    if(num == reverse){
        printf("Number is Pallindrome.");
    }
}

void sumDigit(int num){
    int sum = 0;
    while(num != 0){
        int digit = num % 10;
        sum += digit;
        num/=10;
    }
    printf("Sum of digits = %d", sum);
}

void armstrong(int num){
    int pow= 0, sum = 0, temp = num, ogNum = num;
    while(temp != 0){
        pow++;
        temp/=10;
    }

    while(num!=0){
        int digit = num % 10;
        int i = 1;
        while (i != 3)
        {
            digit*= digit;
        }
        sum+=digit;
    }
    if(ogNum == sum){
        printf("Given number is armstrong number.");
    }else{
        printf("Given number is not an armstrong number.");
    }
}

void perfect(int num){
    int i = 1, sum =0;
    while(i < num){
        if(num % i == 0){
            sum+=i;
        }
    }
    if(sum == num){
        printf("Given number is perfect number.");
    }else{
        printf("Given number is not a perfect number.");
    }
}

void prime(){
    int i = 1;
    if(i == 2) printf("%d", i);
    while(i <= 100){
        int flag =1, j = 3;
        while(j < i){
            if(i % j == 0){
                flag = 0;
                break;
            }
            j++;
        }
        if(flag){
            printf("%d ", i);
        }
        i++;
    }
}

void main(){
    prime();
}

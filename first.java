// Print numbers from 1 to 100
// Print even numbers from 1 to 50
// Find sum of first N natural numbers
// Check if a number is prime
// Reverse a number
// Check palindrome number
// Find factorial of a number
// Swap two numbers (with & without temp)
// Find largest of 3 numbers
// Count digits in a number
// Find sum of digits
// Check Armstrong number
// Print multiplication table of a number
// Find GCD of two numbers
// Find LCM of two numbers

public class first{
    public static void main(String [] args){
        System.out.println();
        gcd(4,8);
        System.out.println();
        LCM(4,5);
        System.out.println();
    }

    public static void num(){
        for(int i = 1; i <= 100; i++){
            System.out.print(i + ", ");
        }
    }

    public static void even(){
        for(int i = 1; i <= 50; i++){
            if(i%2==0){
                System.out.print(i + ",");
            }
        }
    }

    public static void sum(int n){
        int s = 0;
        for(int i = 1; i <= n; i++){
            s+= i;
        }
        System.out.print("Sum = " + s);
    }

    public static void prime(int num){
        boolean isPrime = true;
        if(num == 2) System.out.print("Number is prime");
        for(int i = 3; i < num; i++){
            if(num % i == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            System.out.print("Number is Prime");
        }else{
            System.out.print("Number is not prime");
        }
    }

    public static void reverse(int num){
        int revNum = 0;
        while(num != 0){
            int digit = num % 10;
            revNum = (revNum*10) + digit;
            num/=10;
        }
        System.out.print("Reverse number = " + revNum);
    }

    public static void palindrome(int num){
        int temp = num, rev = 0;
        while(num != 0){
            int digit = num % 10;
            rev = (rev *10) + digit;
            num /= 10;
        }
        if(temp == rev){
            System.out.print("Number is pallindrome");
        }else{
            System.out.print("Number is not pallindrome");
        }
    }

    public static void factorial(int num){
        int fact = 1;
        for(int i = 1; i <= num; i++){
            fact *= i;
        }
        System.out.print("Factorial = " + fact);
    }

    public static void swapWith(int num1, int num2){
        int temp = num1;
        num1 = num2;
        num2 = temp;
        System.out.print("NUmber1 = " + num1 + " Number2 = " + num2);
    }

    public static void largest(int num1, int num2, int num3){
        if(num1 > num2){
            if(num1 > num3){
                System.out.print("Number 1 is greater");
            }else{
                System.out.print("Number 3 is greater");
            }
        }else{
            if(num2 > num3){
                System.out.print("Number 2 is greater");
            }else{
                System.out.print("Number 3 is greater");
            }
        }
    }

    public static void count(int num){
        int cnt = 0;
        while(num != 0){
            cnt++;
            num/=10;
        }
        System.out.print("Digits = " + cnt);
    }

    public static void sumDig(int num){
        int sum = 0;
        while(num != 0){
            int digit = num % 10;
            sum += digit;
            num /= 10;
        }
        System.out.print("Sum = " + sum);
    }

    public static void Armstrong(int num){
        int pow = 0, temp = num, temp2 = num,  sum = 0;
        while(num != 0){
            pow++;
            num/= 10;
        }
        while(temp2 != 0){
            int digit = temp2 /10;
            sum += Math.pow(digit, pow);
            temp2/=10;
        }
        if(temp == sum){
            System.out.print("Number is armstrong");
        }else{
            System.out.print("Not a Armstrong Number");
        }
    }

    public static void table(int num){
        for(int i = 1; i <= 10; i++){
            System.out.println(num + " * " + i + " = " + (num*i));
        }
    }

    public static void gcd(int num1, int num2){
        while(num2 != 0){
            int temp = num2;
            num2 = num1 % num2;
            num1 = temp;
        }
        System.out.print(num1);
    }

    public static void LCM(int num1, int num2){
        int lcm = 0, a = num1, b = num2;
        while(num2 != 0){
            int temp = num2;
            num2 = num1 % num2;
            num1 = temp;
        }
        lcm = (a*b)/num1;
        System.out.print("LCM = " + lcm);
    }
}
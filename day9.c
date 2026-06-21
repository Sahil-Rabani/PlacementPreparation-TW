// 1. Find the Length of a String
//    Write a program to find the length of a string without using strlen().
// 2. Reverse a String
//    Write a program to reverse a string in-place.
// 3. Count Vowels, Consonants, Digits, and Spaces
//    Write a program to count the number of vowels, consonants, digits, and spaces in a string.
// 4. Toggle Case of Characters
//    Write a program to convert lowercase letters to uppercase and uppercase letters to lowercase.
// 5. Check if a String is a Palindrome
//    Write a program to determine whether a given string is a palindrome.
// 6. Count Occurrences of a Character
//    Write a program to count how many times a given character appears in a string.
// 7. Copy a String
//    Write a program to copy one string into another without using strcpy().
// 8. Concatenate Two Strings
//    Write a program to concatenate two strings without using strcat().
// 9. Compare Two Strings
//    Write a program to compare two strings without using strcmp().
// 10. Find ASCII Values
//     Write a program to print the ASCII value of each character in a string.

#include <stdio.h>
#include <string.h>

void stringLen(char str[]){
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++){
        count++;
    }
    printf("Length of String = %d", count);
}

void reverseString(char str[]){
    for(int i = strlen(str)-1; i >= 0; i--){
        printf("%c", str[i]);
    }
}

void main(){
    char str[] = "Hello";
    stringLen(str);
    printf("\n\n");
    reverseString(str);
    printf("\n\n");
}

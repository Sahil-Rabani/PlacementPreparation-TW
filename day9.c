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
#include <ctype.h>

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

void characterCount(){
    int vCount = 0, cCount = 0, sCount = 0, dCount = 0;
    char vowel[] = "aeiou";
    char str[] = "Hello, I am Sahil";
    for(int i = 0; str[i] != '\0'; i++){
        char ch = tolower(str[i]);
        if(ch >= '0' && ch <= '9'){
            dCount++;
        }else if(ch == ' '){
            sCount++;
        }else if(ch >= 'a' && ch <= 'z'){
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                vCount++;
            }else{
                cCount++;
            }
        }
    }
    printf("Number of vowel = %d, digit = %d, Consonent = %d, Spaces = %d.", vCount, dCount, cCount, sCount);
}

void toggleCase(){
    char str[] = "Hii, I am WOrking Hard.";
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            printf("%c", toupper(str[i]));
        }else if(str[i] >= 'A' && str[i] <= 'Z'){
            printf("%c", tolower(str[i]));
        }
    }
}

void palllindrome(){
    char str[] = "ma'am";
    int len = strlen(str), flag = 1;
    for(int i = 0; i < len/2; i++){
        if(str[i] != str[len -1 -i]){
            flag = 0;
            break;
        }
    }
    if(flag){
        printf("String is pallindrome.");
    }else{
        printf("String is not pallindrome.");
    }
}

void characterOccur(){
    char str[] = "Hello, I like mellons";
    char ch = 'l';
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++){
        char low = tolower(str[i]);
        if(low >= 'a' && low <= 'z'){
            if(low == ch){
                count++;
            }
        }
    }
    printf("Character occurs %d times in string.", count);
}

void copyString(){
    char str[] = "Here, is String.";
    char str1[sizeof(str)];
    for(int i = 0; str[i] != '\0'; i++){
        str1[i] = str[i];
        printf("%c", str1[i]);
    }
}

void concatinateString(){
    char str1[] = "Hello, I am ";
    char str2[] = "Developer Sahil";
    char concat[sizeof(str1) + sizeof(str2) - 1];
    for(int i= 0; str1[i] != '\0'; i++){
        concat[i] = str1[i];
    }
    for(int i = 0; str2[i] != '\0'; i++){
        concat[sizeof(str1) - 1 +i] = str2[i];
    }
    concat[sizeof(str1) + sizeof(str2) - 2] = '\0';
    for(int i = 0; concat[i] != '\0'; i++){
        printf("%c", concat[i]);
    }
}

void compareString(){
    char str1[] = "Hello";
    char str2[] = "Madam";
    int flag = 1, i = 0;
    while(str1[i] != '\0' || str2 != '\0'){
        if(str1[i] != str2[i]){
            flag = 0;
            break;
        }
    }
    if(flag){
        printf("String is equal.");
    }else{
        printf("String is not equal.");
    }
}

void asciiValue(){
    char str[] = "Hello";
    for(int i = 0; str[i] != '\0'; i++){
        int value = str[i];
        printf("%c = %d\n", str[i], value);
    }
}

void main(){
    char str[] = "Hello";
    stringLen(str);
    printf("\n\n");
    reverseString(str);
    printf("\n\n");
    characterCount();
    printf("\n\n");
    toggleCase();
    printf("\n\n");
    palllindrome();
    printf("\n\n");
    characterOccur();
    printf("\n\n");
    copyString();
    printf("\n\n");
    concatinateString();
    printf("\n\n");
    compareString();
    printf("\n\n");
    asciiValue();
    printf("\n\n");
}

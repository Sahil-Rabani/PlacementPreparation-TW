// 🔹 Basic Questions
// Find sum of array
// Find largest element
// Find smallest element
// Count even & odd numbers
// Reverse array
// Find second largest
// Remove duplicates
// Sort array (bubble sort)
// Frequency of elements
// Check if array is sorted]

public class array1{
    public static void main(String[] args) {
        System.out.println();
        sumArr();
        System.out.println();
        largest();
        System.out.println();
        smallest();
        System.out.println();
        CountEO();
        System.out.println();
        reverse();
        System.out.println();
        secLargest();
        System.out.println();
        remDublicate();
        System.out.println();
        sort();
        System.out.println();
        frequency();
        System.out.println();
        sorted();
        System.out.println();
    }

    public static void sumArr(){
        int [] arr = {1,5,7,8,2,48,5};
        int sum = 0;
        for(int i = 0; i < arr.length; i++){
            sum+= arr[i];
        }
        System.out.print("Sum = " + sum);
    }

    public static void largest(){
        int [] arr = {1,5,8,87,29,7,98};
        int lar = 0;
        for(int i = 0; i < arr.length; i++){
            if(arr[i] > lar){
                lar = arr[i];
            }
        }
        System.out.print("Largest Element = " + lar);
    }

    public static void smallest(){
        int [] arr = {4,87,54,7,48,45,1,87,548};
        int small = arr[0];
        for(int i = 0; i < arr.length; i++){
            if(arr[i] < small){
                small = arr[i];
            }
        }
        System.out.print("Smallest element = " + small);
    }

    public static void CountEO(){
        int [] arr = {1,54,1,49,932,978,68,98,65};
        int EC = 0, OC = 0;
        for(int i = 0; i < arr.length; i++){
            if(arr[i] % 2 == 0){
                EC++;
            }else{
                OC++;
            }
        }
        System.out.print("Even Number = " + EC + " Odd Number = " + OC);
    }

    public static void reverse(){
        int [] arr = {1,8,95,3,94,2};
        for(int i = arr.length -1; i >=0; i--){
            System.out.print(arr[i] + ",");
        }
    }

    public static void secLargest(){
        int [] arr = {1,97,39,791,898,2,98,54};
        int lar = arr[0], secLar = 0;
        for(int i = 0; i < arr.length; i++){
            if(arr[i] > lar){
                secLar = lar;
                lar = arr[i];
            }
        }
        System.out.print("Second Largest = " + secLar);
    }

    public static void remDublicate(){
        int [] arr = {1,32,65,2,1,6,2,6,1,8};
        int [] arr1 = new int[arr.length];
        int newSize = 0;
        for(int i = 0; i < arr.length; i++){
            boolean isUnique = true;
            for(int j = 0; j < newSize; j++){
                if(arr[i] == arr1[j]){
                    isUnique = false;
                    break;
                }
            }
            if(isUnique){
                arr1[newSize] = arr[i];
                newSize++;
            }
        }

        for (int i : arr1) {
            System.out.print(i +", ");
        }
    }

    public static void sort(){
        int [] arr = {1,5,4,8,4,64,8,24};
        for(int i = 0; i < arr.length-1; i++){
            for(int j = 0; j< arr.length-1-i;j++){
                if(arr[j] > arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
        for (int i : arr) {
            System.out.print(i+", ");
        }
    }

    public static void frequency(){
        int [] arr = {1,5,2,5,4,1,2,6,4,6,1,2,4};
        int n = arr.length;
        for(int i = 0; i < arr.length; i++){
            int count = 1;
            boolean counted = false;
            for(int k = 0; k < i; k++){
                if(arr[i] == arr[k]){
                    counted = true;
                    break;
                }
            }
            if(counted){
                continue;
            }
            for(int j = i+1; j < n; j++){
                if(arr[i] == arr[j]){
                    count++;
                }
            }
            System.out.println(arr[i] + " -> " + count);
        }
    }

    public static void sorted(){
        int [] arr = {1,2,3,1};
        boolean isSorted = true;
        for(int i = 0; i < arr.length; i++){
            if(arr[i] < arr[i+1]){
                isSorted = false;
                break;
            }
        }
        if(isSorted){
            System.out.print("Array is sorted");
        }else{
            System.out.print("Array is not sorted");
        }
    }
}

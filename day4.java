// 🔹 Intermediate (11–20)
// Move zeros to end
// Find missing number (1 to N)
// Find duplicate element
// Merge two arrays
// Intersection of arrays
// Union of arrays
// Left rotate array by 1
// Right rotate array by K

public class array2 {
    public static void main(String [] args){
        int [] arr = {1,5,3,0,5};
        int [] arr1 = {1,7,6,0,8};

        movZero(arr);
        System.out.println();
        missing(6);
        System.out.println();
        dublicate(arr);
        System.out.println();
        merge(arr, arr1);
        System.out.println();
        intersection(arr, arr1);
        System.out.println();
        union(arr, arr1);
        System.out.println();
        Lrotate(arr1);
        System.out.println();
        Rrotate(arr1);
        System.out.println();
    }
    
    public static void movZero(int [] arr){
        int idx = 0;
        for (int i : arr) {
            if(i!=0){
                arr[idx++] = i;
            }
        }
        while(idx < arr.length){
            arr[idx++] = 0;
        }

        for(int i = 0; i < arr.length; i++){
            System.out.print(arr[i] + ", ");
        }
    }

    public static void missing(int n){
        int [] arr = {1,5,4,6,3};
        int expected = (n * (n+1))/2;
        int actual = 0;
        for (int i : arr) {
            actual += i;
        }
        System.out.print("Missing Number = " + (expected - actual));
    }

    public static void dublicate(int [] arr){        
        for(int i = 0; i < arr.length; i++){
            boolean alpr = false;
            for(int k = 0; k < i; k++){
                if(arr[i] == arr[k]){
                    alpr = true;
                    break;
                }
            }
            if(alpr){
                continue;
            }
            for(int j = i+1; j < arr.length; j++){
                if(arr[i] == arr[j]){
                    System.out.print(arr[i] + ", ");
                }
            }
        }
    }

    public static void merge(int [] arr, int [] arr1){
        int [] merge = new int[arr.length+arr1.length];
        for(int i = 0; i < arr.length; i++){
            merge[i] = arr[i];
        }
        for(int i = 0; i < arr1.length;i++){
            merge[arr.length+i] = arr1[i];
        }
        for(int i = 0; i < merge.length;i++){
            System.out.print(merge[i] + ", ");
        }
    }

    public static void intersection(int [] arr, int [] arr1){
        for(int i = 0; i < arr.length; i++){
            for(int j = 0; j < arr1.length; j++){
                if(arr[i] == arr1[j]){
                    System.out.print(arr[i] + ", ");
                    break;
                }
            }
        }
    }

    public static void union(int[] arr, int[] arr1){
        int [] uni = new int[arr.length+arr1.length];
        int k = 0;
        for(int i = 0; i < arr.length;i++){
            uni[k++] = arr[i];
        }
        for(int i =0; i < arr1.length;i++){
            boolean found = false;
            for(int j = 0; j < k; j++){
                if(arr1[i] == uni[j]){
                    found = true;
                    break;
                }
            }
            if(!found){
                uni[k++] = arr1[i];
            }
        }
        for(int i : uni){
            System.out.print(i + ", ");
        }
    }

    public static void Lrotate(int [] arr){
        int first = arr[0];
        for(int i = 0; i < arr.length- 1; i++){
            arr[i] = arr[i+1];
        }
        arr[arr.length-1] = first;
        for (int i : arr) {
            System.out.print(i+", ");
        }
    }

    public static void Rrotate(int [] arr){
        int k = 2;
        int n = arr.length;
        k = k % n;
        int[] temp = new int[n];
        for (int i = 0; i < n; i++) {
            temp[(i + k) % n] = arr[i];
        }
        for (int i = 0; i < n; i++) {
            arr[i] = temp[i];
        }
        for (int i : temp) {
            System.out.print(i+", ");
        }
    }
}

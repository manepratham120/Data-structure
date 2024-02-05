/**
 * Interpolation
 */
public class Interpolation {
    public static int search(int[] arr,int val){
        int low=0;
        int high=arr.length-1;

        while(low<=high){
           int mid=low + (high -low) *((val -arr[low]) /(arr[high]-arr[low]));
           if(val ==arr[mid]){
               return mid;
           }
           else if(val < arr[mid]){
             high=mid-1;
           }
           else{
             low=mid+1;
           }

        }
        return -1;
    }
    public static void main(String[] args) {
        int[] arr = { 2, 5, 8, 12, 16, 23, 38, 56, 72, 91 };
        int target = 23;
        int result = search(arr, target);
        System.out.println(result);
    }
}
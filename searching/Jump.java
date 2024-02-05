import java.lang.Math;
public class Jump {
    public static int search(int[] arr, int val){
        int low=0;
        int high=arr.length-1;
        int n=arr.length;
        int step=(int) Math.sqrt(10);
        for(int i=0;i<n;i++){
            if(val<arr[step]){
                high=step-1;
            }
            else{
                low=step+1;
            }
        }
        for(int i=low;i<high;i++){
            if(arr[i]==val){
                return i;
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

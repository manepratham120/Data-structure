public class linear {
    public static int search(int[] arr,int val){
        for(int i=0;i<arr.length;i++){
            if(val==arr[i]){
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

// succesful//
// heap sort process the elements by creating min heap or max heap by creating elements of the array.
//


public class Heap {
    static void  heapify(int a[],int n,int i ){
        int large=i;
        int left=2*i+1;
        int right=2*i+2;
        if(left<n && a[left]>a[large]){
            large=left;

        }
        if(right < n && a[right]>a[large]){
            large=right;
        }

        if(large!=i){
            
            int temp=a[i];
            a[i]=a[large];
            a[large]=temp;

            heapify(a, n, large);
        }
    }

    static void heapsort(int a[],int n){
        for(int i=n/2-1;i>=0;i--){
            heapify(a, n, i);
        }
        for(int i=n-1;i>=0;i--){
            int temp=a[0];
            a[0]=a[i];
            a[i]=temp;
            heapify(a, i, 0);
        }

    }
    public static void main(String[] args) {
        int i;
        int a[]={10,40,34,5,90};
        int n=a.length;
        heapsort(a, n);
        for(i=0;i<a.length;i++){
            System.out.println(a[i]+" ");
           }

    }
}

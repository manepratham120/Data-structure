//sucessful //
// merge sort is using divide and conquer approach to sort the elements
public class Merge {
    void merge(int a[],int beg,int mid,int end){
        int i,j,k;
        int n1=mid-beg+1;
        int n2=end-mid;
 
        // creating a temp array //
        int leftA[]=new int[n1];
        int rightA[]=new int[n2];

        //copy data to  temp array //
        for(i=0;i<n1;i++){
            leftA[i]=a[beg+i];
        }
        for(j=0;j<n2;j++){
            rightA[j]=a[mid+1+j];
        }

        i=0;
        j=0;
        k=beg;

        while(i<n1 && j<n2){
            if(leftA[i]<=rightA[j]){
                a[k]=leftA[i];
                i++;

            }
            else{
                a[k]=rightA[j];
                j++;
            }
            k++;
        }
        while(i<n1){
            a[k]=leftA[i];
            i++;
        }
        while (j<n2) {
            a[k]=rightA[j];
            j++;
        }
    }

    void mergeSort(int a[],int beg,int end){
        if(beg<end){
            int mid=(beg+end)/2;
            mergeSort(a, beg, mid);
            mergeSort(a, mid+1, end);
            merge(a, beg,mid,end);
        }

    }

    public static void main(String[] args) {
        int i;
        int a[]={10,40,34,5,90};
        int n=a.length;
        Merge m1=new Merge();
        m1.mergeSort(a, 0, n-1);
        for(i=0;i<a.length;i++){
            System.out.println(a[i]+" ");
           }
    }
}



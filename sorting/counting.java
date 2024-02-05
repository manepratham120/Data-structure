// not working fail//
public class counting {

    int getmax(int a[],int n){
        int max=a[0];
        for(int i=0;i<n;i++){
            if(a[i]>max){
                max=a[i];
            }
        }
        return max;
    }

    void countSort(int a[],int n){
        int i;
        int []output=new int[n+1];
        int max=getmax(a, n);
        int []count=new int[max+1];
        for(i=0;i<max;i++){
            count[i]=0;
        }
        for(i=0;i<n;i++){
            count[a[i]]++;
        }
        for(i=0;i<=max;i++){
            count[i]+=count[i-1];
        }
        for(i=n-1;i<=0;i--){
            output[count[a[i]]-1]=a[i];
            count[a[i]]--;
        }
        for(i=0;i<n;i++){
            a[i]=output[i];
        }
    
    }
    public static void main(String[] args) {
        int i;
        int a[]={10,40,34,5,90};
        int n=a.length;
        counting c1=new counting();
        c1.countSort(a, n);
        for(i=0;i<a.length;i++){
            System.out.println(a[i]+" ");
           }

    }
}

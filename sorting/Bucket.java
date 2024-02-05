// fail //

public class Bucket {
    int getmax(int a[]){
        int n=a.length;
        int max=a[0];
        for(int i=1;i<n;i++){
            if(a[i]>max){
                a[i]=max;
            }

        }
        return max;
    }

    void bucket(int a[]){
        int n=a.length;
        int max=getmax(a);
        int bucket[]=new int[max+1];
        for(int i=0;i<max;i++){
            bucket[i]=0;
        }
        for(int i=0;i<n;i++){
            bucket[a[i]]++;
        }
        for(int i=0,j=0;i<=max;i++){
            while (bucket[i]>0) {
                a[j++]=i;
                bucket[i]--;
            }

        }

    }
    public static void main(String[] args) {
       int i;
       int a[]={10,40,34,5,90};
       Bucket b1=new Bucket();
       b1.bucket(a);
       for(i=0;i<a.length;i++){
        System.out.println(a[i]+" ");
       }
    }
}

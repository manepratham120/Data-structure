// 
public class Quick {
       int partition(int a[],int start,int end ){
              int pivot=a[end];
              int i=(start-1);
              for(int j=start;j<=end;j++){
                     if(a[j]<pivot){
                            i++;
                            int t=a[i];
                            a[i]=a[j];
                            a[j]=t;
                     }
              }
              int t=a[i+1];
              a[i+1]=a[end];
              a[end]=t;
              return(i+1);
       }

       void quicksort(int a[],int start,int end){
              if(start<end){
                     int p=partition(a, start, end);
                     quicksort(a, start, p-1);
                     quicksort(a, p+1, end);
              }
       }


       public static void main(String[] args) {
              int i;
              int a[]={10,40,34,5,90};
              int n=a.length;
              Quick c1=new Quick();
              c1.quicksort(a, 0,n-1);
              for(i=0;i<a.length;i++){
                  System.out.println(a[i]+" ");
                 }
      
          }
}





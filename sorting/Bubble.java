//successful //
public class Bubble{

    void bubblesort(int a[]){
        int n =a.length;
        int i,j,temp;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(a[j]<a[i]){
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
    }
}
    public static void main(String[] args){
       int i;
       int a[]={10,40,34,5,90};
       Bubble b1=new Bubble();
       b1.bubblesort(a);
       for(i=0;i<a.length;i++){
        System.out.println(a[i]+" ");
       }
    }

}

//user input //

// successful //

// it is basically advanced version of bubble sort algorithm. you have to find the gap between the numbers and just swap 
// the numbers complexity is 0(nlogn) 

public class comb{
    static int updateGap(int gap)
    {
          gap=(gap*10)/13;

        if (gap<1){
            return 1;
          }
          return gap;
    }

    static void combsort(int a[],int n){
        int gap =n;
        int swap=1;

        while(gap!=1 || swap==1){
            gap=updateGap(gap);

            swap=0;

            for(int i=0;i<n-gap;i++){
                if(a[i]>a[i+gap]){
                    int temp=a[i];
                    a[i]=a[i+gap];
                    a[i+gap]=temp;
                }
            }
        }
    }


    public static void main(String[] args) {
        int i;
        int a[]={10,40,34,5,90};
        int n=a.length;
        combsort(a, n);
        for(i=0;i<n;i++){
            System.out.println(a[i]+"");
        }
    }
}
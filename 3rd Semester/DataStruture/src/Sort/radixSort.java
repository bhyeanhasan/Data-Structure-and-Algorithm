
package Sort;

public class radixSort {
    
    
    static int max(int arr[])
    {
        int n = arr.length;
      
        int m = arr[0];
        for (int i = 0; i < n; i++) {
            if(arr[i]>m)
            {
                m = arr[i];
            }
        }
        return m;
    }
    
    static void countingSort(int arr[],int place)
    {
        int n = arr.length;
        int out[] = new int[n+1];
        int m = max(arr);
        int count[] = new int[m+1];
        
        for (int i = 0; i <= m; i++) {
            count[i] = 0;
        }
        
     
        
        
        for(int i=0;i<n;i++){
            count[(arr[i]/place)%10]++;
        }
           
        
        for (int i = 1; i <= m; i++) {
            count[i]+=count[i-1];
        }
        
        for(int i=n-1;i>=0;i--)
        {
            out[count[(arr[i]/place)%10]-1] = arr[i];
            count[(arr[i]/place)%10]--;
        }
        
        for (int i = 0; i < n; i++) {
            arr[i] = out[i];
        }
        
    }
    
    static void radSort(int arr[])
    {
        int m = max(arr);
        
        for (int pos = 1; m/pos>0; pos*=10) {
            countingSort(arr,pos);
        }
        
    }
    
    
    public static void main(String[] args) {
        
        int arr[] = {9,1,8,2,7,3,4,6,5,50};
        radSort(arr);
        
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i]+ " ");
        }
        
        
    }
}

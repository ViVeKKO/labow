import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Random;
import java.util.StringTokenizer;

public class MakingTriangle {
     public static void main(String[] args) {
         FastScanner fs=new FastScanner();
         int T=1;
         for (int tt=0; tt<T; tt++) {
             int n= fs.nextInt();
            int []arr = new int[n];
            for(int i=0;i<n;i++)
                arr[i] = fs.nextInt();
                int ans  =0;
            Arrays.sort(arr);
            for(int i=0;i<n;i++){
                for(int j=0;j<i;j++)
                    for(int k=0;k<j;k++){
                        if(arr[i]!=arr[j] && arr[i]!=arr[k] && arr[j]!=arr[k]){
                            if(arr[i]<arr[j]+arr[k])
                                ans++;
                        }
                    }
            }
            System.out.println(ans);
        }
}
 

static class FastScanner {
     BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
     StringTokenizer st=new StringTokenizer("");
     String next() {
     while (!st.hasMoreTokens())
         try {
             st=new StringTokenizer(br.readLine());
         } catch (IOException e) {
             e.printStackTrace();
         }
         return st.nextToken();
     }
     
     int nextInt() {
         return Integer.parseInt(next());
     }
     int[] readArray(int n) {
         int[] a=new int[n];
         for (int i=0; i<n; i++) a[i]=nextInt();
         return a;
     }
     long nextLong() {
         return Long.parseLong(next());
     }
 }

 
}

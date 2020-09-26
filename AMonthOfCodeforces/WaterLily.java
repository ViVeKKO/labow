
    // ___.   .__                 __          .__              __    
    // \_ |__ |  | _____    ____ |  | _____  _|__|__  __ ____ |  | __
    //  | __ \|  | \__  \ _/ ___\|  |/ /\  \/ /  \  \/ // __ \|  |/ /
    //  | \_\ \  |__/ __ \   \___|    <  \   /|  |\   /\  ___/|    < 
    //  |___  /____(____  /\___  >__|_ \  \_/ |__| \_/  \___  >__|_ \
    //      \/          \/     \/     \/                    \/     \/

    import java.io.BufferedReader;
    import java.io.IOException;
    import java.io.InputStreamReader;
    import java.util.Arrays;
    import java.util.Random;
    import java.util.StringTokenizer;

    public class WaterLily {
        public static void main(String[] args) {
            FastScanner fs=new FastScanner();
            int T=1;

            for (int tt=0; tt<T; tt++) {
                    long h = fs.nextLong(),l = fs.nextLong() ;
                    System.out.println((double)(l*l - h*h)/(2*h));
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

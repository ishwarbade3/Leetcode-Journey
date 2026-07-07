public class Solution {
    public long SumAndMultiply(int n) {
        long sum=0;
         long num=0;

        while(n!=0){
            if(n%10 != 0){
                int digit = n%10;
                sum+=digit;
            num = num*10 +digit;
            }
            n/=10;
        }
         long n1=0;
        while (num!=0){
            n1=(n1*10) + (num%10);
            num/=10;
        }
        return n1 * sum;
    }
}
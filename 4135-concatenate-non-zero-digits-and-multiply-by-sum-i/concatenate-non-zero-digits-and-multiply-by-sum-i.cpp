class Solution {
public:
    long long sumAndMultiply(int n) {

        long long sum=0;
        long long num=0;

        while(n!=0){
            if(n%10 != 0){
                int digit = n%10;
                sum+=digit;
            num = num*10 +digit;
            }
            n/=10;
        }
        long long n1=0;
        while (num!=0){
            n1=(n1*10) + (num%10);
            num/=10;
        }
        return n1 * sum;
    }
};
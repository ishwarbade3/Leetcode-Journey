class Solution {
public:
    bool isUgly(int n) {

        // for(int i =2 ; i< n ;i++){
        //     if(n % i ==0){
        //         for (int j =3;j <= i;j++){
        //             if(i==7){
        //                 cout<< j<<" ";
        //             }
        //             if(i%j==0){
        //                 return false;
        //             }
        //         }
        //     }
        // }
        // return true;
         if (n <= 0) return false;

    while (n % 2 == 0) n /= 2;
    while (n % 3 == 0) n /= 3;
    while (n % 5 == 0) n /= 5;

    return n == 1;
        
    }
};
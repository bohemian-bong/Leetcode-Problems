class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        long int copy=x;
        long int n=0;
        while(copy!=0)
        {
            int temp=copy % 10;
            n= n*10 + temp;
            copy=copy/10;
        }
        return n==x;
    }
};

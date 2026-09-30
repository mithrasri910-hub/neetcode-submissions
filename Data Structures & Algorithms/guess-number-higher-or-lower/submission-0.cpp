class Solution {
public:
    int guessNumber(int n) {
        for(int num=1;num<=n;num++){
            if(guess(num)==0){
                return num;
            }
        }
        return n;
    }
};
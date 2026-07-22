class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int a=arr.size();
        int maxr=-1;
        for(int i=a-1;i>=0;i--){
            int temp=arr[i];
            arr[i]=maxr;
            maxr=max(maxr,temp);
        }
        return arr;   
    }
};
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        if(k>=n){
            k=k%n;
        }
        vector<int> arr(n);
        int j=0;
        for(int i=n-k;i<n;i++)
        {
            arr[j++]=nums[i];
        }
        for(int i=0;i<n-k;i++)
        {
            arr[k+i]=nums[i];
        }
        for(int i=0;i<arr.size();i++)
        {
            nums[i]=arr[i];
        }
    }
};
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       
        int n=nums.size();
        vector<int> output(n);
         //left pass
        int prefix=1;
        for(int i=0; i<nums.size(); i++){
            output[i]=prefix;
            prefix=prefix*nums[i];
        }
        //right pass
        int suffix=1;
        for(int i=n-1; i>=0; i--){
            output[i]*=suffix; //l*r  
            suffix=suffix*nums[i]; 
        } 
        
        return output;
        
    }
};

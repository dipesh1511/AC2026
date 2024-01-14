//Que-->Missing Number In The Given Array Of size N ? 
//Time complexity-->O(n)
//Space complexity-->O(1)
int missingNumber(vector<int>& nums) {
    int sumarr=0;
	//sum all the elements in the array...
    for(int i=0;i<nums.size();i++){
        sumarr+=nums[i];
    }  
	//total sum substract from resulating sum...
    int n=nums.size();
    int expectedsum=(n*(n+1))/2;
    int ans=expectedsum-sumarr;
    return ans;
    }
};
//Que-->Second Largest Elements in the array ?
//Time complexity-->O(nlogn)
//Space complexity-->O(1)
	int print2largest(int arr[], int n) {
	    int flag=0;
	    int ans;
	//sort the array...
	 sort(arr,arr+n);
	//check last ans secondlast elements eqal or not...
	 for(int i=n-1;i>=0;i--){
	     int a=abs(i-1);
	//if both are not equal then return ans...
	     if(arr[a]!=arr[i]){
	        ans=arr[i-1];
	       return ans;
	     }
	 }
	 return -1;
	}
};
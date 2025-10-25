    // optimal maths
    
    vector<int> findTwoElement(vector<int>& arr) {
        long long n=arr.size();
        	long long SN=(n*(n+1))/2;
	long long S2N=(n*(n+1)*(2*n+1))/6;
	long long S1=0,S2=0;

	for(int i=0;i<n;i++){
		S1+=arr[i];
		S2+=(long long)arr[i]*(long long)arr[i];

	}
	long long val1=S1-SN;
	long long val2=S2-S2N;
	val2=val2/val1;
	long long x=(val1+val2)/2;
	long long y=(val2-x);
	return {(int)x,(int)y};
    }
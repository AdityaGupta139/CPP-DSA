    // BRUTE
    
    vector<int> majorityElement(vector<int>& v) {
     int n = v.size(); 

    int cnt1 = 0, cnt2 = 0; 
    int el1 = INT_MIN;
    int el2 = INT_MIN; 

    for (int i = 0; i < n; i++) {
        if (cnt1 == 0 && el2 != v[i]) {
            cnt1 = 1;
            el1 = v[i];
        }
        else if (cnt2 == 0 && el1 != v[i]) {
            cnt2 = 1;
            el2 = v[i];
        }
        else if (v[i] == el1) cnt1++;
        else if (v[i] == el2) cnt2++;
        else {
            cnt1--, cnt2--;
        }
    }

    vector<int> ls; 
    cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == el1) cnt1++;
        if (v[i] == el2) cnt2++;
    }

    int mini = int(n / 3) + 1;
    if (cnt1 >= mini) ls.push_back(el1);
    if (cnt2 >= mini) ls.push_back(el2);
    return ls;
    }


    // OPTIMAL
        vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
  int el1=INT_MIN,el2=INT_MIN;
  int n=nums.size();
  int cnt1=0,cnt2=0;
  for(int i=0;i<n;i++){
    if(cnt1==0 && nums[i]!=el2){
        cnt1=1;
        el1=nums[i];
    }
    else if(cnt2==0 && nums[i]!=el1){
        cnt2=1;
        el2=nums[i];
    }
    else if(el1==nums[i]){
        cnt1++;
    }
    else if(el2==nums[i]){
        cnt2++;
    }
    else{
        cnt1--;
        cnt2--;
    }
  }
  cnt1=0,cnt2=0;
  for(int i=0;i<n;i++){
    if(el1==nums[i]){
        cnt1++;
    }
    if(el2==nums[i]){
        cnt2++;
    }
  }
if(cnt1>=(n/3)+1){

  ans.push_back(el1);
}
if(cnt2>=(n/3)+1){

  ans.push_back(el2);
}

  return ans;
    }
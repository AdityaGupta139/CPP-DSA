int second_largest(int arr,int n){
    int largest=0;
    int sl;
    for(int i=0;i<n;i++){
if(arr[i]>arr[largest]){
 sl=largest;
 largest=i;   
}
    }
    cout<<arr[sl];
}
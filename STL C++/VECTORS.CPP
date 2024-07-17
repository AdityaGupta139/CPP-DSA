// ALL ABOUT VECTORS
#include<bits/stdc++.h>
using namespace std;
void declaration(){
vector<int>v; // creates {}
v.push_back(1); // {1}
v.emplace_back(2);//{1,2}
// vector<int>v(5,100);//{100,100,100,100,100}
// vector<int>v(5);//{ , , , , }

}
void vectorpair(){
    vector<pair<int,int>>v;//{{4,5}}
    v.push_back({2,5});
    v.emplace_back(4,9);

}
void copyvector(){
    vector<int>v1(5,20);    
    vector<int>v2(v1); //copies a vector to a new vector

}
void accesing(){
    vector<int>v(5,10);
    cout<<v[1];
}
// ITERATORS
void iterators(){
    vector<int> v={12,45,67,54,67,72,87};
    vector<int>:: iterator it=v.begin();
    cout<<*(it)<<" "<<endl;
    it+=2;
    cout<<*(it)<<" ";
    cout<<endl;
    // printing vector
    for( auto it = v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    // another method
    for(auto it : v){
        cout<<it<<" ";
    }
    cout<<endl;
    // DELETION IN VECTORS
    v.erase(v.begin()+1);//delete one element
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
    v.erase(v.begin(),v.begin()+4);//for deleting two or more
    for(auto it : v){
        cout<<it<<" ";
    }

    }
    
// SOME MORE FUNCTIONS
/*v.end(); points to the location just after the last element
v.rend();rverse then points to the location just before the first element
v.rbegin();points at the last element
v.pop_back; it will remove the last element
v.swap(v2);swap the vectors
v.clear();clear the whole vector
v.empty();return true if the vector is empty else return false
v.size();gives the size of the vector
*/
void insertion(){
    //INSERTION IN VECTORS
    vector<int>v(2,100);
    v.insert(v.begin(),300);
    for(auto it : v){
        cout<<it<<" ";
    }
    cout<<endl;
    v.insert(v.begin()+1,2,45);
    for(auto it:v){
        cout<<it<<" ";
    }
}


int main(){
insertion();
}
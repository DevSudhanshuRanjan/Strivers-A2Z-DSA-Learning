#include <bits/stdc++.h>
using namespace std;

int main(){

    array<int,5> arr = {1,2,3,4,5};
    for(auto it = arr.begin();it != arr.end();it++){
        cout<<*it<<endl;
    }
    for(auto it : arr){
        cout<<it<<endl;

    }

    return 0;
}
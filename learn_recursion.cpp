#include <bits/stdc++.h>
using namespace std;

int cnt = 0;
void prntNme(string a){
    if (cnt == 5)
    {
        return;
    }
    cout<<a<<endl;
    cnt++;
    prntNme(a);
    
}


int cnt1 = 0;
void onetoN(int a){
    if (cnt1 > a){
        return;
    }
    cout<<cnt1<<endl;
    cnt1++;
    onetoN(a);
}


void ontoN(int a,int b){
    if (a>b)
    {
        return;
    }
    cout<<a<<endl; 
    ontoN(a+1,b);   

}


void reverseNum(int a,int b){
    if (a>b){
        return;
    }
    cout<<b<<endl;
    reverseNum(a,b-1);
}


void revNum(int a){
    if(a == 0){
        return;
    }
    cout<<a<<endl;
    revNum(a-1);
}


int sum(int a){
    if (a == 0)
    {
        return a;
    }
    return a+sum(a-1);
    
}


int factorial(int a){
    if (a == 1)
    {
        return a;
    }
    return a*factorial(a-1);
    
}


void revArray(vector <int> &v,int a){
    if(a >= v.size()/2) return ;
    swap(v[a],v[v.size()-a-1]);
    revArray(v,a+1);
}


bool checkStringPalindrome(string s,int a){
    if (a>=s.length()/2)
    {
        return true;
    }
    if(s[a] == s[s.length()-a-1]){
        return true;
    };
    checkStringPalindrome(s,a+1);
    
}


//Multiple recursion call
int fib(int a){
    if (a == 0 || a == 1)
    {
        return a;
    }
    return fib(a-1)+fib(a-2);
}



int main(){

    string a;
    getline(cin,a);
    prntNme(a);
    onetoN(5);
    ontoN(1,5);
    reverseNum(1,5);
    revNum(5);
    cout<< sum(10);
    cout<<factorial(5);
    vector <int> v = {1,2,3,4,5};
    revArray(v,0);
    for (auto it:v)
    {
        cout<<it<<endl;
    }
    string s ="MADAM";
    cout << checkStringPalindrome(s,0);
    cout<<fib(4);
    return 0;
}
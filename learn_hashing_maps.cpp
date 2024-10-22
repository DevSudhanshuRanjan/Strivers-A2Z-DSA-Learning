#include <bits/stdc++.h>
using namespace std;

int main()
{

    /*integer hashing
    int arr[5] = {1,3,2,1,3};
    int hash[13] = {0,0,0,0,0,0,0,0,0,0,0,0,0};
    for (int i = 0; i < 5; i++)
    {
        hash[arr[i]] ++;
    }
    cout<<hash[1]<<endl;
    cout<<hash[4]<<endl;
    cout<<hash[2]<<endl;
    cout<<hash[3]<<endl;
    cout<<hash[12]<<endl;
    */

    /*Character Hashing
    string s = "abcdabehf";
    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]-'a']++;
    }
    for (int i = 0; i < 5; i++)
    {
        char c;
        cout<<"Enter the word of your choice ";
        cin>>c;
        cout<<hash[c-'a']<<endl;
    }
    */
    /*Hashing for integer and character using unordered or ordered map
    int arr[] = {1, 2, 3, 1, 3, 2, 12};
    map<int, int> m;
    for (int i = 0; i < 7; i++)
    {
        m[arr[i]]++;
    }
    for (auto it : m)
    {
        cout << it.first << "->" << it.second << endl;
    }
    */
    return 0;
}
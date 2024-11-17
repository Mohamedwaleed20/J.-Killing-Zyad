#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int k ,n ,w ;
    cin >> k >> n >> w ;
    int s = 0 ;
    for(int i =  1 ; i <= w ; i++)
    {
        s = s + (k*i);
    }
    int t = s - n ;
    cout << max(0 , t);

    return 0;
}

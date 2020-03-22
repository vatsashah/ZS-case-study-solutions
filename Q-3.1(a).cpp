// Created by Vatsa Shah
// Date modified 22-03-2020
// For ZS case study challenge 
// Solution for Q-3.1(a)
// C++ Algorithm 

#include<bits/stdc++.h>
#define int long long int
#define mod 998244353
using namespace std;
int32_t main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w", stdout);
    #endif
    int i,j,k,l,m;
    int a[11][5];
    int ans=0;
    a[0][0]=0,a[0][1]=0,a[0][2]=0,a[0][3]=0,a[0][4]=0;
    a[1][0]=5,a[1][1]=5,a[1][2]=10,a[1][3]=15,a[1][4]=20;
    a[2][0]=7.5,a[2][1]=50,a[2][2]=15,a[2][3]=25,a[2][4]=25;
    a[3][0]=10,a[3][1]=70,a[3][2]=20,a[3][3]=35,a[3][4]=30;
    a[4][0]=15,a[4][1]=80,a[4][2]=35,a[4][3]=45,a[4][4]=40;
    a[5][0]=15,a[5][1]=80,a[5][2]=45,a[5][3]=60,a[5][4]=50;
    a[6][0]=20,a[6][1]=80,a[6][2]=65,a[6][3]=55,a[6][4]=60;
    a[7][0]=20,a[7][1]=80,a[7][2]=69,a[7][3]=55,a[7][4]=75;
    a[8][0]=25,a[8][1]=80,a[8][2]=70,a[8][3]=50,a[8][4]=70;
    a[9][0]=30,a[9][1]=80,a[9][2]=71,a[9][3]=45,a[9][4]=65;
    a[10][0]=35,a[10][1]=80,a[10][2]=72,a[10][3]=45,a[10][4]=60;
    vector<int> v;
    for (int i = 0; i < 11; ++i)
    {
        for (int j = 0; j < 11; ++j)
        {
            for (int k = 0; k < 11; ++k)
            {
                for (int l = 0; l < 11; ++l)
                {
                    for (int m = 0; m < 11; ++m)
                    { 
                        if ((i+j+k+l+m)==10)
                        {
                            v.push_back(a[i][0]+a[j][1]+a[k][2]+a[l][3]+a[m][4]);
                            //cout<<a[i][0]+a[j][1]+a[k][2]+a[l][3]+a[m][4];
                            //cout<<"\n";
                        }
                    }
                }
            }
        }
    }
    sort(v.begin(), v.end());
    int n;
    n=v.size();
    int x=v[n-1];
    for (int i = 0; i < 11; ++i)
    {
        for (int j = 0; j < 11; ++j)
        {
            for (int k = 0; k < 11; ++k)
            {
                for (int l = 0; l < 11; ++l)
                {
                    for (int m = 0; m < 11; ++m)
                    {
                        if (a[i][0]+a[j][1]+a[k][2]+a[l][3]+a[m][4]==x && (i+j+k+l+m)==10)
                        {
                            cout<<i<<" "<<j<<" "<<k<<" "<<l<<" "<<m<<"\n";
                            cout<<x<<"\n\n";
                        }
                    }
                }
            }
        }
    }
    #ifndef LOCAL_DEFINE
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    #endif
    return 0;
}

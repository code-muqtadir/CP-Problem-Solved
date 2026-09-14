#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string pangram;
    cin >> pangram;

    for(int i=0;i<n; i++)
    {
        pangram[i]=tolower(pangram[i]);
    }
    if(n<26)
    {
        cout << "NO" << endl;
        return 0;
    }

    else
    {
        int count=0;

    for(int i=0; i<n; i++)
    {
        bool found=false;
        for(int j=i+1; j<n; j++)
        {
            if(pangram[i]==pangram[j])
            {
                found=true;
                break;
            }
        }
        if(!found)
        {
            count++;
        }
    }

    if(count>=26)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    }


    return 0;
}

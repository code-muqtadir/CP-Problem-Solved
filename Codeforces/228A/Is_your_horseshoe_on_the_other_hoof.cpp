#include <iostream>
using namespace std;
int main()
{
    int arr[4];
    int count=0;
    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<=3; i++)
    {
        bool found = false;
        for(int j=i-1; j>=0; j--)
        {
            if(arr[i]==arr[j])
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
    cout << 4-count;

    return 0;
}

/*
{
    int arr[4];
    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
    }
    int maxi=0;
    for(int i=0; i<4; i++)
    {
        int count=0;
        for(int j=0; j<4; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(maxi<count-1)
        {
            maxi=count-1;
        }
    }

    cout << maxi;

    return 0;
}
*/


/*
#include <iostream>

 int counter()
 {
    int arr[4]={3,3,3,2};
    int count=0;


    {
        int key = arr[i];
        for(int k=0; k<i; k++)
        {
            if(key==arr[k])
                break;
            else
            {
                for(int j=i+1; j<4; j++)
                {
                    if(key==arr[j])
                    {
                        count++;
                    }
                }
            }
        }
    }
    return count;
 }

int main()
{
    int count= counter();




    std::cout << count;
    return 0;
}

*/

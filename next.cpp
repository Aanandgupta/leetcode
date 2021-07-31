#include<iostream>
#include<vector>
using namespace std;


vector<int> subArray(vector<int> ry)
{
    int size=ry.size();
    int firstIndex=0;
    int lastIndex=size-1;
    for(int i=0;i<size-1;)
    {
        if(ry[i]>ry[i+1])
        {
            if(firstIndex==0)
            {
                firstIndex=i;
            }
            int largest=ry[i];
            int j=i;
            while(j<size-1 && largest>ry[j+1])
           { 
            cout<<largest<<"largets";
            j++;
            }
            lastIndex=j;
            i=j;
        }
        else{
            i++;
        }

    }

    return {firstIndex,lastIndex};


}

int main()
{
    vector<int> ry={1,2,3,14,18,6,7,9,10,12,13,11,-9,990};
    vector<int> subary;
    subary=subArray(ry);
    for(int i:subary)
    cout<<i<<endl;
    return 0;
}
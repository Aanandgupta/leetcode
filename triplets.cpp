#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> tripletSum(vector<int> ary,int target)
{
    vector<vector<int>> triplets;
    int firstNum;
    int SumOfTwo;
    int temp;
    int size=ary.size();
    int lastNum;
    int j;
    for(int i=0;i<size-2;i++)
    {
        firstNum=ary[i];
        j=i+1;
        lastNum=size-1;
        while(lastNum>j)
        {
            temp=ary[j]+ary[lastNum];
            
            if(temp == target-firstNum)
            {
                triplets.push_back({firstNum,ary[j],ary[lastNum]});
                lastNum--;
                j++;
            }
            else if(temp>target-firstNum)
            {
                lastNum--;
            }
            else{
                j++;
            }
        }
    }
    return triplets;

}

int main()
{
    vector<int> ary={1,2,3,4,5,6,7,8,9,15};
    int target=18;
    int n=ary.size();
    sort(ary.begin(),ary.end());
    vector<vector<int>> triplets;
    triplets=tripletSum(ary,target);
    for(int i=0;i<triplets.size();i++)
    {
        for(int x:triplets[i])
        {
            cout<<x<<',';
        }
        cout<<endl;
    }
    return 0;
}
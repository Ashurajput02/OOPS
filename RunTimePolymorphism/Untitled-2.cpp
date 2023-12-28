#include<iostream>
#include<vector>
using namespace std;

class ash{
    public:
int singleNumber(vector<int>& nums){
        int n = nums.size();

        int xorr = 0;

        for(int i = 0; i < n; i++){
            xorr ^= nums[i];
        }

        return xorr;
    }

};
int main(){
    ash a;
    vector<int>ash={2,2,2,1};
    int ab=a.singleNumber(ash);
cout<<ab<<endl;
}
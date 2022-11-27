#include <iostream>
using namespace std;

bool isPossible(int stalls[], int k, int n, int mid) {
    int cowCount = 1;
    int lastPos = stalls[0];
    
    for(int i=0; i<n; i++) {
        if(stalls[i] - lastPos >= mid) {
            cowCount++;
            if(cowCount == k) {
                return true;
            }
            lastPos = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(int stalls[], int k, int n)
{
    //    Write your code here.
    sort(stalls.begin(), stalls.end());
    int s = 0;
    int maxi = -1 ;
    for(int i=0; i<n; i++) {
        maxi = max(maxi, stalls[i]);
    }
    int e = maxi;
    int mid = s + (e-s)/2;
    int ans = -1;
    
    while(s<=e) {
        if(isPossible(stalls,k,n,mid)) {
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main () {

    int stalls[5] = {4, 2, 1, 3, 6};
    int k = 2;

    int cows = aggressiveCows(stalls,k, 5);
    cout << "Answer is " << cows ;

    return 0;
}
#include <iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid) {

    int StudentCount = 1;
    int pageSum = 0;

    for(int i=0; i<n; i++) {
        
        if(pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        }

        else{
            StudentCount++;
            if(StudentCount > m || arr[i] > mid) {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int allocateBook(int arr[], int n, int m) {

    int s = 0;
    
    int sum = 0;
    for(int i = 0; i<n; i++) {
        sum += arr[i];
    }

    int e = sum;

    int mid = s + (e-s)/2;
    int ans= -1;

    while(s<=e) {

        if(isPossible(arr,n,m,mid)) 
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        
        mid = s + (e-s)/2;
    }

    return ans;
}

int main () {
    int pages[4] = {10, 20, 30, 40};

    int ans = allocateBook(pages, 4, 2);

    cout << "Answer is " << ans;

    return 0;
}
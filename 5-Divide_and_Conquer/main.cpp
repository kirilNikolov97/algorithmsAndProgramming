#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define MAXN 1000

/// Task 1
int x;
int arr[MAXN];

int bin_search(int L, int R){
    if(L > R){
        return -1;
    }
    int k = (L + R) / 2;
    if(arr[k] == x){
        return k;
    }
    if(x < arr[k]){
        return bin_search(L, k-1);
    }
    return bin_search(k + 1, R);
}

/// Task 2
vector<vector<int>> arr_two;

bool func(vector<int> one, vector<int> two){
    if(one[0]*two[1] > one[1]*two[0]){
        return false;
    }
    return true;
}



int main()
{
    /// Task 1
//    int n;
//    cin >> x;
//    cin >> n;
//
//    for(int i = 0; i < n; i++){
//        cin >> arr[i];
//    }
//
//    cout << bin_search(0, n);

    /// Task 2
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        vector<int> tmp;
        int tmp_num_one;
        int tmp_num_two;
        cin >> tmp_num_one >> tmp_num_two;
        tmp.push_back(tmp_num_one);
        tmp.push_back(tmp_num_two);
        arr_two.push_back(tmp);
    }

    sort(arr_two.begin(), arr_two.end(), func);

    for(int i = 0; i < n; i++){
        cout << arr_two[i][0] << '/' << arr_two[i][1] << endl;
    }

    return 0;
}

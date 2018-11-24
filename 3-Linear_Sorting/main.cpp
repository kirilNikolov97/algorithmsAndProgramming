#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define MAXN 1000

int n;

/// Task 1
void linear_sorting(int* arr, int n){

    int tmp;
    for(int i = 0; i < MAXN; i++){
        arr[i] = 0;
    }

    // Input
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        arr[tmp]++;
    }

    // Output
    for(int i = 0; i < MAXN; i++){
        if(arr[i] > 0){
            for(int j = 0; j < arr[i]; j++){
                cout << i << ' ';
            }
        }
    }
}

/// Task 2
void sort_with_standart_function(int* arr, int n){
    // Input
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // Sorting
    sort(arr, arr + n);

    // Output
    for(int i = 0; i < n; i++){
        cout << arr[i] << ' ';
    }
}

/// Task 3
void sort_matrix(){
    int n;
    vector<vector<int> > matrix;

    // Input
    cin >> n;
    for(int i = 0; i < n; i++){
        vector<int> tmp;
        for(int j = 0; j < n; j++){
            int tmp_num;
            cin >> tmp_num;
            tmp.push_back(tmp_num);
        }
        matrix.push_back(tmp);
    }

    // Sorting
    sort(matrix.begin(), matrix.end());

    // Output
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }
}

int main()
{
    int arr[MAXN];


    //linear_sorting(arr);
    //sort_with_standart_function(arr);
    //sort_matrix();

    return 0;
}

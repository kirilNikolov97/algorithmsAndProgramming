#include <iostream>
using namespace std;

#define MAX 1000

void print_intersection(int n, int m, int* first_arr, int* second_arr){
    int i = 0, j = 0;
    while(i < n && j < m){
        if(first_arr[i] == second_arr[j]){
            cout << first_arr[i] << ' ';
            i++;
            j++;
        }else if(first_arr[i] < second_arr[j]){
            i++;
        }else{
            j++;
        }
    }
}

void print_union(int n, int m, int* first_arr, int* second_arr){
    int i = 0, j = 0;
    while(i < n && j < m){
        if(first_arr[i] == second_arr[j]){
            cout << first_arr[i] << ' ';
            i++;
            j++;
        }else if(first_arr[i] < second_arr[j]){
            cout << first_arr[i] << ' ';
            i++;
        }else{
            cout << second_arr[j] << ' ';
            j++;
        }
    }
    if(i == n){
        for(j; j < m; j++){
            cout << second_arr[j] << ' ';
        }
    }else if(j == m){
        for(i; i < n; i++){
            cout << first_arr[i] << ' ';
        }
    }
}

void print_complement(int n, int m, int* first_arr, int* second_arr){
    int i = 0, j = 0;
    while(i < n && j < m){
        if(first_arr[i] == second_arr[j]){
            i++;
            j++;
        }else if(first_arr[i] < second_arr[j]){
            cout << first_arr[i] << ' ';
            i++;
        }else{
            j++;
        }
    }
}


//Example Input
//7 6
//1 3 9 15 26 37 84
//3 15 20 31 84 100
int main()
{
    int n, m;
    int first_arr[MAX];
    int second_arr[MAX];

    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> first_arr[i];
    }
    for(int i = 0; i < m; i++){
        cin >> second_arr[i];
    }

    print_intersection(n, m, first_arr, second_arr);
    cout << endl;
    print_union(n, m, first_arr, second_arr);
    cout << endl;
    print_complement(n, m, first_arr, second_arr);


    return 0;
}

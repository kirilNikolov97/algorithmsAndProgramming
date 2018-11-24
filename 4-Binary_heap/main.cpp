#include <iostream>

using namespace std;
#define MAXN 1000
int sz;
int arr[MAXN];

void heapify(int i){
    int j = i, t;
    if(i * 2 < sz && arr[j] > arr[2 * i]){
        j = 2 * i;
    }
    if(i * 2 + 1 < sz && arr[j] > arr[2 * i + 1]){
        j = 2 * i + 1;
    }
    if(i != j){
        t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
        heapify(j);
    }
}

void go_up(int i){
    int t;
    while(i != 1 && arr[i] < arr[i / 2]){
        t = arr[i / 2];
        arr[i / 2] = arr[i];
        arr[i] = t;
        t = i / 2;
    }
}

void make_heap(){
    int i;
    for(i = sz; i >= 1; i--){
        //heapify(i);
        go_up(i);
    }
}

int main()
{

    cin >> sz;
    for(int i = 0; i < sz; i++){
        cin >> arr[i];
    }

    make_heap();

    for(int i = 0; i < sz; i++){
        cout << arr[i] << ' ';
    }

    return 0;
}

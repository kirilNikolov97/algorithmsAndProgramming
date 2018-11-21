#include <iostream>

using namespace std;
#define MAXN 1000

void bubble_sort_asc(int n, int* arr){
    for(int i = n - 2; i >= 0; i--){
        for(int j = 0; j <= i; j++){
            if(arr[j] > arr[j + 1]){
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

void bubble_sort_desc(int n, int* arr){
    for(int i = n - 2; i >= 0; i--){
        for(int j = 0; j <= i; j++){
            if(arr[j] < arr[j + 1]){
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

void insertion_sort(int n, int arr[]){
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;

       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}


int main()
{
    int n;
    int arr[MAXN];

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    //bubble_sort_asc(n, arr);
    //bubble_sort_desc(n, arr);
    insertion_sort(n, arr);

    // Print the sorted array
    for(int i = 0; i < n; i++){
        cout << arr[i] << ' ';
    }

    return 0;
}

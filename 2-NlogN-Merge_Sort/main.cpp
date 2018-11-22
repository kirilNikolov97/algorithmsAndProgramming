#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


using namespace std;

#define MAX 1000

int n = 90, m=300;
int a[100000],c[100000];

void my_merge(){
    for(int i = 0, j = 0, k = 0; i < m && j < n; k++){
        if(a[i] < b[j]){
            c[k] = a[i++];
        }
        else{
            c[k] = b[j++];
        }
    }

    if(i == m){
        for(j; j < n; k++){
            c[k] = b[j++];
        }
    }
    else{
        for(i; i < m; k++){
            c[k] = a[i++];
        }
    }
}


/// Сортиране на място
void my_merge_in_place(int u, int v, int w){
    int i, j, k;
    for(i = u, j = v + 1, k = 0; i <= v  && j <= w; k++){
        if(a[i] < a[j]){
            c[k] = a[i++];
        }
        else{
            c[k] = a[j++];
        }
    }
    if(i > v){
        for(j; j <= w; k++){
            c[k] = a[j++];
        }
    }
    else{
        for(i; i <= v; k++){
            c[k] = a[i++];
        }
    }
    for(int i = 0; i < k; i++){
        a[u + i] = c[i];
    }
}

void merge_sort(int p, int q){
    if(p == q){
        return;
    }
    merge_sort(p, (p + q) / 2);
    merge_sort((p + q) / 2 + 1, q);
    //my_merge(p, (p + q) / 2, q);
    my_merge_in_place(p, (p + q) / 2, q);
}

int main()
{
    srand((unsigned)time(NULL));

    for(int i = 0; i < n;i++){
        a[i] = rand()%m+1;
    }

    merge_sort(0, n - 1);


    for(int i = 0; i < n;i++){
        cout << a[i] << " ";
    }

    return 0;
}

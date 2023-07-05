// Functions Objects (Functor): Functions wrapped in a class so that it is available like an object

#include<iostream>
#include<functional>
#include<algorithm>

using namespace std;

int main(){
    int arr[] = {1, 3, 6, 5, 8, 13, 12};
    sort(arr, arr+5);
    sort(arr, arr+5, greater<int>());

    for(int i=0; i<6; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
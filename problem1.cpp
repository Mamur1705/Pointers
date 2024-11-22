#include "iostream"
using namespace std;
// write a function that counts how many even numbers in an array using pinter:
int evenCounter(const int *a, int size) {
    int counter=0;
    for(int i=0; i<size; i++) {
        if(*a%2==0) {
            counter++;
        }
        a++;
    }
    return counter;
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    cout<<evenCounter(arr, n)<<endl;
    return 0;
}


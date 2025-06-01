#include<iostream>
using namespace std;



int main(){
    long long t;
    long long n;
    long long n_total = 0;
    long long sum = 0;
    cin >> t;
    n_total = (t * (t+1))/2;
    for(long long i = 0 ; i < t - 1; i++){
        cin >> n;
        sum += n;
    }

    cout << n_total - sum;

    return 0;

}

#include <iostream>
using namespace std;

int main(){
    int sum = 0;
    for (int i = 2; i <= 50; i+=2){
        sum +=i;
    }
    cout << sum << endl;
}
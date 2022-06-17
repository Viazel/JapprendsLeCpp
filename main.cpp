#include <iostream>

using namespace std;

int multiply(int a, int b){
    return a * b;
}

void MultiplyAndLog(int a, int b){
    cout << multiply(a,b) << endl;
}

int main(){
    MultiplyAndLog(5, 8);
    return 0;
}
#include <iostream>
using namespace std;
#include "lib.h"

int main() {
    int d=0;
    cin>>d;
    float numeri[d];
    for(int i=0; i<d; i++){
        cin>>numeri[i];
    }
    cout<<max(numeri, d);
    return 0;
}

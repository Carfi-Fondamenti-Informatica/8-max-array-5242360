
#include "lib.h"
float max(float numeri[], int d){
    float g=0;
    for(int i=0; i<d; i++){
        if(g<numeri[i]){
            g=numeri[i];
        }
    }
    return g;
}

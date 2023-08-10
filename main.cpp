#include "EulersMethod.hpp"

int F(int t, int y);

int main(){
    std::vector<int> Y(10);
    std::vector<int> t(10);

    double h = 1.0;
    Y[0] = 1;
    t[0] = 0;
    int n = 4;

    // find y[n]
    int i = 1;
    while(i <= n){
        Y[i] = Y[i-1] + h*F(t[i-1],Y[i-1]);
        i++;
    }

    for(int y: Y){
        std::cout<< y << ", ";
    }
    std::cout<<std::endl;

}

int F(int t, int y){
    return y;
}
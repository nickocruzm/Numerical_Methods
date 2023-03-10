#include <iostream>
#include <vector>
#include <cmath>

using std::cout; using std::cin;
using std::vector;


vector<double> H = {0.015, 0.020, 0.025, 0.03}; // h-STEPSIZES
vector<double> K = {0,0,0,0};

vector<int> I = {0,3}; // INTERVAL

double t0 = 0; // Initial condition y(0) = 0
double y0 = 0;

double dy(double t, double x); // Given funciton

double Runge_Kutta(double );
vector<double> get_Ks(double ,double ,double , int );


int main(){
double h;
double n;
int a = 0;
int b = 3;
double y0 = 0;
double t0 = 0;
vector<double> Y = {y0};

cin >> h;

n = 3/h;
int i = 1;
double tn = 0;
while(i <= h){
    for(int j = 1; j <= 4; j++){i
        if(j == 1){
            
            double k1 = 

        }
    }


}

//


}

// int operation (int x, int y,int (*function)(int,int)){return function(x,y);}

double dy(double t, double x){ return (100*(sin(t) - x)); }

vector<double> get_Ks(double t, double h, int i){
    if(i == 1){
        return ()
    }
}

double Runge_Kutta(double h){

    // get k1,k2,k3,k4

    for(int i = 1; i <= 4; i++){

    // k1 = h*f(t0, x0)




    // k2 = h*f(t0 + h/2 , y0 + 0.5*(k1))

    // k3 = h*f(t0 + h/2 , y0 + 0.5*(k2))

    // k4 = h f(t0 + h, y0 + k3)

    }


}
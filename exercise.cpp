#include <iostream>
#include <cmath>

double f(double x, int graus, double list[]){
    double func=0;
    while(graus>0){
        func=func+list[graus]*pow(x,graus);
        graus--;
    }
    func=func+list[0];
    return func;
}

int main() {
    int grau; std::cin>>grau;
    double coef[grau+1];
    for(int i=0; i<grau+1;i++){
        std::cin>>coef[i];
    }
    double inf,sup,n; std::cin>>inf>>sup>>n;
    double delta=(sup-inf)/n; double Area=0.0;
    while(n>0){
        Area=Area+(f(inf+n*delta,grau,coef)+f(inf+(n-1)*delta,grau,coef))*delta/2;
        n--;
        
    }
    std::cout<<Area<<'\n';
    return 0;
}
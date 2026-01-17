#include<iostream>

int main(){

    double distance_km;
    double fuel_liter;

    std::cout<<"Enter your distance in km: ";
    std::cin>>distance_km;

    std::cout<<"Enter your fuel in liter: ";
    std::cin>>fuel_liter;

    double fuel_consumption = (fuel_liter*100.0)/distance_km;

    std::cout<<"the fuel consumption per 100km is: "<<fuel_consumption;

}
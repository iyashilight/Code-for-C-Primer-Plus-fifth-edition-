#include<iostream>

int main(){

    double distance_km;
    double fuel_liter;
    constexpr double Europe_to_America(235.215);

    std::cout<<"Enter your distance in km: ";
    std::cin>>distance_km;

    std::cout<<"Enter your fuel in liter: ";
    std::cin>>fuel_liter;

    double fuel_consumption = (fuel_liter*100.0)/distance_km;
    double mpg = fuel_consumption*Europe_to_America;

    std::cout<<"the fuel consumption per 100km is: "<<fuel_consumption<<std::endl;
    std::cout<<"MPG is: "<<mpg;

}
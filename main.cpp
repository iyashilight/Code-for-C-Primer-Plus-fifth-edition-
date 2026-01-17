#include<iostream>

int main() {
    double height_inch;
    double weight_pound;
    constexpr double ic_mt(0.0254);
    constexpr double pd_kg(1.0/2.2);

    std::cout<<"Enter your height: ";
    std::cin>>height_inch;
    std::cout<<"Enter your weight: ";
    std::cin>>weight_pound;

    double height_m = height_inch * ic_mt;
    double weight_kg = weight_pound * pd_kg;

    double bmi = weight_kg / (height_m * height_m);

    std::cout << "Your BMI is: " << bmi;

}
#include<iostream>

int main() {
    double degrees;
    int minutes;
    int seconds;

    constexpr double sec_to_deg(1.0/3600.0);
    constexpr double min_to_deg(1.0/60.0);

    std::cout<<"Enter a latitude in degrees,minutes,and seconds:\n"
               "First,enter the degrees: ";
    std::cin>>degrees;

    std::cout<<"Next,enter the minutes of arc: ";
    std::cin>>minutes;

    std::cout<<"Finally,enter the second of arc: ";
    std::cin>>seconds;

    double deg_sec = seconds*sec_to_deg;
    double deg_min = minutes*min_to_deg;
    double total_deg = degrees+deg_min+deg_sec;

    std::cout<<degrees<<" degrees,"<<minutes<<" minutes,"<<seconds<<" seconds = "<<total_deg<<" degrees";

}
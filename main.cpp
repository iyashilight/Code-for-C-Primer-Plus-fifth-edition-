#include<iostream>

int main() {
    long total_second;

    std::cout<<"Enter the number of seconds: ";
    std::cin>>total_second;

    constexpr long second_per_day(24*3600);
    constexpr long second_per_hour(3600);
    constexpr long second_per_minute(60);

    long remaining = total_second;

    long day = remaining/second_per_day;
    long hour = remaining%second_per_day/second_per_hour;
    long minute = remaining%second_per_hour/second_per_minute;
    long second = remaining%second_per_minute;

    std::cout<<total_second<<" seconds = "<<
        day<<" days,"<<
            hour<<" hours,"<<
                minute<<" minutes,"<<
                    second<<" seconds";

}
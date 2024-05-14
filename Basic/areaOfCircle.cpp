#include<iostream>
int main()
{
    const float PI = 3.141592;
    float radius, area;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;
    area = PI * radius * radius;
    std::cout << "The area of the circle is " << area << std::endl;
    return 0;
}

//qn.6: WAP to demonstrate compile time and runtime polymorphism using same classes structure

#include <iostream>
using namespace std;
class Shape {
    public:
    // for compile time polymorphism
    // draw method without parameter
    void draw() {
        cout << "Drawing a shape!" << endl;
    }
    // draw method with a parameter
    void draw(int sides) {
        cout << "Drawing a shape with " << sides << " sides!" << endl;
    }
    // Virtual function for runtime polymorphism
    virtual void drawShape() {
        cout << "Drawing a generic shape!" << endl;
    }
};

// Derived class
class Circle : public Shape {
public:
    // Overriding the drawShape function for runtime polymorphism
    void drawShape() override {
        cout << "Drawing a circle!" << endl;
    }
};

int main() {
    // Demonstrating compile-time polymorphism
    Shape s;
    s.draw();            // Calls draw() from Shape
    s.draw(4);           // Calls overloaded draw(int) from Shape
    
    // Demonstrating runtime polymorphism
    Shape* shapePtr;     // Base class pointer
    Circle c;
    shapePtr = &s;
    shapePtr->drawShape();  // Calls drawShape() from Shape
    shapePtr = &c;
    shapePtr->drawShape();  // Calls drawShape() from Circle
    return 0;
}

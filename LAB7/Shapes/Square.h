#ifndef SQUARE_H
#define SQUARE_H

namespace shapes {
    class Square {
    private:
        float sideLength;

    public:
        Square(); // Default constructor
        Square(float side); // Overloaded constructor
        ~Square(); // Destructor
        void setSideLength(float side);
        float getSideLength() const;
    };
}
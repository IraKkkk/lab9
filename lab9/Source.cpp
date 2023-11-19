#include <iostream>

class GeometricFigure {
protected:
    double centerX;
    double centerY;
    double rotationAngle;
    double scaleFactor;

public:
    GeometricFigure(double x, double y, double angle, double scale)
        : centerX(x), centerY(y), rotationAngle(angle), scaleFactor(scale) {}

    virtual void display() = 0;
    virtual void hide() = 0;
    virtual void rotate(double angle) = 0;
    virtual void translate(double x, double y) = 0;
};

class Triangle : public GeometricFigure {
public:
    Triangle(double x, double y, double angle, double scale)
        : GeometricFigure(x, y, angle, scale) {}

    void display() override {
        // Implement display for triangle
        std::cout << "Displaying triangle at (" << centerX << ", " << centerY << ") with rotation angle "
            << rotationAngle << " and scale factor " << scaleFactor << std::endl;
    }

    void hide() override {
        // Implement hide for triangle
        std::cout << "Hiding triangle" << std::endl;
    }

    void rotate(double angle) override {
        rotationAngle += angle;
        // Implement rotation for triangle
        std::cout << "Rotating triangle by " << angle << " degrees" << std::endl;
    }

    void translate(double x, double y) override {
        centerX += x;
        centerY += y;
        // Implement translation for triangle
        std::cout << "Translating triangle by (" << x << ", " << y << ")" << std::endl;
    }
};

class Rectangle : public GeometricFigure {
public:
    Rectangle(double x, double y, double angle, double scale)
        : GeometricFigure(x, y, angle, scale) {}

    void display() override {
        // Implement display for rectangle
        std::cout << "Displaying rectangle at (" << centerX << ", " << centerY << ") with rotation angle "
            << rotationAngle << " and scale factor " << scaleFactor << std::endl;
    }

    void hide() override {
        // Implement hide for rectangle
        std::cout << "Hiding rectangle" << std::endl;
    }

    void rotate(double angle) override {
        rotationAngle += angle;
        // Implement rotation for rectangle
        std::cout << "Rotating rectangle by " << angle << " degrees" << std::endl;
    }

    void translate(double x, double y) override {
        centerX += x;
        centerY += y;
        // Implement translation for rectangle
        std::cout << "Translating rectangle by (" << x << ", " << y << ")" << std::endl;
    }
};

int main() {
    Triangle triangle(0, 0, 30, 1.5);
    triangle.display();
    triangle.rotate(45);
    triangle.translate(5, 5);
    triangle.hide();

    Rectangle rectangle(10, 10, 60, 2);
    rectangle.display();
    rectangle.rotate(90);
    rectangle.translate(3, 3);
    rectangle.hide();

    return 0;
}

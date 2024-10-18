class Wektor2D
{
private:
    double x_coordinate;
    double y_coordinate;

public:
    Wektor2D() { x_coordinate = 0., y_coordinate = 0.; } // Konstruktor domy�lny
    Wektor2D(double x, double y) { x_coordinate = x, y_coordinate = y; } //Konstruktor nadaj�cy wsp�rz�dne
    ~Wektor2D(){}; // Destruktor
    void setX(double x) { x_coordinate = x; } // X setter
    void setY(double y) { y_coordinate = y; ;} // Y setter
    double getX() { return x_coordinate; } // X getter
    double getY() { return y_coordinate; } // Y getter
};
Wektor2D operator+(Wektor2D v1, Wektor2D v2) //dodawanie wektor�w
{
    return Wektor2D(v1.getX() + v2.getX(), v1.getY() + v2.getY());
}
double operator*(Wektor2D v1, Wektor2D v2) //iloczny skalarny
{
    return v1.getX() * v2.getX() + v1.getY() * v2.getY();
}

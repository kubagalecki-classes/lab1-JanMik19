class Wektor2D
{
    double x, y;
public:
    Wektor2D() : x(0), y(0) {}
    Wektor2D(double xx, double yy) : x(xx), y(yy) {}
    ~Wektor2D() {}
    double getX() { return x; }
    double getY() { return y; }
    void setX(double x) { this->x = x;  }
    void setY(double y) { this->y = y;  }
    friend Wektor2D operator+(const Wektor2D&, const Wektor2D&);
    friend double operator*(const Wektor2D&, const Wektor2D&);
};

Wektor2D operator+(const Wektor2D& k1, const Wektor2D& k2)
{
  Wektor2D r;
  r.x = k1.x + k2.x;
  r.y = k1.y + k2.y;
  return r;
}

double operator*(const Wektor2D& k1, const Wektor2D& k2)
{
  return k1.x * k2.x + k1.y * k2.y;
}
class Complex
{
  friend ostream &operator<<(ostream &stream, Complex obj);
  friend Complex operator+(Complex right, Complex left);
  friend Complex operator-(Complex right, Complex left);
public:
  Complex(float a = 0, float b = 0)
  {
    real = a; 
    imagin = b;
  }
  float getReal()
  {
    return real;
  }
  float getImaginary()
  {
    return imagin;
  }
  string toString()
  {   int a = real,b=imagin;
      if(real != 0 && imagin !=0)
        return ( a != real ? to_string(real):to_string(a) ) + (imagin>0 ? "+":"") + (imagin == 1 || -imagin==1 ? (imagin<0 ? "-":""):(b == imagin ? to_string(b):to_string(imagin) )) + "i";
      if(imagin == 0)
        return ( a != real ? to_string(real):to_string(a) );
      if(real == 0)
        return (imagin == 1 || -imagin == 1 ? (imagin>0 ? "":"-"): (b == imagin ? to_string(b):to_string(imagin) )) + "i";
  }
private:
  float real;
  float imagin;
};

ostream &operator<<(ostream &stream, Complex obj)
{
  stream << obj.toString();
  return stream;
}
Complex operator+(Complex left, Complex right)
{
  Complex tmp(left.getReal()+ right.getReal(), left.getImaginary() + right.getImaginary());
  return tmp;
}
Complex operator-(Complex left, Complex right)
{
  Complex tmp(left.getReal() - right.getReal(), left.getImaginary() - right.getImaginary());
  return tmp;
}

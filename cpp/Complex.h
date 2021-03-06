#pragma once
#include <vector>
#include <string>

using namespace std;

class Complex
{
	/** The real part. */
	double real;
	/** The imaginary part. */
	double imaginary;
	/** Record whether this Complex1 number is equal to NaN. */
	bool IsNaN;
	/** Record whether this Complex1 number is infinite. */
	bool IsInfinite;
public:
	static Complex createComplex(const double realPart, const double imaginaryPart);
	/** The square root of -1. A number representing "0.0 + 1.0i" */
	static Complex I;
	// CHECKSTYLE: stop ConstantName
	/** A Complex1 number representing "NaN + NaNi" */
	static Complex NaN;
	// CHECKSTYLE: resume ConstantName
	/** A Complex1 number representing "+INF + INFi" */
	static Complex INF;
	/** A Complex1 number representing "1.0 + 0.0i" */
	static Complex ONE;
	/** A Complex1 number representing "0.0 + 0.0i" */
	static Complex ZERO;
	Complex();
	Complex(double real);
	Complex(double real, double imaginary);
	~Complex() {};
	Complex operator=(const Complex &src);
	double getImaginary()const{ return imaginary; };
	double getReal()const{ return real; };
	double abs();
	Complex operator+(const Complex &addend);
	Complex operator+(double addend);
	Complex conjugate();
	Complex operator/(const Complex &divisor);
	Complex operator/(double divisor);
	Complex reciprocal();
	bool Equals(const Complex &c) const;
	static bool equals(const Complex &x, const Complex &y, double eps);
	Complex operator*(const Complex &factor);
	Complex operator*(int factor);
	Complex operator*(double factor);
	Complex operator-();
	Complex operator-(const Complex &subtrahend);
	Complex operator-(double subtrahend);
	Complex log();
	Complex acos();
	Complex asin();
	Complex atan();
	Complex cos();
	Complex cosh();
	Complex exp();
	Complex pow(const Complex &x);
	Complex pow(double x);
	Complex sin();
	Complex sinh();
	Complex sqrt();
	Complex sqrt1z();
	Complex tan();
	Complex tanh();
	double getArgument();
	Complex nthRoot(int n);
	vector<Complex> nthRoots(int n);
	string toString();
};


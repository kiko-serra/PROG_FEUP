#include <iostream>
#include <string>
#include <sstream>

class Fraction{
public:
	// constructors
	Fraction();
	Fraction(int numerator, int denominator);
	// accessors
	int get_numerator() const;
	int get_denominator() const;
	// other  member functions
	int gcd(int a, int b);
	void normalize();
	void write() const;
	//operations
	Fraction sum(const Fraction &right);
	Fraction sub(const Fraction &right);
	Fraction mul(const Fraction &right);
	Fraction div(const Fraction &right);

private:
	int numerator;
	int denominator;
};

Fraction::Fraction() : numerator(0), denominator(1) {}

Fraction::Fraction(int numerator, int denominator){
	this->numerator = numerator / gcd(numerator, denominator);
	this->denominator = denominator / gcd(numerator, denominator);
	if (this->denominator < 0){
		this->numerator *= -1;
		this->denominator *= -1;
	}
}

int Fraction::get_numerator() const{
	return numerator;
}

int Fraction::get_denominator() const{
	return denominator;
}

//! Compute the gcd of two numbers.
int Fraction::gcd(int a, int b){
	while (b != 0){
		int tmp = a;
		a = b;
		b = tmp % b;
	}
	return a;
}

//! Normalize a fraction.
void Fraction::normalize(){
	int g = gcd(numerator, denominator);
	numerator /= g;
	denominator /= g;
	if (denominator < 0){
		numerator = -numerator;
		denominator = -denominator;
	}
}

//! shows fraction f on the screen
void Fraction::write() const{
	cout << get_numerator() << '/' << get_denominator();
}

Fraction Fraction::sum(const Fraction &right){
	this->numerator = this->numerator * right.denominator + this->denominator * right.numerator;
	this->denominator = this->denominator * right.denominator;
	this->normalize();
	return *this;
}

Fraction Fraction::sub(const Fraction &right){
	this->numerator = this->numerator * right.denominator - this->denominator * right.numerator;
	this->denominator = this->denominator * right.denominator;
	this->normalize();
	return *this;
}

Fraction Fraction::mul(const Fraction &right){
	this->numerator = this->numerator * right.numerator;
	this->denominator = this->denominator * right.denominator;
	this->normalize();
	return *this;
}

Fraction Fraction::div(const Fraction &right){
	this->numerator = this->numerator * right.denominator;
	this->denominator = this->denominator * right.numerator;
	this->normalize();
	return *this;
}
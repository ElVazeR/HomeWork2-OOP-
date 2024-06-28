#include "Fraction.hpp"

void Fraction::reduce()
{
    unsigned int gcdResult = NOD(FirstNumber, SecondNumber); 
    FirstNumber /= gcdResult;
    SecondNumber /= gcdResult;
}

unsigned int Fraction::NOD(unsigned int a, unsigned int b) // Наибольший общий делитель.
{
    while (b != 0) {
        unsigned int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

Fraction::Fraction(unsigned int num, unsigned int denom, bool pos): FirstNumber(num), SecondNumber(denom), positive(pos) 
{
    if (SecondNumber == 0) 
        std::cerr << "Знаменатель не может быть нулем." << std::endl;
    else 
        reduce();
}
Fraction::Fraction() : Fraction(1, 1, true) {}
Fraction::Fraction(const Fraction& other) : Fraction(other.FirstNumber, other.SecondNumber, other.positive) {}

void Fraction::print() const 
{
    std::cout << (positive ? "" : "-") << FirstNumber << "/" << SecondNumber << std::endl;
}



Fraction Fraction::sum(const Fraction& other) const 
{
    unsigned int newNumerator = FirstNumber * other.SecondNumber + other.FirstNumber * SecondNumber;
    unsigned int newDenominator = SecondNumber * other.SecondNumber;
    bool newPositive = (positive == other.positive);
    return Fraction(newNumerator, newDenominator, newPositive);
}

Fraction Fraction::subtraction(const Fraction& other) const 
{
    unsigned int newNumerator = FirstNumber * other.SecondNumber - other.FirstNumber * SecondNumber;
    unsigned int newDenominator = SecondNumber * other.SecondNumber;
    bool newPositive = (positive == other.positive) || (newNumerator == 0);
    return Fraction(newNumerator, newDenominator, newPositive);
}
 Fraction Fraction::sum(unsigned int number) const {
        return sum(Fraction(number * SecondNumber, SecondNumber, true));
    }

 Fraction Fraction::subtraction(unsigned int number) const {
        return subtraction(Fraction(number * SecondNumber, SecondNumber, true));
    }

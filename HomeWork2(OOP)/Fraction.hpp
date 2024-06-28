#include <iostream>
class Fraction {
private:
    unsigned int FirstNumber; 
    unsigned int SecondNumber; 
    bool positive; 

  
    void reduce();

   
    unsigned int NOD(unsigned int a, unsigned int b);
 
public:
    // Параметрический конструктор
    Fraction(unsigned int num, unsigned int denom, bool pos);
    // Конструктор по умолчанию
    Fraction();
    // Конструктор Копирование
    Fraction(const Fraction& other);
    
    void print() const;
    Fraction sum(const Fraction& other) const;
    Fraction subtraction(const Fraction& other)const;
    // Целые числа
    Fraction sum(unsigned int number) const;
    Fraction subtraction(unsigned int number) const;




};
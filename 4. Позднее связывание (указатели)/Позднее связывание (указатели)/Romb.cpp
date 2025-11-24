#include <iostream>

#include "Romb.h"

using namespace std;

void Romb::ShowArea() const
{
    cout << "Square of rectangle: " << m_value1 * m_value1 << endl;
}

void Romb::ShowLength() const 
{
    cout << "Length of rectangle: " << (m_value1 + m_value2) * 2;
}
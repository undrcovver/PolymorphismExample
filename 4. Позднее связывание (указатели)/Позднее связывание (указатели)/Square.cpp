#include <iostream>

#include "Square.h"

using namespace std;

void Square::ShowArea() const
{
    cout << "Square of rectangle: " << m_value1 * m_value2 << endl;
}

void Square::ShowLength() const 
{
    cout << "Perimetr of rectangle: " << (m_value1 + m_value2) * 2;
}
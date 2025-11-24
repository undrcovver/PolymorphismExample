#pragma once

#include "Figure.h"

class Triangle :
    public Figure
{
public:

    virtual void ShowArea() const;
    virtual void ShowLength() const;
};
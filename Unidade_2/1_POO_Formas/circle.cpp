#include "circle.hpp"

void Circle::SetRatio(float valor)
{
    ratio = valor;
}

float Circle::GetRatio()
{
    return ratio;
}

float Circle::CalcArea()
{
    return 3.14159 * ratio * ratio;
}

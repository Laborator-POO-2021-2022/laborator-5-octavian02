#include "Clasa.hpp"

Clasa::Clasa() : nr_elevi(0)
{
}

Clasa::Clasa(int nr_elevi) : nr_elevi(nr_elevi)
{
}

Clasa &Clasa::operator=(const Clasa &obj)
{
    this->nr_elevi = obj.nr_elevi;
    return *this;
}

ostream& operator<<(ostream& out, const Clasa& obj)
{

	out << obj.nr_elevi << endl;
	
	return out;
}


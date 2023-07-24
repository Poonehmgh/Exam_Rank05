#ifndef Polymorph_hpp
# define Polymorph_hpp
#include<iostream>

#include"ASpell.hpp"
class ASpell; 

class Polymorph: public ASpell
{
    public:
        virtual ~Polymorph();
        virtual Polymorph *clone() const;
        Polymorph();

};


#endif

#ifndef Fireball_hpp
# define Fireball_hpp
#include<iostream>

#include"ASpell.hpp"
class ASpell; 
class Fireball: public ASpell
{
    public:
        virtual ~Fireball();
        virtual Fireball *clone() const;
        Fireball();

};


#endif

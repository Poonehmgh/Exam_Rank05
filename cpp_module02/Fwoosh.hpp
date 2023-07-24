#ifndef Fwoosh_hpp
# define Fwoosh_hpp
#include<iostream>
#include"ASpell.hpp"
class ASpell; 
class Fwoosh: public ASpell
{
    public:
        virtual ~Fwoosh();
        virtual Fwoosh *clone() const;
        Fwoosh();

};


#endif

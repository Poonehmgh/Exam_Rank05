#ifndef Dummy_hpp
# define Dummy_hpp
#include<iostream>
#include"ATarget.hpp"
class ATarget;
#include"ASpell.hpp"
class ASpell;

class Dummy: public ATarget
{
    public:
        virtual ~Dummy();
        virtual Dummy *clone() const;
        Dummy();

};


#endif

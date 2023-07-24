#ifndef BrickWall_hpp
# define BrickWall_hpp
#include<iostream>
#include"ATarget.hpp"
class ATarget;


class BrickWall: public ATarget
{
    public:
        virtual ~BrickWall();
        virtual BrickWall *clone() const;
        BrickWall();

};


#endif

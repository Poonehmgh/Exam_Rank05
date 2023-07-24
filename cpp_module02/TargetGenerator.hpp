#ifndef TargetGenerator_hpp
# define TargetGenerator_hpp
#include<iostream>
#include<vector>
#include"ATarget.hpp"
class ATarget;

#include<vector>

class TargetGenerator
{
    public:
        ~TargetGenerator();
        TargetGenerator();
        void learnTargetType(ATarget*);
        void forgetTargetType(std::string const &name);
        ATarget* createTarget(std::string const &name);


    private:
        TargetGenerator &operator=(TargetGenerator const &src); //
        TargetGenerator(TargetGenerator const &src);
        std::vector<ATarget*> _targ_;
};


#endif

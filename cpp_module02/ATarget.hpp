#ifndef ATarget_hpp
# define ATarget_hpp
#include<iostream>
#include"ASpell.hpp"
class ASpell;
class ATarget
{
    public:
        virtual ~ATarget();
        ATarget(const std::string &name);
        std::string const &getType() const;
        void setType(std::string const &title);
        virtual ATarget *clone() const = 0;
        ATarget &operator=(ATarget const &src);
        ATarget(ATarget const &src);
        ATarget();
        void getHitBySpell(ASpell const &src) const;
    protected:
        std::string _type_;
};


#endif

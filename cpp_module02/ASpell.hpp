#ifndef ASpell_hpp
# define ASpell_hpp
#include<iostream>
#include"ATarget.hpp"
class ATarget;

class ASpell
{
    public:
        virtual ~ASpell();
        ASpell(const std::string &name, const std::string &effects);
        std::string const &getName() const;
        std::string const &getEffects() const;
        void setName(std::string const &name);
        void setEffects(std::string const &title);
        virtual ASpell *clone() const = 0;
        ASpell &operator=(ASpell const &src);
        ASpell(ASpell const &src);
        ASpell();
        void launch(ATarget const &src) const;
    protected:
        std::string _name_;
        std::string _effects_;
};


#endif

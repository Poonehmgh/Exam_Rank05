#ifndef SpellBook_hpp
# define SpellBook_hpp
#include<iostream>
#include<vector>
// #include"ATarget.hpp"
// class ATarget;
#include"ASpell.hpp"
class ASpell;

class SpellBook
{
    public:
        ~SpellBook();
        void learnSpell(ASpell *src);
        void forgetSpell(std::string name);
        ASpell *createSpell(std::string const &name);
        SpellBook();

    private:
        SpellBook &operator=(SpellBook const &src); //
        SpellBook(SpellBook const &src);
        std::vector<ASpell*> _spell_;
};


#endif

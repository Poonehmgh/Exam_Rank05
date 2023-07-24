#ifndef Warlock_hpp
# define Warlock_hpp
#include<iostream>

#include"ATarget.hpp"
class ATarget;
#include"ASpell.hpp"
class ASpell;
#include"Dummy.hpp"
class Dummy;
#include"Fwoosh.hpp"
class Fwoosh;
#include<vector>
class Warlock
{
    public:
        ~Warlock();
        Warlock(const std::string &name, const std::string &title);
        std::string const &getName() const;
        std::string const &getTitle() const;
        void setName(std::string const &name);
        void setTitle(std::string const &title);
        void introduce() const;
        void learnSpell(ASpell *src);
        void forgetSpell(std::string name);
        void launchSpell(std::string name, ATarget const &src);

    private:
        Warlock &operator=(Warlock const &src); //
        Warlock(Warlock const &src);
        Warlock();
        std::string _name_;
        std::string _title_;
        std::vector<ASpell*> _spell_;
};


#endif

#include"Warlock.hpp"

// Warlock::Warlock()
// {
// }

Warlock::Warlock(std::string const &name, const std::string &title): _name_(name), _title_(title)
{
    std::cout << _name_ << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock(Warlock const &src)
{
    *this = src;
}

Warlock::~Warlock()
{
    std::cout << _name_ << ": My job here is done!" << std::endl;
    std::vector<ASpell*>::iterator ii = _spell_.end();
    for (std::vector<ASpell*>::iterator i = _spell_.begin(); i != ii; i++)
    {
        delete (*i);
    }
    _spell_.clear();

}

void Warlock::introduce() const
{
    std::cout << _name_ << ": I am " << _name_ << ", " << _title_ << "!"<< std::endl;
}

void Warlock::setName(std::string const &name)
{
    _name_ = name;
}

void Warlock::setTitle(std::string const &title)
{
    _title_ = title;
}
std::string const &Warlock::getName() const 
{
    return(_name_);
}

std::string const &Warlock::getTitle() const
{
    return(_title_);
}

Warlock &Warlock::operator=(Warlock const &src)
{
    setName(src.getName());
    setTitle(src.getTitle());
    return(*this);
}

void Warlock::learnSpell(ASpell *src)
{
    if (src)
    {
        std::vector<ASpell*>::iterator ii = _spell_.end();
        for (std::vector<ASpell*>::iterator i = _spell_.begin(); i != ii; i++)
        {
            if ((*i)->getName() == src->getName())
                return ;
        }
        _spell_.push_back(src);
    }
    
}
void Warlock::forgetSpell(std::string name)
{
    std::vector<ASpell*>::iterator ii = _spell_.end();
    for (std::vector<ASpell*>::iterator i = _spell_.begin(); i != ii; i++)
    {
        if ((*i)->getName() == name)
        {
            delete (*i);
            i = _spell_.erase(i);
        }
    }
}
void Warlock::launchSpell(std::string name, ATarget const &src)
{
    std::vector<ASpell*>::iterator ii = _spell_.end();
    for (std::vector<ASpell*>::iterator i = _spell_.begin(); i != ii; i++)
    {
        if ((*i)->getName() == name)
        {
            (*i)->launch(src);
            return;
        }
    }
}




int main()
{
  Warlock richard("Richard", "the Titled");

  Dummy bob;
  Fwoosh* fwoosh = new Fwoosh();

  richard.learnSpell(fwoosh);

  richard.introduce();
  richard.launchSpell("Fwoosh", bob);

  richard.forgetSpell("Fwoosh");
  richard.launchSpell("Fwoosh", bob);
}
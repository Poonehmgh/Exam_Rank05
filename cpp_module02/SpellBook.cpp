#include"SpellBook.hpp"

SpellBook::SpellBook()
{
}


SpellBook::SpellBook(SpellBook const &src)
{
    *this = src;
}

SpellBook::~SpellBook()
{
    // std::vector<ASpell*>::iterator ii = _spell_.end();
    // for (std::vector<ASpell*>::iterator i = _spell_.begin(); i != ii; i++)
    // {
    //     delete (*i);
    // }
    // _spell_.clear();

}

SpellBook &SpellBook::operator=(SpellBook const &src)
{
    _spell_ = src._spell_;
    return(*this);
}

void SpellBook::learnSpell(ASpell *src)
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
void SpellBook::forgetSpell(std::string name)
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
ASpell *SpellBook::createSpell(std::string const &name) //////
{
    std::vector<ASpell*>::iterator ii = _spell_.end();
    for (std::vector<ASpell*>::iterator i = _spell_.begin(); i != ii; ++i)
    {
        if ((*i)->getName() == name)
        {
            return(*i)->clone();
        }
    }
    return (NULL);
}



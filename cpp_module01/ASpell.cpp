#include"ASpell.hpp"

ASpell::ASpell()
{
}

ASpell::ASpell(std::string const &name, const std::string &effects): _name_(name), _effects_(effects)
{
}

ASpell::ASpell(ASpell const &src)
{
    *this = src;
}

ASpell::~ASpell()
{}

void ASpell::setName(std::string const &name)
{
    _name_ = name;
}

void ASpell::setEffects(std::string const &title)
{
    _effects_ = title;
}
std::string const &ASpell::getName() const 
{
    return(_name_);
}

std::string const &ASpell::getEffects() const
{
    return(_effects_);
}

ASpell &ASpell::operator=(ASpell const &src)
{
    setName(src.getName());
    setEffects(src.getEffects());
    return(*this);
}

void ASpell::launch(ATarget const &src) const 
{
    src.getHitBySpell(*this);
}


#include"ATarget.hpp"

ATarget::ATarget()
{
}

ATarget::ATarget(std::string const &type): _type_(type)
{
}

ATarget::ATarget(ATarget const &src)
{
    *this = src;
}

ATarget::~ATarget()
{}

void ATarget::setType(std::string const &name)
{
    _type_ = name;
}

std::string const &ATarget::getType() const 
{
    return(_type_);
}

ATarget &ATarget::operator=(ATarget const &src)
{
    setType(src.getType());
    return(*this);
}

void ATarget::getHitBySpell(ASpell const &src) const
{
    std::cout << _type_ << " has been " << src.getEffects() << "!\n";
}

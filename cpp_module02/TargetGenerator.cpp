#include"TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{
}


TargetGenerator::TargetGenerator(TargetGenerator const &src)
{
    *this = src;
}

TargetGenerator::~TargetGenerator()
{
    // std::vector<ATarget*>::iterator ii = _targ_.end();
    // for (std::vector<ATarget*>::iterator i = _targ_.begin(); i != ii; i++)
    // {
    //     delete (*i);
    // }
    // _targ_.clear();

}

TargetGenerator &TargetGenerator::operator=(TargetGenerator const &src)
{
    _targ_ = src._targ_;
    return(*this);
}

void TargetGenerator::learnTargetType(ATarget *src)
{
    if (src)
    {
        std::vector<ATarget*>::iterator ii = _targ_.end();
        for (std::vector<ATarget*>::iterator i = _targ_.begin(); i != ii; i++)
        {
            if ((*i)->getType() == src->getType())
                return ;
        }
        _targ_.push_back(src);
    }
    
}
void TargetGenerator::forgetTargetType(std::string const &name)
{
    std::vector<ATarget*>::iterator ii = _targ_.end();
    for (std::vector<ATarget*>::iterator i = _targ_.begin(); i != ii; i++)
    {
        if ((*i)->getType() == name)
        {
            delete (*i);
            i = _targ_.erase(i);
        }
    }
}
ATarget *TargetGenerator::createTarget(std::string const &name) //////
{
    std::vector<ATarget*>::iterator ii = _targ_.end();
    for (std::vector<ATarget*>::iterator i = _targ_.begin(); i != ii; i++)
    {
        if ((*i)->getType() == name)
        {
            return(*i)->clone();
        }
    }
    return (NULL);
}




// int main()
// {
//   TargetGenerator richard("Richard", "the Titled");

//   Dummy bob;
//   Fwoosh* fwoosh = new Fwoosh();

//   richard.learnSpell(fwoosh);

//   richard.introduce();
//   richard.launchSpell("Fwoosh", bob);

//   richard.forgetSpell("Fwoosh");
//   richard.launchSpell("Fwoosh", bob);
// }
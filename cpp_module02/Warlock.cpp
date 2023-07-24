#include"Warlock.hpp"

Warlock::Warlock()
{
}

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
    _book_.learnSpell(src);
}
void Warlock::forgetSpell(std::string name)
{
    _book_.forgetSpell(name);
}
void Warlock::launchSpell(std::string name, ATarget const &src) //// 
{
    if (_book_.createSpell(name))
    {
        _book_.createSpell(name)->launch(src);
    }
}



// int main()
// {
//   Warlock richard("Richard", "foo");
//   richard.setTitle("Hello, I'm Richard the Warlock!");
//   BrickWall model1;

//   Polymorph* polymorph = new Polymorph();
//   TargetGenerator tarGen;

//   tarGen.learnTargetType(&model1);
//   richard.learnSpell(polymorph);

//   Fireball* fireball = new Fireball();

//   richard.learnSpell(fireball);

//   ATarget* wall = tarGen.createTarget("Inconspicuous Red-brick Wall");

//   richard.introduce();
//   richard.launchSpell("Polymorph", *wall);
//   richard.launchSpell("Fireball", *wall);
// }
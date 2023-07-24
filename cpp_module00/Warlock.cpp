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

// int main()
// {
//     Warlock const richard("Richard", "Mistress of Magma");
//   richard.introduce();
//   std::cout << richard.getName() << " - " << richard.getTitle() << std::endl;

//   Warlock* jack = new Warlock("Jack", "the Long");
//   jack->introduce();
//   jack->setTitle("the Mighty");
//   jack->introduce();

//   delete jack;

//   return (0);  
// }

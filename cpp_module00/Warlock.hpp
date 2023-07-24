#ifndef Warlock_hpp
# define Warlock_hpp
#include<iostream>


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
    private:
        Warlock &operator=(Warlock const &src); //
        Warlock(Warlock const &src);
        Warlock();
        std::string _name_;
        std::string _title_;
};


#endif

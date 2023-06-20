#include <iostream>
#include <string>

class Singleton
{
public:
    Singleton(const Singleton &) = delete;
    Singleton &operator=(const Singleton &) = delete;

    static Singleton *instance()
    {
        if (!instance_)
        {
            instance_ = new Singleton();
        }
        return instance_;
    }

private:
    Singleton() 
    { 
        std::cout << "Singleton" << std::endl; 
    }
    static Singleton *instance_;
};

Singleton *Singleton::instance_ = nullptr;

int main(int argc, char *argv[])
{
    Singleton *singleton = Singleton::instance();
}
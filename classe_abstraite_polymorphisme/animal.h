#ifndef ANIMAL_H
#define ANIMAL_H
#include <QLabel>

class animal
{
protected:
    QLabel *ptrUI;

public:
    animal();
    void init();
    void avancer();
};

///

class tortue : public animal
{
private:
    int vitesse = 1;
public:
    tortue(String *label);
    void avancer();
};

///

class lievre : public animal
{
private:
    int vitesse = 4;

public:
    lievre(String *label);
    void avancer();
};
#endif // ANIMAL_H

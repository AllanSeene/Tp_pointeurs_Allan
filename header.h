#ifndef Fct 
#define Fct

struct Menu
{
    const char *option;
};
struct Application
{
    const char *nom;
    struct Menu *menus;
    int nb_menus;
};


void displayMenu(const Application *app);
#endif
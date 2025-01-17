#include <stdio.h>
#include <stdlib.h>
#include "header.h"
int main()
{
struct Menu photoMenus[]={"Regarder une photo", "Prendre une photo"};
struct Application photoApp;
photoApp.nb_menus=2;
photoApp.nom="--Photos--";
photoApp.menus= photoMenus;
  return 0;
}
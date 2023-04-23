//#include <iostream>
//#include <array>
//#include <map>
//
//using namespace std;
//
//// Иерархия классов игровых персонажей
//class Warrior
//{
//public:
//  virtual void info() = 0;     
//  virtual ~Warrior() {}
//};
//  
//class Infantryman: public Warrior
//{
//public:
//  void info()
//  { 
//    cout << "Infantryman" << endl; 
//  };
//};
//  
//class Archer: public Warrior
//{
//public:
//  void info()
//  { 
//    cout << "Archer" << endl; 
//  };     
//};
//  
//class Horseman: public Warrior
//{
//public:    
//  void info()
//  { 
//    cout << "Horseman" << endl; 
//  };
//};
//
//// Фабрики объектов
//class Factory
//{
//public:    
//  virtual Warrior* createWarrior() = 0;
//  virtual ~Factory() {}
//};
// 
//template< typename T >
//class TFactory: public Factory
//{
//public:    
//  Warrior * createWarrior()
//  { 
//    return new T; 
//  }
//};
//
//enum WarriorClass
//{
//  INFANTRYMAN,
//  ARCHER,
//  HORSEMAN
//};
//
//std::map< WarriorClass, Factory * > factrys
//{
//  { INFANTRYMAN, new TFactory< Infantryman > },
//  { ARCHER,      new TFactory< Archer >      },
//  { HORSEMAN,    new TFactory< Horseman >    }
//};
//
//Warrior * createWarrior( WarriorClass warrior )
//{
//  return factrys[ warrior ]->createWarrior();
//}
//

#include "Back.h"

using MyList = TypeList< bool, char, short, int, double >;

int main()
{
  Back< MyList >::Type t;
  return 0;
}
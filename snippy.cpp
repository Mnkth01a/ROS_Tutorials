/*
Just a little snippy program to test out using code snippets.

The best way to learn is to put to test what you're studying.
*/

/*
It'd be really nice to setup a template to automatically include core libraries

<#include> </some_stuff.filename>

*/

#include <iostream>
#include <string>

using namespace std;

namespace _nag
{

   class snippy
   {
   private:
      /* data */
      unsigned char abc = 0b11111111;
      bool liar = true;
      u_char bit_flags = 0xffff;


   public:
      snippy(/* args */);
      snippy(int n, char a);
      ~snippy();
   };

   snippy::snippy(/* args */)
   {
      // TODO > Add some stuff for the constructor to do.
      // I hate it when I forget how to simply print to the console.  It's embarassing.
      std::cout << "Hello, from Robot_Simulation_Control!\n";

      string firstname;
      cout << "What's your name? ";
      cin >> firstname;

      string lastname;
      cout << "Hello, " << firstname << " what's your last name? ";
      cin >> lastname;

      cout << "First name length: " << firstname.length() << "Last name size: " << lastname.size();
   }

   snippy::snippy(int n, char a)
   {
      // This is an overloaded construct
   }

   snippy::~snippy()
   {
   }

} // namespace _nag
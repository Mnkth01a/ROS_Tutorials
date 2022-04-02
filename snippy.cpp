/* 
Just a little snippy program to test out using code snippets.

The best way to learn is to put to test what you're studying.
*/

/*
It'd be really nice to setup a template to automatically include core libraries

<#include> </some_stuff.filename>

*/

#include <iostream>

using namespace std;

namespace _nag
{

   class snippy
   {
   private:
      /* data */
      struct _snippy
      {
         /* data */
         int jhop = 1;
         bool liar = 'true';
         char byte = 0xb01101001;
      };
      
   public:
      snippy(/* args */);
      ~snippy();
   };

   snippy::snippy(/* args */)
   {
      // TODO > Add some stuff for the constructor to do.
      // I hate it when I forget how to simply print to the console.  It's embarassing.
   
      
   }

   snippy::~snippy()
   {
   }

} // namespace _nag
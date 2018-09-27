#include <iostream>
#include <string>
#include <sstream>// Include the library that will allow you to convert from string to integer


int main() 
{

  /*-------------------------------
  PART 1 - Reading multiple integers
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 1         =" << std::endl;
  std::cout <<              "=========================" << std::endl;
  
  int n1, n2, n3, ans=0; // variable declaration
  std::cout << "Enter Three Integer Numbers : ";  // Ask the user for 3 integers as input
  std::cin >> n1 >> n2 >> n3; // The user should enter all integers on the same line, pressing enter only once

  ans=n1*n2*n3;// Multiply the three integers
  
  std::cout << "\n The answer is... " <<std::endl << n1 <<" * " << n2 << " * " << n3 << " = " << ans << std::endl;// Output the result of the multiplication




  /*-------------------------------
  PART 2 - Reading strings
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 2         =" << std::endl;
  std::cout <<              "=========================" << std::endl;

  std::string s1, s2, s3; //variable declaration
    // Ask the user for three strings and output a haiku poem
  std::cout << "Enter The first line of Haiku Poem : " <<std::endl;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //ignoring execution skipping
  getline(std::cin, s1);

  std::cout << "Enter The second line of Haiku Poem : " <<std::endl;
  getline(std::cin, s2);

  std::cout << "Enter The Third line of Haiku Poem : " <<std::endl;
  getline(std::cin, s3);

  std::cout<<"\n\n The Haiku Poem is... \n" <<std::endl;
  std::cout << s1 << std::endl << s2 << std::endl << s3 << std::endl;
  // http://examples.yourdictionary.com/examples-of-haiku-poems.html





  /*-------------------------------
  PART 3 - Converting strings
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 3         =" << std::endl;
  std::cout <<              "=========================" << std::endl;

  std::string myNumber = "1234"; // Convert this string to an integer 
  int snumber = 0;

  std::stringstream(myNumber) >> snumber; // string to integer convertion
  
 
  std::cout << snumber <<" :is an integer \n\n"; //Insert the integer before the text of this output

  return 0;
}
#include <iostream>
#include "perceptron.hpp"
#include <png++/png.hpp>

int main (int argc, char **argv)
{
   png::image <png::rgb_pixel> kep (argv[1]);
   
   int size = kep.get_height()*kep.get_width();
   
   Perceptron* p = new Perceptron(3, size, 256, 1);
   
   double* image = new double[size];
   
   for (int i = 0; i < kep.get_width(); ++i)
      for (int j = 0; j < kep.get_height(); ++j)  
           
          image[i*kep.get_width()+j] = kep[i][j].red;
       
   double value = (*p)(image);
   
   std::cout << value << std::endl;
   
   delete p;
   
   delete [] image;
}

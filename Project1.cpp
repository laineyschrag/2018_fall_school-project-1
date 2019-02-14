//Lainey Schrag

#include <iostream>
#include <string>
using namespace std;
#include "Movie.h"

int main()
{

   cout << endl << "TESTING MOVIE CLASS:";

   Movie test_movie_1; //First movie object
   test_movie_1.addRating(1);
   test_movie_1.addRating(1);
   test_movie_1.addRating(5);
   test_movie_1.addRating(3);
   test_movie_1.addRating(4);
   test_movie_1.set_movie_tomato(65);

   Movie test_movie_2; //Second movie object
   test_movie_2.addRating(2);
   test_movie_2.addRating(3);
   test_movie_2.addRating(4);
   test_movie_2.addRating(3);
   test_movie_2.addRating(1);
   test_movie_2.set_movie_tomato(57);

   Movie test_movie_3; //Third movie object
   test_movie_3.addRating(5);
   test_movie_3.addRating(5);
   test_movie_3.addRating(5);
   test_movie_3.addRating(4);
   test_movie_3.addRating(4);
   test_movie_3.set_movie_tomato(92);

   cout << endl << "Movie 1: ";
   cout << endl << "--Movie Name: " << test_movie_1.get_movie_name();
   cout << endl << "--MPAA Rating: " << test_movie_1.get_movie_MPAA();
   cout << endl << "--Rotten Tomatoes Rating: " << test_movie_1.get_movie_tomato();
   cout << endl << "--Certified: " << test_movie_1.tomatometer();
   cout << endl << "--Average Viewer Rating: " << test_movie_1.getAverage();

   cout << endl << "Movie 2: ";
   cout << endl << "--Movie Name: " << test_movie_2.get_movie_name();
   cout << endl << "--MPAA Rating: " << test_movie_2.get_movie_MPAA();
   cout << endl << "--Rotten Tomatoes Rating: " << test_movie_2.get_movie_tomato();
   cout << endl << "--Certified: " << test_movie_2.tomatometer();
   cout << endl << "--Average Viewer Rating: " << test_movie_2.getAverage();

   cout << endl << "Movie 3: ";
   cout << endl << "--Movie Name: " << test_movie_3.get_movie_name();
   cout << endl << "--MPAA Rating: " << test_movie_3.get_movie_MPAA();
   cout << endl << "--Rotten Tomatoes Rating: " << test_movie_3.get_movie_tomato();
   cout << endl << "--Certified: " << test_movie_3.tomatometer();
   cout << endl << "--Average Viewer Rating: " << test_movie_3.getAverage() << endl;
   
   return(0);
}
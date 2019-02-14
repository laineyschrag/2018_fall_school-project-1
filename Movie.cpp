//Lainey Schrag

#include "Movie.h"
#include <iostream>
#include <string>
using namespace std;

Movie::Movie()
{
    string m_movie_name;
    string m_movie_MPAA;

    cout << endl << "Enter the movie's name: ";
    do
    {
        getline(cin, m_movie_name); //user sets movie's name
        if(cin.fail())
        {
            cout << endl << "Please enter a valid name.";
            cout << endl << "Enter the movie's name: "; 
        }
    }while(cin.fail());

    cout << endl << "Enter the movie's MPAA rating: ";
    do
    {
        getline(cin, m_movie_MPAA); //user sets movie's MPAA rating
        if(cin.fail())
        {
            cout << endl << "Movies must be rated either G, PG, PG-13, or R";
            cout << endl << "Enter the movie's MPAA rating: "; 
        }
    }while(cin.fail());

    //all other variables are set to 0
    movie_name = m_movie_name;
    movie_MPAA = m_movie_MPAA;
    movie_rating_count = 0;
    movie_tomato = 0;
    movie_score_1 = 0;
    movie_score_2 = 0;
    movie_score_3 = 0;
    movie_score_4 = 0;
    movie_score_5 = 0;
}

string Movie::get_movie_name()
{
    return movie_name;
}

string Movie::get_movie_MPAA()
{
    return movie_MPAA;
}

int Movie::get_movie_tomato()
{
    return movie_tomato;
}

int Movie::get_movie_rating_count()
{
    return movie_rating_count;
}

int Movie::get_movie_score_1()
{
    return movie_score_1;
}

int Movie::get_movie_score_2()
{
    return movie_score_2;
}

int Movie::get_movie_score_3()
{
    return movie_score_3;
}

int Movie::get_movie_score_4()
{
    return movie_score_4;
}

int Movie::get_movie_score_5()
{
    return movie_score_5;
}

void Movie::addRating(int rating)
{
    if(rating > 0 && rating < 6) //checks that score is between 1 and 5
    {
        if(rating == 1)
        {
            set_movie_score_1(); 
        }
        if(rating == 2)
        {
            set_movie_score_2();
        }
        if(rating == 3)
        {
            set_movie_score_3();
        }
        if(rating == 4)
        {
            set_movie_score_4();
        }
        if(rating == 5)
        {
            set_movie_score_5();
        }
    }
    else
    {
        cout << endl << "ERROR: Rating must be between 1 and 5";
    }
}

double Movie::getAverage()
{
    if (movie_rating_count == 0)
    {
        return 0;
    }
    else
    {
        double * arr = new double[movie_rating_count]; //array for storing all viewer scores
        for(int i = 0; i < movie_score_1; i++) //adds scores of 1 to array
        {
            arr[i] = 1;
        }
        int temp = movie_score_1;
        for(int i = 0; i < movie_score_2; i++) //adds scores of 2 to array
        {
            arr[i+temp] = 2;
        }
        temp = movie_score_1 + movie_score_2;
        for(int i = 0; i < movie_score_3; i++) //adds scores of 3 to array
        {
            arr[i+temp] = 3;
        }
        temp = movie_score_1 + movie_score_2 + movie_score_3;
        for(int i = 0; i < movie_score_4; i++) //adds scores of 4 to array
        {
            arr[i+temp] = 4;
        }
        temp = movie_score_1 + movie_score_2 + movie_score_3 + movie_score_4;
        for(int i = 0; i < movie_score_5; i++) //adds scores of 5 to array
        {
            arr[i+temp] = 5;
        }

        double sum = 0;
        for(int i = 0; i < movie_rating_count; i++) //calculates the sum of all values in array
        {
            sum = sum + arr[i];
        }

        double average = 0;
        average = sum/movie_rating_count; //finds average by dividing sum of array by number of ratings
    
        return average;
    }
}

std::string Movie::tomatometer()
{
    if (get_movie_tomato() < 60) //returns "Rotten" if score is less than 60
    {
        return ("Rotten");
    }
    else //returns "Fresh" if score is 60 or greater
    {
        return ("Fresh");
    }
}

void Movie::set_movie_name(string m_movie_name)
{
    movie_name = m_movie_name;
}

void Movie::set_movie_MPAA(string m_movie_MPAA)
{
    movie_MPAA = m_movie_MPAA;
}

void Movie::set_movie_tomato(int m_movie_tomato)
{
    movie_tomato = m_movie_tomato;
}

void Movie::set_movie_rating_count(int m_movie_rating_count)
{
    movie_rating_count = m_movie_rating_count;
    movie_rating_count = movie_rating_count + 1;
}

void Movie::set_movie_score_1()
{
    movie_score_1 = movie_score_1 + 1;
    movie_rating_count = movie_rating_count + 1;
}

void Movie::set_movie_score_2()
{
    movie_score_2 = movie_score_2 + 1;
    movie_rating_count = movie_rating_count + 1;
}

void Movie::set_movie_score_3()
{
    movie_score_3 = movie_score_3 + 1;
    movie_rating_count = movie_rating_count + 1;
}

void Movie::set_movie_score_4()
{
    movie_score_4 = movie_score_4 + 1;
    movie_rating_count = movie_rating_count + 1;
}

void Movie::set_movie_score_5()
{
    movie_score_5 = movie_score_5 + 1;
    movie_rating_count = movie_rating_count + 1;
}
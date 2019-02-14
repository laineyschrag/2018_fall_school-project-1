//Lainey Schrag

#ifndef MOVIE_H
#define MOVIE_H
#include <iostream>
#include <string>
using namespace std;

class Movie 
{

public:
    Movie();
    
    //**returns name of movie
    //**@param: none
    //**@return: string movie_name
    string get_movie_name();

    //**returns MPAA rating of movie
    //**@param: none
    //**@return: string movie_MPAA
    string get_movie_MPAA();

    //**returns Rotten Tomato rating of movie
    //**@param: none
    //**@return: int movie_tomato
    int get_movie_tomato();

    //**returns number of people who have rated movie
    //**@param: none
    //**@return: int movie_rating_count
    int get_movie_rating_count();

    //**returns number of people who have rated movie as 1
    //**@param: none
    //**@return: int movie_score_1
    int get_movie_score_1();

    //**returns number of people who have rated movie as 2
    //**@param: none
    //**@return: int movie_score_2
    int get_movie_score_2();

    //**returns number of people who have rated movie as 3
    //**@param: none
    //**@return: int movie_score_3
    int get_movie_score_3();

    //**returns number of people who have rated movie as 4
    //**@param: none
    //**@return: int movie_score_4
    int get_movie_score_4();

    //**returns number of people who have rated movie as 5
    //**@param: none
    //**@return: int movie_score_5
    int get_movie_score_5();

    //**adds rating to movie between numbers 1-5
    //**@param: int rating
    //**@return: none
    void addRating(int rating);

    //**calculates average viewer rating of movie
    //**@param: none
    //**@return: double average
    double getAverage();

    //**returns returns whether the movie is fresh or rotten
    //**@param: none
    //**@return: string
    string tomatometer();

    //**sets movie's Rotten Tomato score
    //**@param: int m_movie_tomato
    //**@return: none
    void set_movie_tomato(int m_movies_tomato);

private:
    //**returns sets movie name
    //**@param: string m_movie_name
    //**@return: none
    void set_movie_name(string m_movie_name);

    //**returns sets movie's MPAA rating
    //**@param: string m_movie_MPAA
    //**@return: none
    void set_movie_MPAA(string m_movie_MPAA);

    //**returns sets number of view ratings for movie
    //**@param: string int m_movie_rating_count
    //**@return: none
    void set_movie_rating_count(int m_movie_rating_count);

    //**increments number of people who have rated the movie by 1 
    //**@param: none
    //**@return: none
    void set_movie_score_1();

    //**increments number of people who have rated the movie by 1 
    //**@param: none
    //**@return: none
    void set_movie_score_2();

    //**increments number of people who have rated the movie by 1 
    //**@param: none
    //**@return: none
    void set_movie_score_3();

    //**increments number of people who have rated the movie by 1 
    //**@param: none
    //**@return: none
    void set_movie_score_4();

    //**increments number of people who have rated the movie by 1 
    //**@param: none
    //**@return: none
    void set_movie_score_5();

    //string storing movie's name
    string movie_name;

    //string storing movie's MPAA rating
    string movie_MPAA;

    //integer storing number of viewing ratings
    int movie_rating_count;

    //interger storing Rotten Tomato score
    int movie_tomato;

    //int storing number of people who rated movie as 1
    int movie_score_1;

    //int storing number of people who rated movie as 2
    int movie_score_2;

    //int storing number of people who rated movie as 3
    int movie_score_3;

    //int storing number of people who rated movie as 4
    int movie_score_4;

    //int storing number of people who rated movie as 5
    int movie_score_5;

};
#endif
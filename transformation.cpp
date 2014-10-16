/*
 * transformation.cpp
 *
 *  Created on: Sep 30, 2014
 *      Author: tonic
 */

    #include "transformation.h"
    #include <iostream>
    #include <fstream>

#include <string>
#include <cstdio>
#include <vector>

using namespace std;

/// Setting parallels on note and color

    QStringList	Transformation::setparallelnotes_and_colors()
    {

        vector<int> notes_v;
        notes_v = Transformation::getallNotesf_from_file();

       for(int i=0;i<(int)notes_v.size();i++)
       {

        switch (notes_v.at(i))

        {
        case 1:
            color_id = "#00FF00";
            break;
        case 2:
            color_id = "#00FA9A";
            break;
        case 3:
            color_id = "#1E90FF";
            break;
        case 4:
            color_id = "#0000FF";
            break;
        case 5:
            color_id = "#8A2BE2";
            break;
        case 6:
            color_id = "#4B0082";
            break;
        case 7:
            color_id = "#800080";
            break;
        case 8:
            color_id = "#FF0000";
            break;
        case 9:
            color_id = "#FF4500";
            break;
        case 10:
            color_id = "#FF8C00";
            break;
        case 11:
            color_id = "#FFFF00";
            break;
        case 12:
            color_id = "#ADFF2F";
            break;
        default:
            color_id = "ups";
        }
      allcolor.append(color_id);
      }

        return allcolor;
    }

/// Get notes from file:
    vector<int> 	Transformation::getallNotesf_from_file( )
    {

        ifstream file("/home/tonic/qt_project/PaintingMusic/first_test.txt");
        if(!file)
        {
            cerr<<("\n Can't open file ")<<endl;
            exit(1);
        }
        int a;
        while(!file.eof())
        {
            if(!file.good())
            {
                cerr<<endl<<"something wrong with "<< endl;
                exit (2);
            }
            file>>a; the_vector.push_back(a);

        }

    the_vector.erase(the_vector.end()-1);


    return the_vector;
    }

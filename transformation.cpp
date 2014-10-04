/*
 * transformation.cpp
 *
 *  Created on: Sep 30, 2014
 *      Author: tonic
 */

    #include "transformation.h"
    #include <iostream>
    #include <fstream>


// Setting parallels on note and color
    void	Transformation::setparallelnotes_and_colors(string *colores_id)
    {

        for(int i=1;i<=Transformation::getsizenotes(allnotes);i++)
        {
            allcolor[i-1] = Transformation::set_one_note_to_color(i);

        }

    }

/// one note translation to color;
    string 	Transformation::set_one_note_to_color(int note_id)
    {
        switch (Transformation::getonenote(note_id))

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

        return color_id;
    }

// Getting one note;
    int 	Transformation::getonenote(int note_id)
    {
        /// add get array .. from file.
        return Transformation::allnotes[note_id-1];
    }

// Get Size of array;
    int 	Transformation::getsizenotes(int *Notes)
    {
        SizeNotes = sizeof( Notes );
        return SizeNotes;
    }

// Get notes from file:
    void 	Transformation::getallNotesf_from_file( int *allnotes_tmp)
    {
        ifstream F;
        F.open("/home/tonic/workspace/cmus/notes_input/first_test.txt", ios::in);
        if (F) 	{
        int k=0;
        while (!F.eof())
        {
            F>>allnotes_tmp[k]; allnotes[k] = allnotes_tmp[k];
            k++;
        }
                } else {cout<<" File does not exist! "<<endl;}
    }

// Get one color:
    string 	Transformation::getonecolor(int id_color)
    {
        return Transformation::allcolor[id_color-1];
    }

/*
 * transformation.h
 *
 *  Created on: Sep 30, 2014
 *      Author: tonic
 */

#ifndef TRANSFORMATION_H_
#define TRANSFORMATION_H_

#endif /* TRANSFORMATION_H_ */

#pragma once // Defence from double includes
#include <string>

using namespace std;

class Transformation {

    public:

/// notes
    // Setting parallels on notes with colors;
            void 	setparallelnotes_and_colors(string *);

    // Return color_id from note_id;
            string 	set_one_note_to_color(int);

    // Getting one note from array with using note_id;
            int  	getonenote(int);

    // // Get Size of array;
            int 	getsizenotes (int *);

    // Getting all notes from file;
            void 	getallNotesf_from_file(int *);

    // Get one color from array:
            string  getonecolor(int);


    private:

        string color_id;
        string allcolor[100];
        int SizeNotes;
        int allnotes[100];






};

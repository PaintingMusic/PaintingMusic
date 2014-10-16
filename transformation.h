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
#include <QStringList>

using namespace std;

class Transformation {

    public:

/// notes
    // Setting parallels on notes with colors;
            QStringList 	setparallelnotes_and_colors();

    // Getting all notes from file;
            vector <int> 	getallNotesf_from_file();

    private:

        QString color_id;
        QStringList allcolor;
        int SizeNotes;
        int *allnotes;
        vector<int> the_vector;






};

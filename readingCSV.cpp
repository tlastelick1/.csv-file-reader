//parsing notes
// for a .csv file formatted like

2020-07-10 00:55:12,55.48,27.1
2021-01-11 10:33:33,9.5,100

// to read into a structure of strings
// create a structure of the amount of strings
struct holders
{
//values to hold 
string s0;
string s1;
string s2;
string s3;
};

// create a vector to hold the structures
vector <holders> vec;

// open the file
fstream file;
file.open("test.csv");

// while we haven't reached the end of the list
while (file) // or file.good() or file.eof()

//read them in using getline
// putting each row of .csv file into a structure 
// this structure should be immediately added to the vector
// where the third parameter in getline denotes where to stop reading into
// the string
// '\n' denotes go to next line
getline(file, temp.s0, ' ');
getline(file, temp.s1, ',');
getline(file, temp.s2, ',');
getline(file, temp.s3, '\n');

// convert string to a double  
    std::stod (temp.s2);
// convert string to a double
    std::stod (temp.s3);

// add line of information to the list (vec)
vec.push_back(temp);

 if( file.eof() ) break; // without this code will copy last line twice 

}// end while statement

// check the data inside of the vector

for (int i=0; i<vec.size(); i++)
    {
     cout << "Date: " << vec[i].s0  << " " << vec[i].s1 << endl; 
    cout << "Temp: " << vec[i].s2 << endl;
    cout << "Humidity: " << vec[i].s3 << endl;
    }

//////////////////////////////////////////////////////////////////////////
///  how to read a .csv file in a different format below  ///////////////
////////////////////////////////////////////////////////////////////////

//to read a .csv formatted like
2020-02-07 0:00:00	57.92	51.5
2020-02-07 1:00:00	55.76	52.3
2020-02-07 2:00:00	54.32	55.2
2020-02-07 3:00:00	53.24	57.4
2020-02-07 4:00:00	52.7	57.2

//getline is not required
// because getline is not required, variables do not have to be strings
// s2 and s3 can be defined as doubles without having to use stod::
while (file >> temp.s0 >> temp.s1 >> temp.s2 >> temp.s3)



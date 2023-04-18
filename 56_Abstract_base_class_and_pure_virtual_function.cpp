#include <iostream>
#include <cstring>

using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() = 0; // do-nothing function -- > pure virtaul function
};

class CWHVideo : public CWH
{
    float videolenght;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        videolenght = vl;
    }
    void display()
    {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars" << endl;
        cout << "Lenght of this video is : " << videolenght << " mintues" << endl;
    }
};

class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int vl) : CWH(s, r)
    {
        words = vl;
    }
    void display()
    {
        cout << "This is an amazing text tutorial with title " << title << endl;
        cout << "Ratings of this text tutorial is : " << rating << " out of 5 stars" << endl;
        cout << "Number of words in this text tutorial is  : " << words << " words" << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    title = "Django tutorial";
    vlen = 4.45;
    rating = 4.8;
    CWHVideo djvideo(title, rating, vlen);
    // djvideo.display();

    title = "Django tutorial text";
    words = 876;
    rating = 4.9;
    CWHText djText(title, rating, words);
    // djText.display();

    CWH *tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djText;
    tuts[0]->display();
    tuts[1]->display();

    return 0;
}
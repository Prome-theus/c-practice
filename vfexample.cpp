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
    virtual void display()
    {
        cout<<"heheheheh  chutiye "<<endl;
    }
}; 

class CWHvideo : public CWH
{
    float videolength;

public:
    CWHvideo(string s, float r, float vl) : CWH(s, r)
    {
        videolength = vl;
    }
    void display()
    {
        cout << "this is an amaazing video tutorial with title  : " << title << endl;
        cout << "rating of this text tutorial is : " << rating << " out of 5 stars" << endl;
        cout << "length of the video is : " << videolength<< " minutes" << endl;
    }
};

class CWHtext : public CWH
{
    int words;

public:
    CWHtext(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "this is an amaazing text tutorial with title  : " << title << endl;
        cout << "rating of this text tutorial is : " << rating << "out of 5 stars" << endl;
        cout << "no of words in this text tutorial is : " << words << "words" << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    title = "django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHvideo djvideo(title, rating, vlen);
    // djvideo.display();

    title = "django tutorial";
    words = 456;
    rating = 4.89;
    CWHtext djtext(title, rating, words);
    // djtext.display();

    CWH* tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djtext;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}
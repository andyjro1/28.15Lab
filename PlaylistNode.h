#ifndef PlaylistNode_h_
#define PlaylistNode_h_

#include <string>


class PlaylistNode {

private:
    std::string uniqueID; 
    std::string songName;
    std::string artistName;
    int songLength; 
    PlaylistNode* nextNodePtr; 

public:
    PlaylistNode();
    PlaylistNode(const std::string& id, const std::string& song, const std::string& artist, int length);

    std::string GetID() const;
    std::string GetSongName() const;
    std::string GetArtistName() const;
    int GetSongLength() const;
     PlaylistNode* GetNext() const;


    void InsertAfter(PlaylistNode* nodePtr); 
    void SetNext(PlaylistNode* nodePtr);


    void PrintPlaylistNode() const;

};



#endif



#ifndef GETCDDATABASE_H
#define GETCDDATABASE_H

#include<QString>

class GetCdDataBase
{



public:

    enum TrackField { T_begin , T_end , T_number , T_artist , T_title , T_length , T_frame_offset , T_extended_data } ;

    enum CDField { CD_info , CD_Disc_ID , CD_CDDB_category , CD_music_genre , CD_year , CD_artist , CD_title , CD_extended_data , CD_length , CD_revision } ;

    enum CDError { CD_OK , CD_No_medium_found } ;

    virtual bool testCdInterface() = 0 ;

    virtual int readData() = 0 ;

    virtual QString getFullData() = 0 ;

    virtual QString getCDData( CDField cdf ) = 0 ;

    virtual int getTrackCount() = 0 ;

    virtual bool setCurrentTrack( int track ) = 0 ;

    virtual QString getTrackData( TrackField tf ) = 0 ;
};

#endif // GETCDDATABASE_H

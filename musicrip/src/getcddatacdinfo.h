#ifndef GETCDDATACDINFO_H
#define GETCDDATACDINFO_H

#include "getcddatabase.h"

class GetCdDataCdInfo : public GetCdDataBase
{
public:
    GetCdDataCdInfo();

    bool testCdInterface() { return true ; }

    int readData() ;

    QString getFullData() ;

    QString getCDData( CDField cdf ) { return QString("") ; }

    int getTrackCount(){ return 0 ; }

    bool setCurrentTrack( int track ) { return false ; }

    QString getTrackData( TrackField tf ) { return QString("") ; }

private:

    int getError() ;

    QString p_stdout ;
    QString p_stderr ;

};

#endif // GETCDDATACDINFO_H

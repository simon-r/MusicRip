#include "getcddatacdinfo.h"
#include <QProcess>
#include <QDebug>
#include <QRegExp>


GetCdDataCdInfo::GetCdDataCdInfo()
{
}

int GetCdDataCdInfo::readData()
{

    QProcess p;

    p.start( "cd-info" );
    bool f = p.waitForFinished(-1);

    if ( f == false )
    {

    }

    p_stdout = p.readAllStandardOutput();
    p_stderr = p.readAllStandardError();

    qDebug() << p_stdout ;

    return this->getError() ;
}


QString GetCdDataCdInfo::getFullData()
{
    return p_stdout ;
}



int GetCdDataCdInfo::getError()
{

    QRegExp no_medium_found( "\\+\\+ WARN.*No medium found" ) ;


    int em = no_medium_found.indexIn( p_stdout ) ;
    if ( em != -1 )
    {
        return GetCdDataBase::CD_No_medium_found ;
    }

    return GetCdDataBase::CD_OK ;
}

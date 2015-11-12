#include "qstyleoptionprogressbar.h"
#include <QStyle>
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QStyleOption>
#include <QStyleOptionProgressBar>
#include "_cgo_export.h"

class MyQStyleOptionProgressBar: public QStyleOptionProgressBar {
public:
};

void* QStyleOptionProgressBar_NewQStyleOptionProgressBar(){
	return new QStyleOptionProgressBar();
}

void* QStyleOptionProgressBar_NewQStyleOptionProgressBar2(void* other){
	return new QStyleOptionProgressBar(*static_cast<QStyleOptionProgressBar*>(other));
}


#include "qproximityreading.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QProximityReading>
#include "_cgo_export.h"

class MyQProximityReading: public QProximityReading {
public:
};

int QProximityReading_Close(void* ptr){
	return static_cast<QProximityReading*>(ptr)->close();
}

void QProximityReading_SetClose(void* ptr, int close){
	static_cast<QProximityReading*>(ptr)->setClose(close != 0);
}


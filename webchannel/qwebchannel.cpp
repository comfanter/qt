#include "qwebchannel.h"
#include <QMetaObject>
#include <QObject>
#include <QWebChannelAbstractTransport>
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QWebChannel>
#include "_cgo_export.h"

class MyQWebChannel: public QWebChannel {
public:
void Signal_BlockUpdatesChanged(bool block){callbackQWebChannelBlockUpdatesChanged(this->objectName().toUtf8().data(), block);};
};

int QWebChannel_BlockUpdates(void* ptr){
	return static_cast<QWebChannel*>(ptr)->blockUpdates();
}

void QWebChannel_SetBlockUpdates(void* ptr, int block){
	static_cast<QWebChannel*>(ptr)->setBlockUpdates(block != 0);
}

void* QWebChannel_NewQWebChannel(void* parent){
	return new QWebChannel(static_cast<QObject*>(parent));
}

void QWebChannel_ConnectBlockUpdatesChanged(void* ptr){
	QObject::connect(static_cast<QWebChannel*>(ptr), static_cast<void (QWebChannel::*)(bool)>(&QWebChannel::blockUpdatesChanged), static_cast<MyQWebChannel*>(ptr), static_cast<void (MyQWebChannel::*)(bool)>(&MyQWebChannel::Signal_BlockUpdatesChanged));;
}

void QWebChannel_DisconnectBlockUpdatesChanged(void* ptr){
	QObject::disconnect(static_cast<QWebChannel*>(ptr), static_cast<void (QWebChannel::*)(bool)>(&QWebChannel::blockUpdatesChanged), static_cast<MyQWebChannel*>(ptr), static_cast<void (MyQWebChannel::*)(bool)>(&MyQWebChannel::Signal_BlockUpdatesChanged));;
}

void QWebChannel_ConnectTo(void* ptr, void* transport){
	QMetaObject::invokeMethod(static_cast<QWebChannel*>(ptr), "connectTo", Q_ARG(QWebChannelAbstractTransport*, static_cast<QWebChannelAbstractTransport*>(transport)));
}

void QWebChannel_DeregisterObject(void* ptr, void* object){
	static_cast<QWebChannel*>(ptr)->deregisterObject(static_cast<QObject*>(object));
}

void QWebChannel_DisconnectFrom(void* ptr, void* transport){
	QMetaObject::invokeMethod(static_cast<QWebChannel*>(ptr), "disconnectFrom", Q_ARG(QWebChannelAbstractTransport*, static_cast<QWebChannelAbstractTransport*>(transport)));
}

void QWebChannel_RegisterObject(void* ptr, char* id, void* object){
	static_cast<QWebChannel*>(ptr)->registerObject(QString(id), static_cast<QObject*>(object));
}

void QWebChannel_DestroyQWebChannel(void* ptr){
	static_cast<QWebChannel*>(ptr)->~QWebChannel();
}


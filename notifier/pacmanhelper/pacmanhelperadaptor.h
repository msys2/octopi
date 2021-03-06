/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -c PacmanHelperAdaptor -a pacmanhelperadaptor.h:pacmanhelperadaptor.cpp polkit/org.octopi.pacmanhelper.xml
 *
 * qdbusxml2cpp is Copyright (C) 2012 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef PACMANHELPERADAPTOR_H_1370179068
#define PACMANHELPERADAPTOR_H_1370179068

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;

/*
 * Adaptor class for interface org.octopi.pacmanhelper
 */
class PacmanHelperAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.octopi.pacmanhelper")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"org.octopi.pacmanhelper\">\n"
"    <method name=\"syncdb\"/>\n"
"    <signal name=\"syncdbcompleted\"/>\n"
"  </interface>\n"
        "")
public:
    PacmanHelperAdaptor(QObject *parent);
    virtual ~PacmanHelperAdaptor();

public: // PROPERTIES
public Q_SLOTS: // METHODS
    void syncdb();
Q_SIGNALS: // SIGNALS
    void syncdbcompleted();
};

#endif

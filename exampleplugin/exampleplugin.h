#ifndef EXAMPLEPLUGIN_H
#define EXAMPLEPLUGIN_H
#include "plugin.h"

#include <QVariantList>

class ExamplePlugin : public Plugin
{
    Q_OBJECT
    public:
        ExamplePlugin(QObject * parent, const QVariantList & args);
        ~ExamplePlugin();
};

#endif

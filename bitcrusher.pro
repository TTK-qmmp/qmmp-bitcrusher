include($$PWD/../../plugins.pri)

TARGET = $$PLUGINS_PREFIX/Effect/bitcrusher

HEADERS += bitcrusherplugin.h \
           effectbitcrusherfactory.h \
           settingsdialog.h

SOURCES += bitcrusherplugin.cpp \
           effectbitcrusherfactory.cpp \
           settingsdialog.cpp

FORMS += settingsdialog.ui

unix{
    target.path = $$PLUGIN_DIR/Effect
    INSTALLS += target
}

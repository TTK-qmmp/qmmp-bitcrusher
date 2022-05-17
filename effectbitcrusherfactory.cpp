#include "effectbitcrusherfactory.h"
#include "bitcrusherplugin.h"
#include "settingsdialog.h"

#include <QMessageBox>

const EffectProperties EffectBitcrusherFactory::properties() const
{
    EffectProperties properties;
    properties.name = tr("Bitcrusher Plugin");
    properties.shortName = "bitcrusher";
    properties.hasSettings = true;
    properties.hasAbout = true;
    return properties;
}

Effect *EffectBitcrusherFactory::create()
{
    return new BitcrusherPlugin();
}

void EffectBitcrusherFactory::showSettings(QWidget *parent)
{
    (new SettingsDialog(parent))->show();
}

void EffectBitcrusherFactory::showAbout(QWidget *parent)
{
     QMessageBox::about(parent, tr("About Bitcrusher Effect Plugin"),
                        tr("Qmmp Bitcrusher Effect Plugin") + "\n" +
                        tr("Written by: Greedysky <greedysky@163.com>"));
}

QString EffectBitcrusherFactory::translation() const
{
    return QString();
}

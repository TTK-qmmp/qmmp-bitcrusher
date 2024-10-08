#include "effectbitcrusherfactory.h"
#include "bitcrusherplugin.h"
#include "settingsdialog.h"

#include <QMessageBox>

#if (QMMP_VERSION_INT < 0x10700) || (0x20000 <= QMMP_VERSION_INT && QMMP_VERSION_INT < 0x20200)
const EffectProperties EffectBitcrusherFactory::properties() const
#else
EffectProperties EffectBitcrusherFactory::properties() const
#endif
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

#if (QMMP_VERSION_INT < 0x10700) || (0x20000 <= QMMP_VERSION_INT && QMMP_VERSION_INT < 0x20200)
void EffectBitcrusherFactory::showSettings(QWidget *parent)
{
    (new SettingsDialog(parent))->show();
}
#else
QDialog *EffectBitcrusherFactory::createSettings(QWidget *parent)
{
    return new SettingsDialog(parent);
}
#endif

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

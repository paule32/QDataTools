#ifndef TOOLCOLLECTIONPLUGIN_H
#define TOOLCOLLECTIONPLUGIN_H

#include "toolcollection_global.h"

#include <extensionsystem/iplugin.h>

namespace ToolCollection {
namespace Internal {

class ToolCollectionPlugin : public ExtensionSystem::IPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QtCreatorPlugin" FILE "ToolCollection.json")

public:
    ToolCollectionPlugin();
    ~ToolCollectionPlugin() override;

    bool initialize(const QStringList &arguments, QString *errorString) override;
    void extensionsInitialized() override;
    ShutdownFlag aboutToShutdown() override;

private:
    void triggerAction();
};

} // namespace Internal
} // namespace ToolCollection

#endif // TOOLCOLLECTIONPLUGIN_H

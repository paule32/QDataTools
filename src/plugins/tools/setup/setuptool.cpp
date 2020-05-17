// --------------------------------------------------------------------------------
// MIT License
//
// Copyright (c) 2020 Jens Kallup
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
// --------------------------------------------------------------------------------
#include "setuptool.h"

#include <coreplugin/icore.h>
#include <coreplugin/icontext.h>
#include <coreplugin/imode.h>

#include <coreplugin/actionmanager/actionmanager.h>
#include <coreplugin/actionmanager/command.h>
#include <coreplugin/actionmanager/actioncontainer.h>

#include <coreplugin/coreconstants.h>
#include <coreplugin/modemanager.h>
#include <coreplugin/id.h>

#include <QAction>
#include <QMessageBox>
#include <QMainWindow>
#include <QMenu>

#include "setuptool_mode.h"
#include "ui_setuptool_mode.h"


namespace SetupTool {
namespace Internal {

class LinuxSetupTool_Mode : public Core::IMode
{
public:
    LinuxSetupTool_Mode() {
        if (m_mode != nullptr) delete
        m_mode ;
        m_mode = new SetupTool_Mode;

        setWidget(m_mode);
        setContext(Core::Context("SetupTool.MainView"));
        setDisplayName("Setup Tool");
        setIcon(QIcon(":/img/disk.png"));
        setPriority(0);
        setId("SetupTool.SetupTool_Mode");
    }
private:
    SetupTool_Mode * m_mode = nullptr;
};

SetupTool_Plugin::SetupTool_Plugin()
{
    // Create your members
}

SetupTool_Plugin::~SetupTool_Plugin()
{
    // Unregister objects from the plugin manager's object pool
    // Delete members

    delete m_mode;
}

bool SetupTool_Plugin::initialize(const QStringList &arguments, QString *errorString)
{
    // Register objects in the plugin manager's object pool
    // Load settings
    // Add actions to menus
    // Connect to other plugins' signals
    // In the initialize function, a plugin can be sure that the plugins it
    // depends on have initialized their members.

    Q_UNUSED(arguments)
    Q_UNUSED(errorString)

    m_mode = new LinuxSetupTool_Mode;
    return true;
}

void SetupTool_Plugin::extensionsInitialized()
{
    // Retrieve objects from the plugin manager's object pool
    // In the extensionsInitialized function, a plugin can be sure that all
    // plugins that depend on it are completely initialized.
}

ExtensionSystem::IPlugin::ShutdownFlag SetupTool_Plugin::aboutToShutdown()
{
    // Save settings
    // Disconnect from signals that are not needed during shutdown
    // Hide UI (if you add UI that is not in the main window directly)
    return SynchronousShutdown;
}

} // namespace Internal
} // namespace SetupTool

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
#include "sqltool.h"
#include "sqltool_constants.h"

#include <QAction>
#include <QMessageBox>
#include <QMainWindow>
#include <QMenu>

#include "sqltool_mode.h"
#include "ui_sqltool_mode.h"

namespace LinuxSQLTool {
namespace Internal {

class LinuxSQLToolMode : public Core::IMode
{
public:
    LinuxSQLToolMode() {
        if (m_mode != nullptr) delete
        m_mode ;
        m_mode = new MySQLToolMode;

        setWidget(m_mode);
        setContext(Core::Context("LinuxSQLTool.MainView"));
        setDisplayName("SQL - Tool");
        setIcon(QIcon(":/img/icon-folder-setting.png"));
        setPriority(0);
        setId("LinuxSQLTool.LinuxSQLToolMode");
    }
private:
    MySQLToolMode * m_mode = nullptr;
};

LinuxSQLToolPlugin::LinuxSQLToolPlugin()
{
    // Create your members
}

LinuxSQLToolPlugin::~LinuxSQLToolPlugin()
{
    // Unregister objects from the plugin manager's object pool
    // Delete members

    delete m_sqlmode;
}

bool LinuxSQLToolPlugin::initialize(const QStringList &arguments, QString *errorString)
{
    // Register objects in the plugin manager's object pool
    // Load settings
    // Add actions to menus
    // Connect to other plugins' signals
    // In the initialize function, a plugin can be sure that the plugins it
    // depends on have initialized their members.

    Q_UNUSED(arguments)
    Q_UNUSED(errorString)

    m_sqlmode = new LinuxSQLToolMode;
    return true;
}

void LinuxSQLToolPlugin::extensionsInitialized()
{
    // Retrieve objects from the plugin manager's object pool
    // In the extensionsInitialized function, a plugin can be sure that all
    // plugins that depend on it are completely initialized.
}

ExtensionSystem::IPlugin::ShutdownFlag LinuxSQLToolPlugin::aboutToShutdown()
{
    // Save settings
    // Disconnect from signals that are not needed during shutdown
    // Hide UI (if you add UI that is not in the main window directly)
    return SynchronousShutdown;
}

} // namespace Internal
} // namespace LinuxSQLTool

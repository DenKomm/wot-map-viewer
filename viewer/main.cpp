/*
 * WoT map viewer
 *
 * author: Juho Peltonen
 * license: GPL3, see gpl-3.0.txt included in the package
 */

#include <QtGui/QGuiApplication>
#include <QtQml>
#include "qtquick2applicationviewer.h"

#include "minimap.h"
#include <QTimer>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QtQuick2ApplicationViewer viewer;
    qmlRegisterType<Minimap>("mapviewer.wot", 1, 0, "Minimap");
    viewer.setMainQmlFile(QStringLiteral("qml/viewer/main.qml"));
    viewer.showExpanded();


    return app.exec();
}

#pragma once

#include <QMainWindow>
#include "../../../lib/settings.h"

namespace QSchematic {
    class Editor;
    class Scene;
    class View;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    Q_DISABLE_COPY(MainWindow)

public:
    MainWindow(QWidget* parent = nullptr);
    ~MainWindow() override = default;

    bool save() const;
    bool load();
    void createActions();
    void demo();

private:
    void settingsChanged();

    QSchematic::Editor* _schematicEditor;
    QSchematic::Scene* _scene;
    QSchematic::View* _view;
    QSchematic::Settings _settings;
    QAction* _actionOpen;
    QAction* _actionSave;
    QAction* _actionModeNormal;
    QAction* _actionModeWire;
    QAction* _actionShowGrid;
    QAction* _actionRouteStraightAngles;
    QAction* _actionPreserveStraightAngles;
    QAction* _actionDebugMode;
};

#ifndef MAINWINDOWVIDEO_H
#define MAINWINDOWVIDEO_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QFileDialog>
#include <QProgressBar>
#include <QSlider>

namespace Ui {
class MainWindowvideo;
}

class MainWindowvideo : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindowvideo(QWidget *parent = nullptr);
    ~MainWindowvideo();

private slots:
    void on_actionOpen_triggered();

    void on_actionPlay_triggered();

    void on_actionPause_triggered();

    void on_actionStop_triggered();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindowvideo *ui;
    QMediaPlayer* player;
    QVideoWidget* vw;
    QProgressBar* bar;
    QSlider* slider;
};

#endif // MAINWINDOWVIDEO_H

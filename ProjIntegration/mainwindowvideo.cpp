#include "mainwindowvideo.h"
#include "ui_mainwindowvideo.h"

MainWindowvideo::MainWindowvideo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindowvideo)
{
    ui->setupUi(this);
    player = new QMediaPlayer(this);
    vw = new QVideoWidget(this);
    player->setVideoOutput(vw);
    this->setCentralWidget(vw);
    this->setWindowTitle("Vidéo");

    slider = new QSlider(this);
    bar = new  QProgressBar(this);

    slider->setOrientation(Qt::Horizontal);

    ui->statusbar->addPermanentWidget(slider);
    ui->statusbar->addPermanentWidget(bar);

    connect(player,&QMediaPlayer::durationChanged,slider,&QSlider::setMaximum);
    connect(player,&QMediaPlayer::positionChanged,slider,&QSlider::setValue);
     connect(slider,&QSlider::sliderMoved,player,&QMediaPlayer::setPosition);

    connect(player,&QMediaPlayer::durationChanged,bar,&QProgressBar::setMaximum);
    connect(player,&QMediaPlayer::positionChanged,bar,&QProgressBar::setValue);


}

MainWindowvideo::~MainWindowvideo()
{
    delete ui;
}

void MainWindowvideo::on_actionOpen_triggered()
{
    QString filename= QFileDialog::getOpenFileName(this,"open a file","","Video File(*.avi *.mpg *.MP4)");
    on_actionStop_triggered();
    player->setMedia(QUrl::fromLocalFile(filename));
    on_actionPlay_triggered();
}

void MainWindowvideo::on_actionPlay_triggered()
{
    player->play();
    ui->statusbar->showMessage("playing");
}

void MainWindowvideo::on_actionPause_triggered()
{
    player->pause();
    ui->statusbar->showMessage("paused ...");
}

void MainWindowvideo::on_actionStop_triggered()
{
    player->stop();
    ui->statusbar->showMessage("stoped .");
}

void MainWindowvideo::on_pushButton_clicked()
{
    player->play();

}

void MainWindowvideo::on_pushButton_2_clicked()
{
      player->pause();
}

void MainWindowvideo::on_pushButton_3_clicked()
{
      player->stop();
}

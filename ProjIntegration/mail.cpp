#include "mail.h"
#include "ui_mail.h"
#include "smtp.h"
#include "gestions.h"
mail::mail(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mail)
{
    ui->setupUi(this);
    connect(ui->sendBtn, SIGNAL(clicked()),this, SLOT(sendMail()));
    connect(ui->exitBtn, SIGNAL(clicked()),this, SLOT(close()));
    connect(ui->browseBtn, SIGNAL(clicked()), this, SLOT(browse()));
}

mail::~mail()
{
    delete ui;
}

//MAILING*********************************************************************************************************************************

void mail::browse()
{
    files.clear();

    QFileDialog dialog(this);
    dialog.setDirectory(QDir::homePath());
    dialog.setFileMode(QFileDialog::ExistingFiles);

    if (dialog.exec())
        files = dialog.selectedFiles();

    QString fileListString;
    foreach(QString file, files)
        fileListString.append( "\"" + QFileInfo(file).fileName() + "\" " );

    ui->file->setText( fileListString );
}

void mail::sendMail()
{
    Smtp* smtp = new Smtp(ui->uname->text(), ui->paswd->text(), ui->server->text(), ui->port->text().toInt(),60000);
    connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));

    if( !files.isEmpty() )
        smtp->sendMail(ui->uname->text(), ui->rcpt->text() , ui->subject->text(),ui->msg->toPlainText(), files );
    else
        smtp->sendMail(ui->uname->text(), ui->rcpt->text() , ui->subject->text(),ui->msg->toPlainText());
}

void mail::mailSent(QString status)
{
    if(status == "Message sent")
        QMessageBox::warning( this, tr( "Qt Simple SMTP client" ), tr( "Message sent!\n\n" ) );
   gestions  m;
   this->hide();
    m.setModal(true);
    m.exec();

}

void mail::on_pushButton_clicked()
{
    gestions m;
    this->hide();
    m.setModal(true);
    m.exec();
}

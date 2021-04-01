#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "evennement.h"
#include "promotion.h"
#include <QTextEdit>
#include <QFileDialog>
#include <QTextStream>
#include<QPrinter>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->le_id->setValidator(new QIntValidator(100, 999, this));
    ui->le_idpro->setValidator(new QIntValidator(100, 999, this));
    ui->tab_etudiant->setModel(E.afficher());
    ui->tab_promotion->setModel(P.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pb_ajouter_clicked()
{
  int Id_event=ui->le_id->text().toInt();
  QString Nom_event=ui->le_nom->text();
  int Date_debut=ui->le_Date_Debut->text().toInt();
  int Date_fin=ui->le_Date_Fin->text().toInt();

  Evennement E(Id_event,Nom_event,Date_debut,Date_fin);
  bool test=E.ajouter();
  QMessageBox msgBox;

  if(test)
    {  msgBox.setText("Ajout avec succes.");
      ui->tab_etudiant->setModel(E.afficher());
  }
  else
     { msgBox.setText("Echec d'ajout");}
      msgBox.exec();
}

void MainWindow::on_pb_supprimer_clicked()
{

    Evennement E1; E1.setid(ui->le_id_supp->text().toInt());
    bool test=E1.supprimer(E1.getid());
    QMessageBox msgBox;

    if(test)
       { msgBox.setText("Suppression avec succes.");
    ui->tab_etudiant->setModel(E.afficher());

    }
    else
       { msgBox.setText("Echec de suppression");}
        msgBox.exec();
}

void MainWindow::on_pb_ajouterpro_clicked()
{
    int id=ui->le_idpro->text().toInt();
    int Prix_initial=ui->le_prix_initial->text().toInt();
    int Prix_final=ui->le_prix_final->text().toInt();
   QString Date_Debut=ui->le_date_initiale->text();
   QString Date_Fin=ui->le_date_finale->text();
   int Pourcentage=ui->le_pourcentage->text().toInt();



  Promotion P(id,Prix_initial,Prix_final,Date_Debut,Date_Fin,Pourcentage);

    bool test=P.ajouter();
    if(test){
        QMessageBox::information(nullptr, QObject::tr("OK"),
                    QObject::tr("ajout de stock succesful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
          ui->tab_promotion->setModel(P.afficher());
    }
    else{

        QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                    QObject::tr("ajoutpromotion failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
}


void MainWindow::on_pb_supprimer_2_clicked()
{
    Promotion P1; P1.setid(ui->le_id_supp_2->text().toInt());
    bool test=P1.supprimer(P1.getid());
    QMessageBox msgBox;

    if(test)
       { msgBox.setText("Suppression avec succes.");
    ui->tab_promotion->setModel(P.afficher());
       }
    else
       { msgBox.setText("Echec de suppression"); }
        msgBox.exec();
}


void MainWindow::on_pb_modifier_event_clicked()
{
    QString nom = ui->le_nom_modifier->text();
    int DateD =  ui->le_Date_Debut_modifier->text().toInt();
    int DateF =  ui->le_Date_Fin_modifier->text().toInt();
    int id=ui->le_id_modifier->text().toInt();

    Evennement E2 (0,nom,DateD,DateF);

    if(E2.verif_champs_vide2(ui->le_id_modifier->text())==false)
    {
        QMessageBox::warning(this,tr("erreur de modification .!"),tr("le champ 'ID' ne doit pas etre vide")) ;
    }
    else
    {
        if(E2.verif_champs_vide_nom(ui->le_nom_modifier->text())==false)
        {
            QMessageBox::warning(this,tr("erreur de modification .!"),tr("le champ ' NOM ' ne doit pas etre vide")) ;
        }
        else
        {
            if(E2.verif_champs_vide2(ui->le_Date_Debut_modifier->text())==false)
            {
                QMessageBox::warning(this,tr("erreur de modification .!"),tr("le champ 'DATE DEBUT' ne doit pas etre vide")) ;
            }
            else
            {
                if(E2.verif_champs_vide2(ui->le_Date_Fin_modifier->text())==false)
                {
                    QMessageBox::warning(this,tr("erreur de modification .!"),tr("le champ 'DATE FIN' ne doit pas etre vide")) ;

                }
           else
        {
           if(E2.verif_chaine(ui->le_nom_modifier->text())==false)
         {
               QMessageBox::warning(this,tr("error"),tr("le champ ' NOM ' doit  etre alphabétique")) ;
         }
         else
         {

    E2.modifier(id);


    ui->tab_etudiant->setModel(E.afficher());//refresh
                     QMessageBox::information(nullptr, QObject::tr(" C fait !"),
                                       QObject::tr(" les informations concernant l'evennement sont modifiées !\n"
                                                   "Click Cancel to exit."), QMessageBox::Cancel);

}

           }
           }
           }
    }
}


void MainWindow::on_pb_modifier_promotion_clicked()
{
    int PrixI = ui->Prix_initial_modifier->text().toInt();
    int PrixF =  ui->Prix_final_modifier->text().toInt();
    QString DateD= ui->Date_initiale_modifier->text();
    QString DateF =  ui->Date_finale_modifier_promotion->text();
    int Pourcentage = ui->pourcentage_modifier_promotion->text().toInt();
    int id=ui->id_modifier_promotion->text().toInt();


    Promotion P2 (0,PrixI,PrixF,DateD,DateF,Pourcentage);

    if(P2.verif_champs_vide2(ui->id_modifier_promotion->text())==false)
    {
        QMessageBox::warning(this,tr("erreur de modification .!"),tr("le champ 'ID' ne doit pas etre vide")) ;
    }
    else
    {
        if(P2.verif_champs_vide2(ui->Prix_initial_modifier->text())==false)
        {
            QMessageBox::warning(this,tr("erreur de modification .!"),tr("le champ ' PRIX INITIAL ' ne doit pas etre vide")) ;
        }
        else
        {
            if(P2.verif_champs_vide2(ui->Prix_final_modifier->text())==false)
            {
                QMessageBox::warning(this,tr("erreur de modification .!"),tr("le champ 'PRIX FINAL' ne doit pas etre vide")) ;
            }
            else
            {
                if(P2.verif_champs_vide1(ui->Date_initiale_modifier->text())==false)
                {
                    QMessageBox::warning(this,tr("erreur de modification .!"),tr("le champ 'DATE INITIALE' ne doit pas etre vide")) ;

                }
           else
        {
           if(P2.verif_champs_vide1(ui->Date_finale_modifier_promotion->text())==false)
         {
               QMessageBox::warning(this,tr("error"),tr("le champ 'DATE FINALE' ne doit pas etre vide")) ;
         }
         else
         {
               if(P2.verif_champs_vide2(ui->pourcentage_modifier_promotion->text())==false)
               {
                   QMessageBox::warning(this,tr("erreur de modification .!"),tr("le champ 'POURCENTAGE' ne doit pas etre vide")) ;
               }
    P2.modifier(id);


    ui->tab_promotion->setModel(P.afficher());//refresh
                     QMessageBox::information(nullptr, QObject::tr(" C fait !"),
                                       QObject::tr(" les informations concernant les promotions sont modifiées !\n"
                                                   "Click Cancel to exit."), QMessageBox::Cancel);

}
        }
           }
           }
    }
}

void MainWindow::on_rechercher_event_textChanged(const QString &)
{
    Evennement E;
    if(ui->rechercher_event->text().isEmpty())
        {
            ui->tab_etudiant->setVisible(false);
            QSqlQuery *query=new QSqlQuery("SELECT * from evennements");
            QSqlQueryModel *model=new QSqlQueryModel();
            model->setQuery(*query);
            ui->tab_etudiant->setModel(model);
            ui->tab_etudiant->show();
            ui->tab_etudiant->resizeColumnsToContents();
            ui->tab_etudiant ->setVisible(true);
        }
    E.clear(ui->tab_etudiant);
    QString nom=ui->rechercher_event->text();


     E.rechercher2(ui->tab_etudiant,nom);


    if(ui->rechercher_event->text().isEmpty())
    {
        ui->tab_etudiant->setModel(E.afficher());
    }
}

void MainWindow::on_radioButton_nom_event_clicked()
{
    ui->tab_etudiant->setModel(E.afficher_tri_nom());
}

void MainWindow::on_radioButton_id_event_clicked()
{
    ui->tab_etudiant->setModel(E.afficher_tri_id());
}

void MainWindow::on_radioButton_DateDebut_event_clicked()
{
    ui->tab_etudiant->setModel(E.afficher_tri_date_debut());
}

void MainWindow::on_radioButton_DateFin_event_clicked()
{
    ui->tab_etudiant->setModel(E.afficher_tri_date_fin());
}



void MainWindow::on_excel_clicked()
{

            QTableView *table;
                              table = ui->tab_promotion;
                              QString filters("mdb files (*.csv);;All files (*.*)");
                              QString defaultFilter("mdb files (*.csv)");
                              QString fileName = QFileDialog::getSaveFileName(0, "Save file", QCoreApplication::applicationDirPath(),
                                                 filters, &defaultFilter);
                              QFile file(fileName);
                              QAbstractItemModel *model =  table->model();
                              if (file.open(QFile::WriteOnly | QFile::Truncate)) {
                                  QTextStream data(&file);
                                  QStringList strList;
                                  for (int i = 0; i < model->columnCount(); i++) {
                                      if (model->headerData(i, Qt::Horizontal, Qt::DisplayRole).toString().length() > 0)
                                          strList.append("\"" + model->headerData(i, Qt::Horizontal, Qt::DisplayRole).toString() + "\"");
                                      else
                                          strList.append("");
                                  }
                                  data << strList.join(";") << "\n";
                                  for (int i = 0; i < model->rowCount(); i++) {
                                      strList.clear();
                                      for (int j = 0; j < model->columnCount(); j++) {
                                          if (model->data(model->index(i, j)).toString().length() > 0)
                                              strList.append("\"" + model->data(model->index(i, j)).toString() + "\"");
                                          else
                                              strList.append("");
                                      }
                                      data << strList.join(";") + "\n";
                                  }
                                  file.close();
                                  QMessageBox::information(this,"Exporter To  export","Exporter En  export Avec Succées ");
}}

void MainWindow::on_PDF_clicked()
{
    QString strStream;
                        QTextStream out(&strStream);

                        const int rowCount = ui->tab_promotion->model()->rowCount();
                        const int columnCount = ui->tab_promotion->model()->columnCount();

                        out <<  "<html>\n"
                            "<head>\n"
                            "<meta Content=\"Text/html; charset=Windows-1251\">\n"
                            <<  QString("<title>%1</title>\n").arg("strTitle")
                            <<  "</head>\n"
                            "<body bgcolor=#ffffff link=#5000A0>\n"

                           //     "<align='right'> " << datefich << "</align>"
                            "<center> <H1>Liste des promotions </H1></br></br><table border=1 cellspacing=0 cellpadding=2>\n";

                        // headers
                        out << "<thead><tr bgcolor=#f0f0f0> <th>Numero</th>";
                        for (int column = 0; column < columnCount; column++)
                            if (!ui->tab_promotion->isColumnHidden(column))
                                out << QString("<th>%1</th>").arg(ui->tab_promotion->model()->headerData(column, Qt::Horizontal).toString());
                        out << "</tr></thead>\n";

                        // data table
                        for (int row = 0; row < rowCount; row++) {
                            out << "<tr> <td bkcolor=0>" << row+1 <<"</td>";
                            for (int column = 0; column < columnCount; column++) {
                                if (!ui->tab_promotion->isColumnHidden(column)) {
                                    QString data = ui->tab_promotion->model()->data(ui->tab_promotion->model()->index(row, column)).toString().simplified();
                                    out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                                }
                            }
                            out << "</tr>\n";
                        }
                        out <<  "</table> </center>\n"
                            "</body>\n"
                            "</html>\n";

                  QString fileName = QFileDialog::getSaveFileName((QWidget* )0, "Sauvegarder en PDF", QString(), "*.pdf");
                    if (QFileInfo(fileName).suffix().isEmpty()) { fileName.append(".pdf"); }

                   QPrinter printer (QPrinter::PrinterResolution);
                    printer.setOutputFormat(QPrinter::PdfFormat);
                   printer.setPaperSize(QPrinter::A4);
                  printer.setOutputFileName(fileName);

                   QTextDocument doc;
                    doc.setHtml(strStream);
                    doc.setPageSize(printer.pageRect().size()); // This is necessary if you want to hide the page number
                    doc.print(&printer);

}

void MainWindow::on_insert_try_linkActivated(QLabel *label1)
{
    label1 = new QLabel;
    label1->setPixmap(QPixmap("pastry.jpg"));
    label1->show();
}

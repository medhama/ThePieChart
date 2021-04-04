#include "stock.h"
//Constructeur Stock
STOCK::STOCK()
{
    id=0;
    libelle="";
    quantite=0;
    datestock="";
    prix=0;
}

STOCK::STOCK(int id ,QString libelle ,int quantite,QString datestock,int prix){
    this->id=id;
    this->libelle=libelle;
    this->quantite=quantite;
    this->datestock=datestock;
    this->prix=prix;

}

int STOCK::getid(){
return id;
}
QString STOCK::getlibelle(){
return libelle;
}
int STOCK::getquantite(){
return quantite;
}
QString STOCK::getdatestock(){
return datestock;
}
int STOCK::getprix(){
return prix;
}


void STOCK::setid(int id ){
this->id=id;
}
void STOCK::setlibelle(QString libelle ){
this->libelle=libelle;
}

void STOCK::setquantite(int quantite){
this->quantite=quantite;
}

void STOCK::setdatestock(QString datestock){
this->datestock=datestock;
}
void STOCK::setprix(int prix){
this->prix=prix;
}


bool STOCK::ajouter(){
    QSqlQuery query;
    QString id_string= QString::number(id);
    QString qte= QString::number(quantite);
    QString price= QString::number(prix);


          query.prepare("INSERT INTO STOCK (id, libelle, quantite , datestock , prix) "
                        "VALUES (:id, :libelle, :quantite, :datestock , :prix)");
          query.bindValue(":id", id_string);
          query.bindValue(":libelle", libelle);
          query.bindValue(":quantite", qte);
          query.bindValue(":datestock", datestock);
          query.bindValue(":prix", price);

         return query.exec();

                        }

QSqlQueryModel * STOCK::afficher(){
    QSqlQueryModel * model=new QSqlQueryModel();
         model->setQuery("select * from STOCK");
         model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("libelle"));
         model->setHeaderData(2, Qt::Horizontal, QObject::tr("quantite"));
         model->setHeaderData(3, Qt::Horizontal, QObject::tr("datestock"));
         model->setHeaderData(4, Qt::Horizontal, QObject::tr("prix"));



    return model;

}
bool STOCK::supprimer(int id){
    QSqlQuery query;
          query.prepare("Delete from STOCK where id=:id ");
          query.bindValue(0, id);

         return query.exec();
}


bool STOCK:: Modifier_STOCK(int id,QString libelle,int quantite,QString datestock,int prix)
{
    QSqlQuery query;
    bool result=false;
    if(quantite>=0)
    {
    query.prepare("UPDATE stock  SET  QUANTITE= :quantite , libelle= :libelle , datestock= :datestock ,prix= :prix where id=:id ");
    query.bindValue(":quantite", quantite);
    query.bindValue(":libelle", libelle);
    query.bindValue(":datestock", datestock);
    query.bindValue(":prix", prix);
    query.bindValue(":id", id);

   // if(query.exec())
       // result=true;
query.exec();
    }
    return result;
}

bool STOCK::STOCKExiste(QString libelle)
{
    int i=0;
    QSqlQuery query;
    query.prepare("SELECT * FROM stock WHERE libelle =:libelle");
    query.bindValue(":libelle", libelle);
    if(query.exec())
    {
        while(query.next())
        {
            i++;

        }
    }


    if(i != 0)
        return true;
    else
        return false;
}
bool STOCK:: verifierQuantite(int   quantite)
{

    if(quantite>0 && quantite<=5500)
    { return true;}
    else return false;
}
bool STOCK:: verifierPrix(int   Prix)
{

    if(Prix>0 && Prix<=500500)
    { return true;}
    else return false;
}
bool STOCK:: verifier_vide(QString line)
{

    if(line=="")
    { return false;}
    else return true;
}

QString STOCK::SET_Date(int*y,int*m,int*d)
{
    //QString mp=QString::number(*m);
    QString mp;
    QString yp=QString::number(*y);
    QString dp=QString::number(*d);
    switch (*m)
    {
    case 1:
        mp="JAN";
        break;
    case 2:
        mp="FEB";
        break;
    case 3:
        mp="MAR";
        break;
    case 4:
        mp="APR";
        break;
    case 5:
        mp="MAY";
        break;
    case 6:
        mp="JUN";
        break;
    case 7:
        mp="JUL";
        break;
    case 8:
        mp="AUG";
        break;
    case 9:
        mp="SEP";
        break;
    case 10:
        mp="OCT";
        break;
    case 11:
        mp="NOV";
        break;
    case 12:
        mp="DEC";
        break;
    }
    QString DATE=dp+"-"+mp+"-"+yp;
    return  DATE;

}

int STOCK::nb_jours(int y,int m,int d)
{
    return y*365+m*30+d;
}

void STOCK ::get_date(int*y,int*m,int*d)
{
    time_t t = time(0);   // get time now
    tm* now = localtime(&t);
    *y=now->tm_year + 1900;
    *m=now->tm_mon + 1;
    *d=now->tm_mday;

}
QString STOCK::Verifier_Date()
{
    QSqlQuery query;
    int y,m,d;
    get_date(&y,&m,&d);
    QString date=SET_Date(&y,&m,&d);

    query.prepare("select  libelle  FROM stock WHERE QUANTITE !=0 AND datestock < ? ");
    query.addBindValue(date);

    QString text="Ces Produits se sont expiree !! ";
       if(query.exec())
       {
           while (query.next())
           {
               text+="\n"+query.value(0).toString();
           }
       }
       return text;

}

int STOCK::get_total()
{
    QSqlQuery query;
    query.prepare("SELECT prix ,QUANTITE FROM stock WHERE QUANTITE != 0 ");
 int total=0;
    if(query.exec())
    {
        while (query.next())
        {
            total+=query.value(0).toInt()*query.value(1).toInt();
        }
    }
    return total;
}



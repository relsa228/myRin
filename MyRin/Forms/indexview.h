#ifndef INDEXVIEW_H
#define INDEXVIEW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QFileDialog>
#include <QVector>
#include <QStringList>
#include <QResizeEvent>
#include <QPrintDialog>
#include <QPrinter>
#include <QPainter>

#include "Forms/addpersonview.h"
#include "Forms/redactpersonview.h"
#include "Forms/MiniForms/deletedialog.h"

#include "Parsers/xmlparser.h"
#include "Parsers/configworker.h"

#include "Models/personmodel.h"

#include "Services/MessagesService/errormessage.h"
#include "Services/MessagesService/infomessage.h"
#include "Services/tableservice.h"
#include "Services/DataBaseService/databaseinitservice.h"
#include "Services/DataBaseService/databasepushservice.h"
#include "Services/DataBaseService/databasegetservice.h"

namespace Ui {
class IndexView;
}

class IndexView : public QMainWindow
{
    Q_OBJECT

public:
    explicit IndexView(QWidget *parent = nullptr);
    ~IndexView();

private slots:
    void on_CleanButton_clicked();

    void on_UploadXmlButton_clicked();

    void on_DownloadXmlButton_clicked();

    void on_FindButton_clicked();

    void on_AddXmlButton_clicked();

    void on_CleanTable_clicked();

    void on_AddPerson_clicked();

    void on_PersonTable_currentCellChanged(int currentRow, int currentColumn, int previousRow, int previousColumn);

    void on_EditPerson_clicked();

    void on_DeletePerson_clicked();

    virtual void resizeEvent(QResizeEvent *);

    void on_pushButton_clicked();

private:
    Ui::IndexView *ui;

    XmlParser* xmlParser;
    ConfigWorker* configWorker;

    TableService* tableService;
    DataBaseInitService* dbInitService;
    DataBasePushService* dbPushService;
    DataBaseGetService* dbGetService;

    int currentViewRow;
};

#endif // INDEXVIEW_H

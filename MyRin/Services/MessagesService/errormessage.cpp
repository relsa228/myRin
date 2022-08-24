#include "errormessage.h"

ErrorMessage::ErrorMessage(QString message)
{
    QMessageBox msg = QMessageBox();
    msg.setWindowIcon(QIcon(":/icons/mainIcon/Icons/MainIcons/table.svg"));
    msg.setWindowTitle("Ошибка");
    msg.setIcon(msg.Critical);
    msg.setText(message);
    msg.addButton("Принято", msg.AcceptRole);
    msg.exec();
}

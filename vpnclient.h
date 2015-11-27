#ifndef VPNCLIENT_H
#define VPNCLIENT_H

#include <QMainWindow>
#include <QButtonGroup>

namespace Ui {
class VPNClient;
}

class VPNClient : public QMainWindow
{
    Q_OBJECT

public:
    explicit VPNClient(QWidget *parent = 0);
    ~VPNClient();

private:
    Ui::VPNClient *ui;
};

#endif // VPNCLIENT_H

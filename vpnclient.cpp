#include "vpnclient.h"
#include "ui_vpnclient.h"

VPNClient::VPNClient(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::VPNClient)
{
    ui->setupUi(this);
    ui->AD->load(QUrl("http://www.dpifw.cn"));
    ui->AD->show();
}

VPNClient::~VPNClient()
{
    delete ui;
}

#include "mediahub.h"
#include "ui_mediahub.h"

MediaHub::MediaHub(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MediaHub)
{
    ui->setupUi(this);
}

MediaHub::~MediaHub()
{
    delete ui;
}

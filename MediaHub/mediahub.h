#ifndef MEDIAHUB_H
#define MEDIAHUB_H

#include <QWidget>

namespace Ui {
class MediaHub;
}

class MediaHub : public QWidget
{
    Q_OBJECT
    
public:
    explicit MediaHub(QWidget *parent = 0);
    ~MediaHub();
    
private:
    Ui::MediaHub *ui;
};

#endif // MEDIAHUB_H

#ifndef ABOUTVERSIONUI_H
#define ABOUTVERSIONUI_H

#include <QWidget>

namespace Ui {
class AboutVersionUI;
}

class AboutVersionUI : public QWidget
{
    Q_OBJECT

public:
    explicit AboutVersionUI(QWidget *parent = nullptr);
    ~AboutVersionUI();

private:
    Ui::AboutVersionUI *ui;
};

#endif // ABOUTVERSIONUI_H

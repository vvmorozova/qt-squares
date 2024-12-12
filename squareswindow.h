#ifndef SQUARESWINDOW_H
#define SQUARESWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QRegularExpression>

#include <array>
#include <vector>
#include <random>
#include <iterator>
#include <iostream>

typedef struct sColorParms
{
    QColor QColorName;
    std::string Name;
} colorParams;

QT_BEGIN_NAMESPACE
namespace Ui
{
    class SquaresWindow;
}
QT_END_NAMESPACE

class SquaresWindow : public QMainWindow
{
    Q_OBJECT

public:
    SquaresWindow(QWidget *parent = nullptr);
    ~SquaresWindow();
    void changeColor(QPushButton **btn);

private slots:
    void on_pushButton_0_clicked();
    void on_pushButton_1_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_8_clicked();

private:
    Ui::SquaresWindow *ui;
    std::array<colorParams, 10> colors;
    colorParams remColor;
};
#endif // SQUARESWINDOW_H

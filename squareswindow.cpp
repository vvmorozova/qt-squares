#include "squareswindow.h"
#include "./ui_squareswindow.h"

template <typename Iter, typename RandomGenerator>
Iter select_randomly(Iter start, Iter end, RandomGenerator &g)
{
    std::uniform_int_distribution<> dis(0, std::distance(start, end) - 1);
    std::advance(start, dis(g));
    return start;
}

template <typename Iter>
Iter select_randomly(Iter start, Iter end)
{
    static std::random_device rd;
    static std::mt19937 gen(rd());
    return select_randomly(start, end, gen);
}

SquaresWindow::SquaresWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::SquaresWindow)
{
    ui->setupUi(this);
    colors[0] = {QColor(Qt::white), "white"};
    colors[1] = {QColor(Qt::black), "black"};
    colors[2] = {QColor(QColorConstants::Svg::brown), "brown"};
    colors[3] = {QColor(Qt::blue), "blue"};
    colors[4] = {QColor(QColorConstants::Svg::lightblue), "light blue"};
    colors[5] = {QColor(Qt::red), "red"};
    colors[6] = {QColor(Qt::yellow), "yellow"};
    colors[7] = {QColor(Qt::green), "green"};
    colors[8] = {QColor(Qt::gray), "gray"};
    colors[9] = {QColor(QColorConstants::Svg::hotpink), "pink"};

    std::vector<colorParams> forRandomColors(colors.begin(), colors.end());

    for (int i = 0; i < 9; ++i)
    {
        QString buttonName = QString("pushButton_%1").arg(i);
        QPushButton *button = this->findChild<QPushButton *>(buttonName);

        if (button)
        {
            auto randElem = select_randomly(forRandomColors.begin(), forRandomColors.end());
            QColor col = (*randElem).QColorName;
            QString qsColor;
            if (col == QColor(Qt::black))
                qsColor = QString("background-color: %1; color: rgb(255, 255, 255)").arg(col.name());
            else
                qsColor = QString("background-color: %1").arg(col.name());
            QString qsColorName = QString::fromStdString((*randElem).Name);
            button->setStyleSheet(qsColor);
            button->setText(qsColorName);
            forRandomColors.erase(randElem);
        }
    }
    remColor = forRandomColors[0];
    ui->squaresShowLabel->setText("0");
}

SquaresWindow::~SquaresWindow()
{
    delete ui;
}

void SquaresWindow::changeColor(QPushButton **button)
{

    // change color
    colorParams tmp = remColor;
    remColor.Name = ((*button)->text()).toStdString();

    remColor.QColorName = (*button)->palette().button().color();

    QColor col = tmp.QColorName;
    QString qsColor;
    if (tmp.Name == "black")
        qsColor = QString("background-color: %1; color: rgb(255, 255, 255)").arg(col.name());
    else
        qsColor = QString("background-color: %1").arg(col.name());
    QString qsColorName = QString::fromStdString(tmp.Name);

    (*button)->setStyleSheet(qsColor);
    (*button)->setText(qsColorName);
    // increment number of pressed
    int num = ui->squaresShowLabel->text().toInt();
    num++;
    ui->squaresShowLabel->setText(QString::number(num));
}

void SquaresWindow::on_pushButton_0_clicked()
{
    changeColor(&(ui->pushButton_0));
}

void SquaresWindow::on_pushButton_1_clicked()
{
    changeColor(&(ui->pushButton_1));
}

void SquaresWindow::on_pushButton_2_clicked()
{
    changeColor(&(ui->pushButton_2));
}

void SquaresWindow::on_pushButton_3_clicked()
{
    changeColor(&(ui->pushButton_3));
}

void SquaresWindow::on_pushButton_4_clicked()
{
    changeColor(&(ui->pushButton_4));
}

void SquaresWindow::on_pushButton_5_clicked()
{
    changeColor(&(ui->pushButton_5));
}

void SquaresWindow::on_pushButton_6_clicked()
{
    changeColor(&(ui->pushButton_6));
}

void SquaresWindow::on_pushButton_7_clicked()
{
    changeColor(&(ui->pushButton_7));
}

void SquaresWindow::on_pushButton_8_clicked()
{
    changeColor(&(ui->pushButton_8));
}

#ifndef QDATATIMER_H
#define QDATATIMER_H

#include <QWidget>

class QDataTimer : public QWidget
{
    Q_OBJECT

public:
    QDataTimer(QWidget *parent = 0);

    QSize minimumSizeHint() const override;
    QSize sizeHint() const override;

    void setState(const QString &newState);
    QString state() const;

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void resizeEvent(QResizeEvent *event) override;
    void paintEvent(QPaintEvent *event) override;

};

#endif // QDATATIMER_H

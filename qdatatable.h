#ifndef QDataTable_H
#define QDataTable_H

#include <QWidget>
#include <QTableWidget>

QT_BEGIN_NAMESPACE
class QRect;
class QSize;
QT_END_NAMESPACE

class QDataTable : public QWidget
{
    Q_OBJECT
    Q_PROPERTY(QString state READ state WRITE setState)

public:
    explicit QDataTable(QWidget *parent = nullptr, bool flag = false);

    QSize minimumSizeHint() const override;
    QSize sizeHint() const override;

    void setState(const QString &newState);
    QString state() const;

private:
    QTableWidget * _widget = nullptr;

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void resizeEvent(QResizeEvent *event) override;
    void paintEvent(QPaintEvent *event) override;
};

#endif

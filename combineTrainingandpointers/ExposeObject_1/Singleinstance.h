#ifndef SINGLEINSTANCE_H
#define SINGLEINSTANCE_H

#include <QObject>
#include<QDebug>
#include<QColor>

class SingleInstance : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QColor col READ fontColor WRITE setFontColor NOTIFY colChanged)
public:
    explicit SingleInstance(QObject *parent = nullptr);

    QColor fontColor() const;
    void setFontColor(const QColor &fontColor);

signals:
    void colChanged();
private:
    QColor m_fontColor;
};

#endif // SINGLEINSTANCE_H

#ifndef CUBOIDOBJ_H
#define CUBOIDOBJ_H
// #include "logic/elevator.h"
#include <QGraphicsItem>
#include <QPainter>
#include <QObject>
#include <QPointF>
class CuboidObj : public QGraphicsObject
{

public:
    CuboidObj(qreal width, qreal height, qreal depth, QGraphicsObject *parent = nullptr);

    QRectF boundingRect() const override;
    void paint(QPainter *painter,[[maybe_unused]] const QStyleOptionGraphicsItem *option, [[maybe_unused]] QWidget *widget = nullptr) override;

private:
    qreal m_width;
    qreal m_height;
    qreal m_depth;

};

#endif // CUBOIDOBJ_H

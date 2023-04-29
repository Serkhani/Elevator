#ifndef CUBOIDITEM_H
#define CUBOIDITEM_H

#include <QGraphicsItem>
#include <QPainter>
class CuboidItem : public QGraphicsItem
{
public:
    CuboidItem(qreal width, qreal height, qreal depth, QGraphicsItem *parent = nullptr);
    QRectF boundingRect()
    {
        return QRectF(-m_width / 2, -m_height / 2, m_width, m_height);
    }
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr)
    {
        // Draw cuboid using QPainter
        painter->setPen(Qt::black);
        painter->setBrush(Qt::SolidPattern);
        painter->drawRect(-m_width / 2, -m_height / 2, m_width, m_height);
        painter->drawLine(-m_width / 2, -m_height / 2, -m_width / 2 - m_depth / 2, -m_height / 2 - m_depth / 2);
        painter->drawLine(m_width / 2, -m_height / 2, m_width / 2 - m_depth / 2, -m_height / 2 - m_depth / 2);
        painter->drawLine(m_width / 2, m_height / 2, m_width / 2 - m_depth / 2, m_height / 2 - m_depth / 2);
        painter->drawLine(-m_width / 2, m_height / 2, -m_width / 2 - m_depth / 2, m_height / 2 - m_depth / 2);
        painter->drawLine(-m_width / 2 - m_depth / 2, -m_height / 2 - m_depth / 2, m_width / 2 - m_depth / 2, -m_height / 2 - m_depth / 2);
        painter->drawLine(m_width / 2 - m_depth / 2, -m_height / 2 - m_depth / 2, m_width / 2 - m_depth / 2, m_height / 2 - m_depth / 2);
        painter->drawLine(m_width / 2 - m_depth / 2, m_height / 2 - m_depth / 2, -m_width / 2 - m_depth / 2, m_height / 2 - m_depth / 2);
        painter->drawLine(-m_width / 2 - m_depth / 2, m_height / 2 - m_depth / 2, -m_width / 2 - m_depth / 2, -m_height / 2 - m_depth / 2);
    }
private:
    qreal m_width;
    qreal m_height;
    qreal m_depth;
};

#endif // CUBOIDITEM_H
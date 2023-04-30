#ifndef CUBOIDITEM_H
#define CUBOIDITEM_H

#include <QGraphicsItem>
#include <QPainter>
class CuboidItem : public QGraphicsItem
{
public:
    CuboidItem(qreal width, qreal height, qreal depth, QGraphicsItem *parent = nullptr);
    virtual QRectF boundingRect() const override
    {
        return QRectF(-m_width / 2, -m_height / 2, m_width, m_height);
    }
    virtual void paint(QPainter *painter,[[maybe_unused]] const QStyleOptionGraphicsItem *option, [[maybe_unused]] QWidget *widget = nullptr) override
    {
        // Draw cuboid using QPainter
        painter->setPen(Qt::black);
        painter->setBrush(Qt::NoBrush);
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

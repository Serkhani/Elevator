#include "Headers/cuboidobj.h"

CuboidObj::CuboidObj(qreal width, qreal height, qreal depth, QGraphicsObject *parent)
        : QGraphicsObject(parent), m_width(width), m_height(height), m_depth(depth)
    {
//        setFlag(ItemIsSelectable);
//        setFlag(ItemIsMovable);
    }

QRectF CuboidObj::boundingRect() const
{
    // Calculate and return the bounding rectangle of the item

    return QRectF(-m_width / 2, -m_height / 2, m_width, m_height);

}

void CuboidObj::paint(QPainter *painter, [[maybe_unused]] const QStyleOptionGraphicsItem *option, [[maybe_unused]] QWidget *widget)
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


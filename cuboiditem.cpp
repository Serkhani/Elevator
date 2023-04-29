#include "cuboiditem.h"

CuboidItem::CuboidItem(qreal width, qreal height, qreal depth, QGraphicsItem *parent = nullptr)
        : QGraphicsItem(parent), m_width(width), m_height(height), m_depth(depth)
    {
        setFlag(ItemIsSelectable);
        setFlag(ItemIsMovable);
    }

CuboidItem::QRectF boundingRect() const override
    {
        return QRectF(-m_width / 2, -m_height / 2, m_width, m_height);
    }

CuboidItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr) override
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

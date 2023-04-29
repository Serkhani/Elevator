#include "cuboiditem.h"

CuboidItem::CuboidItem(qreal width, qreal height, qreal depth, QGraphicsItem *parent)
        : QGraphicsItem(parent), m_width(width), m_height(height), m_depth(depth)
    {
        setFlag(ItemIsSelectable);
        setFlag(ItemIsMovable);
    }


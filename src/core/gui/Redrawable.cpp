#include "Redrawable.h"

#include "model/Element.h"  // for Element
#include "util/Range.h"     // for Range

void Redrawable::repaintElement(Element* e) const {
    repaintArea(e->getX(), e->getY(), e->getElementWidth() + e->getX(), e->getElementHeight() + e->getY());
}

void Redrawable::repaintRect(double x, double y, double width, double height) const {
    repaintArea(x, y, x + width, y + height);
}

void Redrawable::rerenderRange(Range& r) { rerenderRect(r.getX(), r.getY(), r.getWidth(), r.getHeight()); }

void Redrawable::rerenderElement(Element* e) {
    rerenderRect(e->getX() - 1, e->getY() - 1, e->getElementWidth() + 2, e->getElementHeight() + 2);
}

#include "../../include/ui/UIElement.hpp"

bool UIElement::isMouseOver(int mouseX, int mouseY){
    return (mouseX >= m_rect.x && mouseX <= m_rect.x + m_rect.w &&
            mouseY >= m_rect.y && mouseY <= m_rect.y + m_rect.h);
}
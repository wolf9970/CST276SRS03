#include "CompositeFactory/RectangleFactory.h"
#include "CompositeFactory/LineFactory.h"
#include "CompositeFactory/CircleFactory.h"
#include "CompositeFactory/PolygonFactory.h"
#include "CompositeFactory/ShapeFactory.h"

int main()
{
    auto* circleFactory{ new CircleFactory };
    auto* myCircle = circleFactory->CreateShape();
    
    return 0;
}
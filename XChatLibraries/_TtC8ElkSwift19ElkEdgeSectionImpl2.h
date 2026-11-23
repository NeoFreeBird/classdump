//
#ifndef _TtC8ElkSwift19ElkEdgeSectionImpl2_h
#define _TtC8ElkSwift19ElkEdgeSectionImpl2_h
@import Foundation;

#include "_TtC8ElkSwift17ElkPropertyHolder.h"

@class ElkSwift.ElkConnectableShape ?, _$sSSSg, _$sSa -> ElkSwift.ElkBendPoint, _$sSa -> ElkSwift.ElkEdgeSection, _$sSd, _$syXlSgXw;

@interface ElkSwift.ElkEdgeSectionImpl2 : ElkSwift.ElkPropertyHolder { // (Swift)
    /* instance variables */
    Swift.Double startX;
    Swift.Double startY;
    Swift.Double endX;
    Swift.Double endY;
    Swift.Array -> ElkSwift.ElkBendPoint bendPoints;
    weak Swift.AnyObject? _parent;
    ElkSwift.ElkConnectableShape ? outgoingShape;
    ElkSwift.ElkConnectableShape ? incomingShape;
    Swift.Array -> ElkSwift.ElkEdgeSection outgoingSections;
    Swift.Array -> ElkSwift.ElkEdgeSection incomingSections;
    Swift.String? identifier;
}

@end

#endif /* _TtC8ElkSwift19ElkEdgeSectionImpl2_h */

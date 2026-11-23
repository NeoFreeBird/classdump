//
#ifndef _TtC8ElkSwift5LPort_h
#define _TtC8ElkSwift5LPort_h
@import Foundation;

#include "_TtC8ElkSwift6LShape.h"

@class ElkSwift.KVector, ElkSwift.LMargin, ElkSwift.LNode ?, ElkSwift.PortSide, Swift.Bool, _$sSa -> ElkSwift.LEdge, _$sSa -> ElkSwift.LLabel;

@interface ElkSwift.LPort : ElkSwift.LShape { // (Swift)
    /* instance variables */
    ElkSwift.LNode ? owner;
    ElkSwift.PortSide side;
    ElkSwift.KVector anchor;
    Swift.Bool explicitlySuppliedPortAnchor;
    ElkSwift.LMargin margin;
    Swift.Array -> ElkSwift.LLabel labels;
    Swift.Array -> ElkSwift.LEdge incomingEdges;
    Swift.Array -> ElkSwift.LEdge outgoingEdges;
    Swift.Bool connectedToExternalNodes;
}

@end

#endif /* _TtC8ElkSwift5LPort_h */

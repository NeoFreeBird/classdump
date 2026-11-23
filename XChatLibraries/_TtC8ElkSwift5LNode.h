//
#ifndef _TtC8ElkSwift5LNode_h
#define _TtC8ElkSwift5LNode_h
@import Foundation;

#include "_TtC8ElkSwift6LShape.h"

@class ElkSwift.LGraph ?, ElkSwift.LMargin, ElkSwift.LPadding, ElkSwift.Layer ?, ElkSwift.NodeType, Swift.Bool, _$sSD -> ElkSwift.PortSide _$sSi_SitGSg, _$sSa -> ElkSwift.LLabel, _$sSa -> ElkSwift.LPort;

@interface ElkSwift.LNode : ElkSwift.LShape { // (Swift)
    /* instance variables */
    ElkSwift.LGraph ? graph;
    ElkSwift.Layer ? layer;
    ElkSwift.NodeType type;
    Swift.Array -> ElkSwift.LPort ports;
    Swift.Array -> ElkSwift.LLabel labels;
    ElkSwift.LGraph ? nestedGraph;
    ElkSwift.LMargin margin;
    ElkSwift.LPadding padding;
    Swift.Dictionary -> ElkSwift.PortSide _$sSi_SitGSg portSideIndices;
    Swift.Bool portSidesCached;
}

@end

#endif /* _TtC8ElkSwift5LNode_h */

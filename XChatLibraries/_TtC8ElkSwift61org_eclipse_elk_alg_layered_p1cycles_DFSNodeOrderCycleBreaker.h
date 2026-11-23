//
#ifndef _TtC8ElkSwift61org_eclipse_elk_alg_layered_p1cycles_DFSNodeOrderCycleBreaker_h
#define _TtC8ElkSwift61org_eclipse_elk_alg_layered_p1cycles_DFSNodeOrderCycleBreaker_h
@import Foundation;

@class ElkSwift.LGraph ?, _$sSa -> ElkSwift.LEdge, _$sSa -> ElkSwift.LNode, _$sSaySbG, _TtCs12_SwiftObject;

@interface ElkSwift.org_eclipse_elk_alg_layered_p1cycles_DFSNodeOrderCycleBreaker : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Array -> ElkSwift.LNode sources;
    [Swift.Bool] visited;
    [Swift.Bool] active;
    Swift.Array -> ElkSwift.LEdge edgesToBeReversed;
    ElkSwift.LGraph ? graph;
}

@end

#endif /* _TtC8ElkSwift61org_eclipse_elk_alg_layered_p1cycles_DFSNodeOrderCycleBreaker_h */

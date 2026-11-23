//
#ifndef _TtC8ElkSwift61org_eclipse_elk_alg_layered_p1cycles_BFSNodeOrderCycleBreaker_h
#define _TtC8ElkSwift61org_eclipse_elk_alg_layered_p1cycles_BFSNodeOrderCycleBreaker_h
@import Foundation;

@class ElkSwift.ArrayDeque ElkSwift.LNode, ElkSwift.LGraph ?, _$sSa -> ElkSwift.LEdge, _$sSa -> ElkSwift.LNode, _$sSaySbG, _$sShySOG, _TtCs12_SwiftObject;

@interface ElkSwift.org_eclipse_elk_alg_layered_p1cycles_BFSNodeOrderCycleBreaker : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Array -> ElkSwift.LNode sources;
    Swift.Array -> ElkSwift.LNode sinks;
    Swift.Set<Swift.ObjectIdentifier> sourceIds;
    Swift.Set<Swift.ObjectIdentifier> sinkIds;
    [Swift.Bool] visited;
    ElkSwift.ArrayDeque ElkSwift.LNode bfsQueue;
    Swift.Array -> ElkSwift.LEdge edgesToBeReversed;
    ElkSwift.LGraph ? graph;
}

@end

#endif /* _TtC8ElkSwift61org_eclipse_elk_alg_layered_p1cycles_BFSNodeOrderCycleBreaker_h */

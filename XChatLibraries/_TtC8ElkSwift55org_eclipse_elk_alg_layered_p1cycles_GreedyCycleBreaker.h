//
#ifndef _TtC8ElkSwift55org_eclipse_elk_alg_layered_p1cycles_GreedyCycleBreaker_h
#define _TtC8ElkSwift55org_eclipse_elk_alg_layered_p1cycles_GreedyCycleBreaker_h
@import Foundation;

@class ElkSwift.ArrayDeque ElkSwift.LNode, ElkSwift.LGraph ?, _$sSaySiGSg, _TtCs12_SwiftObject;

@interface ElkSwift.org_eclipse_elk_alg_layered_p1cycles_GreedyCycleBreaker : Swift._SwiftObject { // (Swift)
    /* instance variables */
    [Swift.Int]? indeg;
    [Swift.Int]? outdeg;
    [Swift.Int]? mark;
    ElkSwift.ArrayDeque ElkSwift.LNode sources;
    ElkSwift.ArrayDeque ElkSwift.LNode sinks;
    ElkSwift.LGraph ? layeredGraph;
}

@end

#endif /* _TtC8ElkSwift55org_eclipse_elk_alg_layered_p1cycles_GreedyCycleBreaker_h */

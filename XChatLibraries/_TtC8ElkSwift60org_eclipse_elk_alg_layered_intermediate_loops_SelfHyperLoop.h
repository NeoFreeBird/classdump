//
#ifndef _TtC8ElkSwift60org_eclipse_elk_alg_layered_intermediate_loops_SelfHyperLoop_h
#define _TtC8ElkSwift60org_eclipse_elk_alg_layered_intermediate_loops_SelfHyperLoop_h
@import Foundation;

@class ElkSwift.org_eclipse_elk_alg_layered_intermediate_loops_SelfHyperLoopLabels ?, ElkSwift.org_eclipse_elk_alg_layered_intermediate_loops_SelfLoopHolder, ElkSwift.org_eclipse_elk_alg_layered_intermediate_loops_SelfLoopPort ?, ElkSwift.org_eclipse_elk_alg_layered_intermediate_loops_SelfLoopType ?, _$sSD -> ElkSwift.PortSide _$sSa -> ElkSwift.org_eclipse_elk_alg_layered_intermediate_loops_SelfLoopPort _$sGGSg, _$sSa -> ElkSwift.org_eclipse_elk_alg_layered_intermediate_loops_SelfLoopPort, _$sSaySiG, _$sSh -> ElkSwift.PortSide, _$sSh -> ElkSwift.org_eclipse_elk_alg_layered_intermediate_loops_SelfLoopEdge, _TtCs12_SwiftObject;

@interface ElkSwift.org_eclipse_elk_alg_layered_intermediate_loops_SelfHyperLoop : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ElkSwift.org_eclipse_elk_alg_layered_intermediate_loops_SelfLoopHolder slHolder;
    Swift.Array -> ElkSwift.org_eclipse_elk_alg_layered_intermediate_loops_SelfLoopPort slPorts;
    Swift.Set -> ElkSwift.org_eclipse_elk_alg_layered_intermediate_loops_SelfLoopEdge slEdges;
    ElkSwift.org_eclipse_elk_alg_layered_intermediate_loops_SelfHyperLoopLabels ? slLabels;
    ElkSwift.org_eclipse_elk_alg_layered_intermediate_loops_SelfLoopType ? selfLoopType;
    Swift.Dictionary -> ElkSwift.PortSide Swift.Array -> ElkSwift.org_eclipse_elk_alg_layered_intermediate_loops_SelfLoopPort _$sGGSg slPortsBySide;
    ElkSwift.org_eclipse_elk_alg_layered_intermediate_loops_SelfLoopPort ? leftmostPort;
    ElkSwift.org_eclipse_elk_alg_layered_intermediate_loops_SelfLoopPort ? rightmostPort;
    Swift.Set -> ElkSwift.PortSide occupiedPortSides;
    [Swift.Int] routingSlot;
}

@end

#endif /* _TtC8ElkSwift60org_eclipse_elk_alg_layered_intermediate_loops_SelfHyperLoop_h */

//
#ifndef _TtC8ElkSwift79org_eclipse_elk_alg_layered_intermediate_preserveorder_ModelOrderNodeComparator_h
#define _TtC8ElkSwift79org_eclipse_elk_alg_layered_intermediate_preserveorder_ModelOrderNodeComparator_h
@import Foundation;

@class ElkSwift.LGraph, ElkSwift.org_eclipse_elk_alg_layered_options_GroupOrderStrategy, ElkSwift.org_eclipse_elk_alg_layered_options_LongEdgeOrderingStrategy, ElkSwift.org_eclipse_elk_alg_layered_options_OrderingStrategy, Swift.Bool, _$sSDySOShySOGG, _$sSa -> ElkSwift.LNode, _TtCs12_SwiftObject;

@interface ElkSwift.org_eclipse_elk_alg_layered_intermediate_preserveorder_ModelOrderNodeComparator : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Array -> ElkSwift.LNode previousLayer;
    ElkSwift.LGraph graph;
    ElkSwift.org_eclipse_elk_alg_layered_options_OrderingStrategy orderingStrategy;
    ElkSwift.org_eclipse_elk_alg_layered_options_GroupOrderStrategy groupOrderStrategy;
    [Swift.ObjectIdentifier : Swift.Set<Swift.ObjectIdentifier>] biggerThan;
    [Swift.ObjectIdentifier : Swift.Set<Swift.ObjectIdentifier>] smallerThan;
    ElkSwift.org_eclipse_elk_alg_layered_options_LongEdgeOrderingStrategy longEdgeNodeOrder;
    Swift.Bool beforePorts;
}

@end

#endif /* _TtC8ElkSwift79org_eclipse_elk_alg_layered_intermediate_preserveorder_ModelOrderNodeComparator_h */

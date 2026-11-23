//
#ifndef _TtCC8ElkSwift66org_eclipse_elk_alg_layered_intermediate_SortByInputModelProcessor15_NodeComparator_h
#define _TtCC8ElkSwift66org_eclipse_elk_alg_layered_intermediate_SortByInputModelProcessor15_NodeComparator_h
@import Foundation;

@class ElkSwift.LGraph, ElkSwift.org_eclipse_elk_alg_layered_options_GroupOrderStrategy, ElkSwift.org_eclipse_elk_alg_layered_options_LongEdgeOrderingStrategy, ElkSwift.org_eclipse_elk_alg_layered_options_OrderingStrategy, Swift.Bool, _$sSDySOShySOGG, _$sSa -> ElkSwift.LNode, _TtCs12_SwiftObject;

@interface ElkSwift.org_eclipse_elk_alg_layered_intermediate_SortByInputModelProcessor._NodeComparator : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ElkSwift.LGraph graph;
    Swift.Array -> ElkSwift.LNode previousLayer;
    ElkSwift.org_eclipse_elk_alg_layered_options_OrderingStrategy orderingStrategy;
    ElkSwift.org_eclipse_elk_alg_layered_options_GroupOrderStrategy groupOrderStrategy;
    ElkSwift.org_eclipse_elk_alg_layered_options_LongEdgeOrderingStrategy longEdgeNodeOrder;
    Swift.Bool beforePorts;
    [Swift.ObjectIdentifier : Swift.Set<Swift.ObjectIdentifier>] biggerThan;
    [Swift.ObjectIdentifier : Swift.Set<Swift.ObjectIdentifier>] smallerThan;
}

@end

#endif /* _TtCC8ElkSwift66org_eclipse_elk_alg_layered_intermediate_SortByInputModelProcessor15_NodeComparator_h */

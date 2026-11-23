//
#ifndef _TtCC8ElkSwift66org_eclipse_elk_alg_layered_intermediate_SortByInputModelProcessor15_PortComparator_h
#define _TtCC8ElkSwift66org_eclipse_elk_alg_layered_intermediate_SortByInputModelProcessor15_PortComparator_h
@import Foundation;

@class ElkSwift.LGraph, ElkSwift.org_eclipse_elk_alg_layered_options_OrderingStrategy, Swift.Bool, _$sSDySOShySOGG, _$sSDySOSiG, _$sSa -> ElkSwift.LNode, _TtCs12_SwiftObject;

@interface ElkSwift.org_eclipse_elk_alg_layered_intermediate_SortByInputModelProcessor._PortComparator : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ElkSwift.LGraph graph;
    Swift.Array -> ElkSwift.LNode previousLayer;
    ElkSwift.org_eclipse_elk_alg_layered_options_OrderingStrategy strategy;
    [Swift.ObjectIdentifier : Swift.Int] targetNodeModelOrder;
    Swift.Bool portModelOrder;
    [Swift.ObjectIdentifier : Swift.Set<Swift.ObjectIdentifier>] biggerThan;
    [Swift.ObjectIdentifier : Swift.Set<Swift.ObjectIdentifier>] smallerThan;
}

@end

#endif /* _TtCC8ElkSwift66org_eclipse_elk_alg_layered_intermediate_SortByInputModelProcessor15_PortComparator_h */

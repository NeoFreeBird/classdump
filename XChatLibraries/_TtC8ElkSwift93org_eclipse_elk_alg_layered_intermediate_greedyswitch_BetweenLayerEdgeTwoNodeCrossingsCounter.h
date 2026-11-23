//
#ifndef _TtC8ElkSwift93org_eclipse_elk_alg_layered_intermediate_greedyswitch_BetweenLayerEdgeTwoNodeCrossingsCounter_h
#define _TtC8ElkSwift93org_eclipse_elk_alg_layered_intermediate_greedyswitch_BetweenLayerEdgeTwoNodeCrossingsCounter_h
@import Foundation;

@class _$sSDySO ElkSwift.org_eclipse_elk_alg_layered_intermediate_greedyswitch_BetweenLayerEdgeTwoNodeCrossingsCounter.AdjacencyList, _$sSDySOSiG, _$sSaySa -> ElkSwift.LNode, _$sSi, _TtCs12_SwiftObject;

@interface ElkSwift.org_eclipse_elk_alg_layered_intermediate_greedyswitch_BetweenLayerEdgeTwoNodeCrossingsCounter : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Int upperLowerCrossings;
    Swift.Int lowerUpperCrossings;
    Swift.Array empty-list Swift.Array -> ElkSwift.LNode currentNodeOrder;
    Swift.Int freeLayerIndex;
    [Swift.ObjectIdentifier : Swift.Int] portPositions;
    Swift.Dictionary empty-list Swift.ObjectIdentifier ElkSwift.org_eclipse_elk_alg_layered_intermediate_greedyswitch_BetweenLayerEdgeTwoNodeCrossingsCounter.AdjacencyList easternAdjacencies;
    Swift.Dictionary empty-list Swift.ObjectIdentifier ElkSwift.org_eclipse_elk_alg_layered_intermediate_greedyswitch_BetweenLayerEdgeTwoNodeCrossingsCounter.AdjacencyList westernAdjacencies;
}

@end

#endif /* _TtC8ElkSwift93org_eclipse_elk_alg_layered_intermediate_greedyswitch_BetweenLayerEdgeTwoNodeCrossingsCounter_h */

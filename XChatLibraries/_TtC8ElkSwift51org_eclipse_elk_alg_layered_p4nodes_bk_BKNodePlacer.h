//
#ifndef _TtC8ElkSwift51org_eclipse_elk_alg_layered_p4nodes_bk_BKNodePlacer_h
#define _TtC8ElkSwift51org_eclipse_elk_alg_layered_p4nodes_bk_BKNodePlacer_h
@import Foundation;

@class ElkSwift.LGraph ?, ElkSwift.org_eclipse_elk_alg_layered_p4nodes_bk_NeighborhoodInformation ?, Swift.Bool, _$sSh -> ElkSwift.LEdge, _TtCs12_SwiftObject;

@interface ElkSwift.org_eclipse_elk_alg_layered_p4nodes_bk_BKNodePlacer : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ElkSwift.LGraph ? lGraph;
    Swift.Set -> ElkSwift.LEdge markedEdges;
    ElkSwift.org_eclipse_elk_alg_layered_p4nodes_bk_NeighborhoodInformation ? ni;
    Swift.Bool produceBalancedLayout;
}

@end

#endif /* _TtC8ElkSwift51org_eclipse_elk_alg_layered_p4nodes_bk_BKNodePlacer_h */

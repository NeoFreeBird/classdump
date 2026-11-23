//
#ifndef _TtC8ElkSwift50org_eclipse_elk_alg_layered_p4nodes_bk_BKCompactor_h
#define _TtC8ElkSwift50org_eclipse_elk_alg_layered_p4nodes_bk_BKCompactor_h
@import Foundation;

@class ElkSwift.LGraph, ElkSwift.org_eclipse_elk_alg_layered_options_Spacings, ElkSwift.org_eclipse_elk_alg_layered_p4nodes_bk_NeighborhoodInformation, ElkSwift.org_eclipse_elk_alg_layered_p4nodes_bk_ThresholdStrategy ?, Swift.Bool, _$sSDySO ElkSwift.org_eclipse_elk_alg_layered_p4nodes_bk_BKCompactor.ClassNode, _$sShySOG, _TtCs12_SwiftObject;

@interface ElkSwift.org_eclipse_elk_alg_layered_p4nodes_bk_BKCompactor : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ElkSwift.LGraph layeredGraph;
    ElkSwift.org_eclipse_elk_alg_layered_p4nodes_bk_ThresholdStrategy ? threshStrategy;
    ElkSwift.org_eclipse_elk_alg_layered_p4nodes_bk_NeighborhoodInformation ni;
    Swift.Bool useSimpleThreshold;
    ElkSwift.org_eclipse_elk_alg_layered_options_Spacings spacings;
    Swift.Dictionary empty-list Swift.ObjectIdentifier ElkSwift.org_eclipse_elk_alg_layered_p4nodes_bk_BKCompactor.ClassNode sinkNodes;
    Swift.Set<Swift.ObjectIdentifier> placedBlockRoots;
}

@end

#endif /* _TtC8ElkSwift50org_eclipse_elk_alg_layered_p4nodes_bk_BKCompactor_h */

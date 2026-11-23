//
#ifndef _TtC8ElkSwift56org_eclipse_elk_alg_layered_p4nodes_bk_ThresholdStrategy_h
#define _TtC8ElkSwift56org_eclipse_elk_alg_layered_p4nodes_bk_ThresholdStrategy_h
@import Foundation;

@class ElkSwift.ArrayDeque ElkSwift.org_eclipse_elk_alg_layered_p4nodes_bk_ThresholdStrategy.Postprocessable, ElkSwift.org_eclipse_elk_alg_layered_p4nodes_bk_BKAlignedLayout, ElkSwift.org_eclipse_elk_alg_layered_p4nodes_bk_NeighborhoodInformation, _$sSa -> ElkSwift.org_eclipse_elk_alg_layered_p4nodes_bk_ThresholdStrategy.Postprocessable, _$sShySOG, _TtCs12_SwiftObject;

@interface ElkSwift.org_eclipse_elk_alg_layered_p4nodes_bk_ThresholdStrategy : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ElkSwift.org_eclipse_elk_alg_layered_p4nodes_bk_BKAlignedLayout bal;
    ElkSwift.org_eclipse_elk_alg_layered_p4nodes_bk_NeighborhoodInformation ni;
    Swift.Set<Swift.ObjectIdentifier> blockFinished;
    ElkSwift.ArrayDeque ElkSwift.org_eclipse_elk_alg_layered_p4nodes_bk_ThresholdStrategy.Postprocessable postProcessablesQueue;
    Swift.Array -> ElkSwift.org_eclipse_elk_alg_layered_p4nodes_bk_ThresholdStrategy.Postprocessable postProcessablesStack;
}

@end

#endif /* _TtC8ElkSwift56org_eclipse_elk_alg_layered_p4nodes_bk_ThresholdStrategy_h */

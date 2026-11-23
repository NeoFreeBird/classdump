//
#ifndef _TtC8ElkSwift56org_eclipse_elk_alg_layered_p4nodes_NetworkSimplexPlacer_h
#define _TtC8ElkSwift56org_eclipse_elk_alg_layered_p4nodes_NetworkSimplexPlacer_h
@import Foundation;

@class ElkSwift.LGraph ?, ElkSwift.NGraph ?, ElkSwift.org_eclipse_elk_alg_layered_options_Spacings ?, _$sSDySO ElkSwift.NNode, _$sSa -> ElkSwift.NEdge, _$sSa -> ElkSwift.org_eclipse_elk_alg_layered_p4nodes_NetworkSimplexPlacer.EdgeRep ?, _$sSa -> ElkSwift.org_eclipse_elk_alg_layered_p4nodes_NetworkSimplexPlacer.NodeRep ?, _$sSa -> ElkSwift.org_eclipse_elk_alg_layered_p4nodes_NetworkSimplexPlacer.Path, _$sSaySbG, _$sSaySiG, _$sSi, _TtCs12_SwiftObject;

@interface ElkSwift.org_eclipse_elk_alg_layered_p4nodes_NetworkSimplexPlacer : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ElkSwift.LGraph ? lGraph;
    ElkSwift.org_eclipse_elk_alg_layered_options_Spacings ? spacings;
    ElkSwift.NGraph ? nGraph;
    Swift.Array -> ElkSwift.org_eclipse_elk_alg_layered_p4nodes_NetworkSimplexPlacer.NodeRep ? nodeReps;
    Swift.Array -> ElkSwift.org_eclipse_elk_alg_layered_p4nodes_NetworkSimplexPlacer.EdgeRep ? edgeReps;
    Swift.Dictionary empty-list Swift.ObjectIdentifier ElkSwift.NNode portMap;
    Swift.Int nodeCount;
    Swift.Int edgeCount;
    [Swift.Int] nodeState;
    Swift.Array -> ElkSwift.org_eclipse_elk_alg_layered_p4nodes_NetworkSimplexPlacer.Path twoPaths;
    [Swift.Bool] crossing;
    Swift.Array -> ElkSwift.NEdge flexibleWhereSpacePermitsEdges;
}

@end

#endif /* _TtC8ElkSwift56org_eclipse_elk_alg_layered_p4nodes_NetworkSimplexPlacer_h */

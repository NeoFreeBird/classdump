//
#ifndef _TtC8ElkSwift54org_eclipse_elk_alg_layered_p4nodes_bk_BKAlignedLayout_h
#define _TtC8ElkSwift54org_eclipse_elk_alg_layered_p4nodes_bk_BKAlignedLayout_h
@import Foundation;

@class ElkSwift.LGraph, ElkSwift.org_eclipse_elk_alg_layered_options_Spacings, ElkSwift.org_eclipse_elk_alg_layered_p4nodes_bk_BKAlignedLayout.HDirection, ElkSwift.org_eclipse_elk_alg_layered_p4nodes_bk_BKAlignedLayout.VDirection, _$sSa -> ElkSwift.LNode ?, _$sSaySbG, _$sSaySdG, _TtCs12_SwiftObject;

@interface ElkSwift.org_eclipse_elk_alg_layered_p4nodes_bk_BKAlignedLayout : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Array -> ElkSwift.LNode ? root;
    [Swift.Double] blockSize;
    Swift.Array -> ElkSwift.LNode ? align;
    [Swift.Double] innerShift;
    Swift.Array -> ElkSwift.LNode ? sink;
    [Swift.Double] shift;
    [Swift.Double] y;
    ElkSwift.org_eclipse_elk_alg_layered_p4nodes_bk_BKAlignedLayout.VDirection vdir;
    ElkSwift.org_eclipse_elk_alg_layered_p4nodes_bk_BKAlignedLayout.HDirection hdir;
    [Swift.Bool] su;
    [Swift.Bool] od;
    ElkSwift.LGraph layeredGraph;
    ElkSwift.org_eclipse_elk_alg_layered_options_Spacings spacings;
}

@end

#endif /* _TtC8ElkSwift54org_eclipse_elk_alg_layered_p4nodes_bk_BKAlignedLayout_h */

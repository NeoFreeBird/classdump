//
#ifndef _TtC8ElkSwift63org_eclipse_elk_alg_layered_p3order_LayerSweepCrossingMinimizer_h
#define _TtC8ElkSwift63org_eclipse_elk_alg_layered_p3order_LayerSweepCrossingMinimizer_h
@import Foundation;

@class ElkSwift.Random ?, ElkSwift.org_eclipse_elk_alg_layered_p3order_CrossMinType, _$sSa -> ElkSwift.org_eclipse_elk_alg_layered_p3order_GraphInfoHolder, _$sShySOG, _$sSi, _TtCs12_SwiftObject;

@interface ElkSwift.org_eclipse_elk_alg_layered_p3order_LayerSweepCrossingMinimizer : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Array -> ElkSwift.org_eclipse_elk_alg_layered_p3order_GraphInfoHolder graphInfoHolders;
    Swift.Set<Swift.ObjectIdentifier> graphsWhoseNodeOrderChanged;
    ElkSwift.Random ? random;
    Swift.Int randomSeed;
    ElkSwift.org_eclipse_elk_alg_layered_p3order_CrossMinType crossMinType;
}

@end

#endif /* _TtC8ElkSwift63org_eclipse_elk_alg_layered_p3order_LayerSweepCrossingMinimizer_h */

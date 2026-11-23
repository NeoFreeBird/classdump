//
#ifndef _TtC8ElkSwift51org_eclipse_elk_alg_layered_p3order_GraphInfoHolder_h
#define _TtC8ElkSwift51org_eclipse_elk_alg_layered_p3order_GraphInfoHolder_h
@import Foundation;

@class ElkSwift.LGraph, ElkSwift.LNode ?, ElkSwift.SharedIntArray, ElkSwift.org_eclipse_elk_alg_layered_p3order_CrossMinType, ElkSwift.org_eclipse_elk_alg_layered_p3order_GraphInfoHolder ?, ElkSwift.org_eclipse_elk_alg_layered_p3order_ICrossingMinimizationHeuristic, ElkSwift.org_eclipse_elk_alg_layered_p3order_ISweepPortDistributor, ElkSwift.org_eclipse_elk_alg_layered_p3order_LayerSweepTypeDecider ?, ElkSwift.org_eclipse_elk_alg_layered_p3order_SweepCopy ?, ElkSwift.org_eclipse_elk_alg_layered_p3order_counting_AllCrossingsCounter, Swift.Bool, _$sSa -> ElkSwift.LGraph, _$sSaySa -> ElkSwift.LNode, _$sSi, _TtCs12_SwiftObject;

@interface ElkSwift.org_eclipse_elk_alg_layered_p3order_GraphInfoHolder : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ElkSwift.LGraph _lGraph;
    Swift.Array empty-list Swift.Array -> ElkSwift.LNode _currentNodeOrder;
    ElkSwift.org_eclipse_elk_alg_layered_p3order_SweepCopy ? _currentlyBestNodeAndPortOrder;
    ElkSwift.org_eclipse_elk_alg_layered_p3order_SweepCopy ? _bestNodeAndPortOrder;
    ElkSwift.SharedIntArray _portPositions;
    Swift.Bool _useBottomUp;
    Swift.Array -> ElkSwift.LGraph _childGraphs;
    Swift.Bool _hasExternalPorts;
    Swift.Bool _hasParent;
    ElkSwift.org_eclipse_elk_alg_layered_p3order_GraphInfoHolder ? _parentGraphData;
    ElkSwift.LNode ? _parent;
    ElkSwift.org_eclipse_elk_alg_layered_p3order_LayerSweepTypeDecider ? $__lazy_storage_$__layerSweepTypeDecider;
    ElkSwift.org_eclipse_elk_alg_layered_p3order_ICrossingMinimizationHeuristic _crossMinimizer;
    ElkSwift.org_eclipse_elk_alg_layered_p3order_ISweepPortDistributor _portDistributor;
    ElkSwift.org_eclipse_elk_alg_layered_p3order_counting_AllCrossingsCounter _crossingsCounter;
    Swift.Int _nPorts;
    ElkSwift.org_eclipse_elk_alg_layered_p3order_CrossMinType _originalCrossMinType;
}

@end

#endif /* _TtC8ElkSwift51org_eclipse_elk_alg_layered_p3order_GraphInfoHolder_h */

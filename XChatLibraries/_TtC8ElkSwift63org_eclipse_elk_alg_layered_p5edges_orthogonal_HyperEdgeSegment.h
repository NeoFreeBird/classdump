//
#ifndef _TtC8ElkSwift63org_eclipse_elk_alg_layered_p5edges_orthogonal_HyperEdgeSegment_h
#define _TtC8ElkSwift63org_eclipse_elk_alg_layered_p5edges_orthogonal_HyperEdgeSegment_h
@import Foundation;

@class ElkSwift.org_eclipse_elk_alg_layered_p5edges_orthogonal_HyperEdgeSegment ?, ElkSwift.org_eclipse_elk_alg_layered_p5edges_orthogonal_direction_BaseRoutingDirectionStrategy, _$sSa -> ElkSwift.LPort, _$sSa -> ElkSwift.org_eclipse_elk_alg_layered_p5edges_orthogonal_HyperEdgeSegmentDependency, _$sSaySdG, _$sSd, _$sSi, _TtCs12_SwiftObject;

@interface ElkSwift.org_eclipse_elk_alg_layered_p5edges_orthogonal_HyperEdgeSegment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ElkSwift.org_eclipse_elk_alg_layered_p5edges_orthogonal_direction_BaseRoutingDirectionStrategy routingStrategy;
    Swift.Array -> ElkSwift.LPort ports;
    Swift.Int mark;
    Swift.Int routingSlot;
    Swift.Double startPosition;
    Swift.Double endPosition;
    [Swift.Double] incomingConnectionCoordinates;
    [Swift.Double] outgoingConnectionCoordinates;
    Swift.Array -> ElkSwift.org_eclipse_elk_alg_layered_p5edges_orthogonal_HyperEdgeSegmentDependency outgoingSegmentDeps;
    Swift.Int outDepWeight;
    Swift.Int criticalOutDepWeight;
    Swift.Array -> ElkSwift.org_eclipse_elk_alg_layered_p5edges_orthogonal_HyperEdgeSegmentDependency incomingSegmentDeps;
    Swift.Int inDepWeight;
    Swift.Int criticalInDepWeight;
    ElkSwift.org_eclipse_elk_alg_layered_p5edges_orthogonal_HyperEdgeSegment ? splitPartner;
    ElkSwift.org_eclipse_elk_alg_layered_p5edges_orthogonal_HyperEdgeSegment ? splitBy;
}

@end

#endif /* _TtC8ElkSwift63org_eclipse_elk_alg_layered_p5edges_orthogonal_HyperEdgeSegment_h */

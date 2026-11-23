//
#ifndef _TtC8ElkSwift14NetworkSimplex_h
#define _TtC8ElkSwift14NetworkSimplex_h
@import Foundation;

@class ElkSwift.NGraph ?, Swift.Bool, _$sSa -> ElkSwift.NEdge ?, _$sSa -> ElkSwift.NNode ?, _$sSa -> ElkSwift.NNode node_ ElkSwift.NEdge edgetGSg, _$sSaySbGSg, _$sSaySdGSg, _$sSaySiGSg, _$sSh -> ElkSwift.NEdge ?, _$sSi, _TtCs12_SwiftObject;

@interface ElkSwift.NetworkSimplex : Swift._SwiftObject { // (Swift)
    /* instance variables */
    [Swift.Int]? previousLayeringNodeCounts;
    Swift.Bool balance;
    Swift.Int iterationLimit;
    ElkSwift.NGraph ? graph;
    Swift.Array -> ElkSwift.NEdge ? edges;
    Swift.Set -> ElkSwift.NEdge ? treeEdges;
    Swift.Array -> ElkSwift.NNode ? sources;
    [Swift.Bool]? edgeVisited;
    Swift.Int postOrder;
    [Swift.Int]? poID;
    [Swift.Int]? lowestPoID;
    [Swift.Double]? cutvalue;
    Swift.Array -> ElkSwift.NNode node_ ElkSwift.NEdge edgetGSg subtreeNodesStack;
}

@end

#endif /* _TtC8ElkSwift14NetworkSimplex_h */

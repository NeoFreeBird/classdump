//
#ifndef _TtC8ElkSwift5NNode_h
#define _TtC8ElkSwift5NNode_h
@import Foundation;

@class ElkSwift.NNode.ChangeAwareArrayList _$sy_ ElkSwift.NEdge, Swift.Bool, _$sSS, _$sSa -> ElkSwift.NEdge, _$sSi, _$sypSg, _TtCs12_SwiftObject;

@interface ElkSwift.NNode : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Int id;
    Any? origin;
    Swift.String type;
    Swift.Int layer;
    Swift.Int internalId;
    Swift.Bool treeNode;
    Swift.Array -> ElkSwift.NEdge unknownCutvalues;
    ElkSwift.NNode.ChangeAwareArrayList  empty-list  first-element-marker  ElkSwift.NEdge outgoingEdges;
    Swift.Int outgoingEdgesModCnt;
    ElkSwift.NNode.ChangeAwareArrayList  empty-list  first-element-marker  ElkSwift.NEdge incomingEdges;
    Swift.Int incomingEdgesModCnt;
    Swift.Array -> ElkSwift.NEdge allEdges;
}

@end

#endif /* _TtC8ElkSwift5NNode_h */

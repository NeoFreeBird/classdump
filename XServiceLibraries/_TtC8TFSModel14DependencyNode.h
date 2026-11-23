//
#ifndef _TtC8TFSModel14DependencyNode_h
#define _TtC8TFSModel14DependencyNode_h
@import Foundation;

@class TFSModel.DependencyGraph ?, TFSModel.DependencyNode.UnownedWrapper ?, _$sSh -> TFSModel.DependencyNode, _$sSh -> TFSModel.DependencyNode.UnownedWrapper, _TtCs12_SwiftObject;

@interface TFSModel.DependencyNode : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.DependencyGraph ? graph;
    Swift.Set -> TFSModel.DependencyNode.UnownedWrapper downstreamNodes;
    Swift.Set -> TFSModel.DependencyNode upstreamNodes;
    TFSModel.DependencyNode.UnownedWrapper ? $__lazy_storage_$_unownedWrapper;
}

@end

#endif /* _TtC8TFSModel14DependencyNode_h */

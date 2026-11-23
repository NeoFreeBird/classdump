//
#ifndef _TtC8ElkSwift23ElkConnectableShapeBase_h
#define _TtC8ElkSwift23ElkConnectableShapeBase_h
@import Foundation;

#include "_TtC8ElkSwift12ElkShapeBase.h"

@class _$sSa -> ElkSwift.ElkEdge;

@interface ElkSwift.ElkConnectableShapeBase : ElkSwift.ElkShapeBase { // (Swift)
    /* instance variables */
    Swift.Array -> ElkSwift.ElkEdge outgoingEdges;
    Swift.Array -> ElkSwift.ElkEdge incomingEdges;
}

@end

#endif /* _TtC8ElkSwift23ElkConnectableShapeBase_h */

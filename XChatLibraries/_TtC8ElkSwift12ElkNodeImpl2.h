//
#ifndef _TtC8ElkSwift12ElkNodeImpl2_h
#define _TtC8ElkSwift12ElkNodeImpl2_h
@import Foundation;

#include "_TtC8ElkSwift23ElkConnectableShapeBase.h"

@class _$sSa -> ElkSwift.ElkEdge, _$sSa -> ElkSwift.ElkNode, _$sSa -> ElkSwift.ElkPort, _$syXlSgXw;

@interface ElkSwift.ElkNodeImpl2 : ElkSwift.ElkConnectableShapeBase { // (Swift)
    /* instance variables */
    Swift.Array -> ElkSwift.ElkPort ports;
    Swift.Array -> ElkSwift.ElkNode children;
    weak Swift.AnyObject? _parent;
    Swift.Array -> ElkSwift.ElkEdge containedEdges;
}

@end

#endif /* _TtC8ElkSwift12ElkNodeImpl2_h */

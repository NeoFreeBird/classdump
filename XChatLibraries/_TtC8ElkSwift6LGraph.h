//
#ifndef _TtC8ElkSwift6LGraph_h
#define _TtC8ElkSwift6LGraph_h
@import Foundation;

#include "_TtC8ElkSwift13LGraphElement.h"

@class ElkSwift.KVector, ElkSwift.LNode ?, ElkSwift.LPadding, _$sSa -> ElkSwift.LNode, _$sSa -> ElkSwift.Layer;

@interface ElkSwift.LGraph : ElkSwift.LGraphElement { // (Swift)
    /* instance variables */
    ElkSwift.KVector size;
    ElkSwift.LPadding padding;
    ElkSwift.KVector offset;
    Swift.Array -> ElkSwift.LNode layerlessNodes;
    Swift.Array -> ElkSwift.Layer layers;
    ElkSwift.LNode ? parentNode;
}

@end

#endif /* _TtC8ElkSwift6LGraph_h */

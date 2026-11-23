//
#ifndef _TtC8ElkSwift5Layer_h
#define _TtC8ElkSwift5Layer_h
@import Foundation;

#include "_TtC8ElkSwift13LGraphElement.h"

@class ElkSwift.KVector, ElkSwift.LGraph, _$sSa -> ElkSwift.LNode;

@interface ElkSwift.Layer : ElkSwift.LGraphElement { // (Swift)
    /* instance variables */
    ElkSwift.LGraph owner;
    ElkSwift.KVector size;
    Swift.Array -> ElkSwift.LNode nodes;
}

@end

#endif /* _TtC8ElkSwift5Layer_h */

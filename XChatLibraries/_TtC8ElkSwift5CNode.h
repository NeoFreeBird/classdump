//
#ifndef _TtC8ElkSwift5CNode_h
#define _TtC8ElkSwift5CNode_h
@import Foundation;

@class ElkSwift.CGroup ?, ElkSwift.CNode ?, ElkSwift.ElkRectangle, ElkSwift.KVector, ElkSwift.Quadruplet, Swift.Bool, _$sSa -> ElkSwift.CNode, _$sSd, _$sSi, _TtCs12_SwiftObject;

@interface ElkSwift.CNode : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ElkSwift.CGroup ? cGroup;
    ElkSwift.CNode ? parentNode;
    Swift.Array -> ElkSwift.CNode constraints;
    ElkSwift.ElkRectangle hitbox;
    ElkSwift.KVector cGroupOffset;
    Swift.Double startPos;
    Swift.Bool reposition;
    ElkSwift.Quadruplet lock;
    ElkSwift.Quadruplet spacingIgnore;
    Swift.Int id;
}

@end

#endif /* _TtC8ElkSwift5CNode_h */

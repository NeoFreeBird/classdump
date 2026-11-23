//
#ifndef _TtC8ElkSwift12CommonCGraph_h
#define _TtC8ElkSwift12CommonCGraph_h
@import Foundation;

@class _$sSa -> ElkSwift.CGroup, _$sSa -> ElkSwift.CNode, _$sSa -> ElkSwift.CNode _$s_AAt, _$sSh -> ElkSwift.Direction, _TtCs12_SwiftObject;

@interface ElkSwift.CommonCGraph : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Array -> ElkSwift.CNode cNodes;
    Swift.Array -> ElkSwift.CGroup cGroups;
    Swift.Set -> ElkSwift.Direction supportedDirections;
    Swift.Array -> ElkSwift.CNode _$s_AAt predefinedHorizontalConstraints;
    Swift.Array -> ElkSwift.CNode _$s_AAt predefinedVerticalConstraints;
}

@end

#endif /* _TtC8ElkSwift12CommonCGraph_h */

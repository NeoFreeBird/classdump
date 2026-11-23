//
#ifndef _TtC8ElkSwift11PortContext_h
#define _TtC8ElkSwift11PortContext_h
@import Foundation;

@class ElkSwift.ElkMargin, ElkSwift.KVector, ElkSwift.LabelCell ?, ElkSwift.NodeContext, ElkSwift.PortAdapter, Swift.Bool, _$s10Foundation4UUIDVMn, _TtCs12_SwiftObject;

@interface ElkSwift.PortContext : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Foundation.UUID id;
    ElkSwift.NodeContext parentNodeContext;
    ElkSwift.PortAdapter port;
    ElkSwift.KVector portPosition;
    Swift.Bool labelsNextToPort;
    ElkSwift.ElkMargin portMargin;
    ElkSwift.LabelCell ? portLabelCell;
}

@end

#endif /* _TtC8ElkSwift11PortContext_h */

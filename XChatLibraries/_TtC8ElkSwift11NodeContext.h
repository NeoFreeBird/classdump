//
#ifndef _TtC8ElkSwift11NodeContext_h
#define _TtC8ElkSwift11NodeContext_h
@import Foundation;

@class ElkSwift.ElkMargin, ElkSwift.ElkPadding, ElkSwift.GridContainerCell ?, ElkSwift.KVector, ElkSwift.NodeAdapter, ElkSwift.NodeLabelPlacement, ElkSwift.PortConstraints, ElkSwift.PortContextMultimap, ElkSwift.PortLabelPlacement, ElkSwift.SizeConstraint, ElkSwift.SizeOptions, ElkSwift.StripContainerCell, Swift.Bool, _$sSD -> ElkSwift.NodeLabelLocation ElkSwift.LabelCell, _$sSD -> ElkSwift.PortSide ElkSwift.AtomicCell, _$sSD -> ElkSwift.PortSide ElkSwift.StripContainerCell, _$sSd, _TtCs12_SwiftObject;

@interface ElkSwift.NodeContext : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ElkSwift.NodeAdapter node;
    ElkSwift.KVector nodeSize;
    Swift.Bool treatAsCompoundNode;
    ElkSwift.SizeConstraint sizeConstraints;
    ElkSwift.SizeOptions sizeOptions;
    ElkSwift.PortConstraints portConstraints;
    ElkSwift.PortLabelPlacement portLabelsPlacement;
    Swift.Bool portLabelsTreatAsGroup;
    ElkSwift.NodeLabelPlacement nodeLabelPlacement;
    ElkSwift.ElkPadding nodeLabelsPadding;
    Swift.Double nodeLabelSpacing;
    Swift.Double labelLabelSpacing;
    Swift.Double labelCellSpacing;
    Swift.Double portPortSpacing;
    Swift.Double portLabelSpacingHorizontal;
    Swift.Double portLabelSpacingVertical;
    ElkSwift.ElkMargin surroundingPortMargins;
    Swift.Bool topdownLayout;
    ElkSwift.PortContextMultimap portContexts;
    ElkSwift.StripContainerCell nodeContainer;
    ElkSwift.StripContainerCell nodeContainerMiddleRow;
    ElkSwift.GridContainerCell ? insideNodeLabelContainer;
    Swift.Dictionary -> ElkSwift.PortSide ElkSwift.AtomicCell insidePortLabelCells;
    Swift.Dictionary -> ElkSwift.PortSide ElkSwift.StripContainerCell outsideNodeLabelContainers;
    Swift.Dictionary -> ElkSwift.NodeLabelLocation ElkSwift.LabelCell nodeLabelCells;
}

@end

#endif /* _TtC8ElkSwift11NodeContext_h */

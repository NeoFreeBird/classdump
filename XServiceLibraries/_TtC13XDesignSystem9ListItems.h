//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC13XDesignSystem9ListItems_h
#define _TtC13XDesignSystem9ListItems_h
@import Foundation;

#include "UITableViewDelegate-Protocol.h"
#include "UITableViewDragDelegate-Protocol.h"
#include "UITableViewDropDelegate-Protocol.h"

@class Swift.Bool, UIView, XDesignSystem.ListItems.RowStyle, XDesignSystem.ListRow ?, _$s12CoreGraphics7CGFloatVMn, _$s12CoreGraphics7CGFloatVMn ?, _$s5UIKit29UITableViewDiffableDataSourceCMn _$ss11AnyHashableVMn _$sABGSg ->, _$sSD -> _$ss11AnyHashableVMn XDesignSystem.ListItem, _$sSa -> XDesignSystem.ListSection, _$sSa -> XDesignSystem.ListSection _$sG8sections_Sb8animatedtSg, _$sSi, _$sSo11UITableViewC, _$sSo28UISelectionFeedbackGeneratorC, _$sSo31UINotificationFeedbackGeneratorC, _$sySh -> _$ss11AnyHashableVMn _$sGcSg, _$syycSg, _$syyyccSg;

@interface XDesignSystem.ListItems : UIView <UITableViewDropDelegate, UITableViewDragDelegate, UITableViewDelegate> { // (Swift)
    /* instance variables */
     empty-list Swift.Set -> nominal type descriptor for Swift.AnyHashable _$sGcSg onSelectionChanged;
    (() -> ())? onReachedEnd;
    nominal type descriptor for CoreGraphics.CGFloat horizontalContentInset;
    nominal type descriptor for CoreGraphics.CGFloat ? rowContentTapTargetPadding;
    nominal type descriptor for CoreGraphics.CGFloat rowSpacing;
    XDesignSystem.ListItems.RowStyle rowStyle;
    __C.UITableView tableView;
    XDesignSystem.ListRow ? openSwipeRow;
    nominal type descriptor for UIKit.UITableViewDiffableDataSource nominal type descriptor for Swift.AnyHashable _$sABGSg -> dataSource;
    ((() -> ()) -> ())? animatedApplyCoordinator;
    Swift.Array -> XDesignSystem.ListSection sections;
    Swift.Dictionary -> nominal type descriptor for Swift.AnyHashable XDesignSystem.ListItem itemsByID;
    Swift.Bool isApplyingAnimatedChanges;
    Swift.Int activeDragSessionCount;
    Swift.Bool needsReloadAfterDrag;
    Swift.Array -> XDesignSystem.ListSection _$sG8sections_Sb8animatedtSg heldConfiguration;
    __C.UISelectionFeedbackGenerator selectionFeedback;
    __C.UINotificationFeedbackGenerator rejectionFeedback;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (_Bool)tableView:(id)view canHandleDropSession:(id)session;
- (id)tableView:(id)view dropSessionDidUpdate:(id)update withDestinationIndexPath:(id)path;
- (void)tableView:(id)view performDropWithCoordinator:(id)coordinator;
- (id)tableView:(id)view dropPreviewParametersForRowAtIndexPath:(id)path;
- (id)tableView:(id)view itemsForBeginningDragSession:(id)session atIndexPath:(id)path;
- (_Bool)tableView:(id)view dragSessionIsRestrictedToDraggingApplication:(id)application;
- (void)tableView:(id)view dragSessionWillBegin:(id)begin;
- (void)tableView:(id)view dragSessionDidEnd:(id)end;
- (id)tableView:(id)view dragPreviewParametersForRowAtIndexPath:(id)path;
- (void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)path;
- (double)tableView:(id)view heightForRowAtIndexPath:(id)path;
- (double)tableView:(id)view heightForHeaderInSection:(long long)section;
- (id)tableView:(id)view viewForHeaderInSection:(long long)section;
- (double)tableView:(id)view heightForFooterInSection:(long long)section;
- (id)tableView:(id)view viewForFooterInSection:(long long)section;
- (_Bool)tableView:(id)view shouldHighlightRowAtIndexPath:(id)path;
- (void)scrollViewWillBeginDragging:(id)dragging;
- (void)tableView:(id)view didHighlightRowAtIndexPath:(id)path;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (id)initWithCoder:(id)coder;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC13XDesignSystem9ListItems_h */

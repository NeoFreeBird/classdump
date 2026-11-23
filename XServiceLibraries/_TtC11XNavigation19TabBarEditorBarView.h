//
#ifndef _TtC11XNavigation19TabBarEditorBarView_h
#define _TtC11XNavigation19TabBarEditorBarView_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"

@class Swift.Bool, UIView, XDesignSystem.Button, XDesignSystem.Glass, XNavigation.TabBarEditorBarView.Touch ?, XNavigation.TabBarFlex ?, XNavigation.TabBarPill, _$s8Dispatch0A8WorkItemCMn ?, _$sSD -> XNavigation.TabBarController.TabIdentifier XNavigation.TabBarEditorItemView, _$sSa -> XNavigation.TabBarEditor.Option, _$sSi, _$sSo28UISelectionFeedbackGeneratorC, _$sSo6UIViewC, _$sySi_SitcSg, _$sySicSg, _$syycSg, __C.CGPoint;

@interface XNavigation.TabBarEditorBarView : UIView <UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    ((Swift.Int) -> ())? onTap;
    (() -> ())? onAdd;
    (() -> ())? onBeginArranging;
    ((Swift.Int) -> ())? onRemove;
    ((Swift.Int, Swift.Int) -> ())? onMove;
    ((Swift.Int) -> ())? onSelect;
    Swift.Array -> XNavigation.TabBarEditor.Option tabs;
    Swift.Int selectedIndex;
    Swift.Bool isArranging;
    Swift.Bool showsAddButton;
    Swift.Bool canRemove;
    Swift.Bool canArrange;
    Swift.Bool ridesEnclosingAnimation;
    __C.UIView platterContainer;
    XDesignSystem.Glass platter;
    XNavigation.TabBarPill pill;
    XNavigation.TabBarFlex ? $__lazy_storage_$_flex;
    XDesignSystem.Button addButton;
    Swift.Dictionary -> XNavigation.TabBarController.TabIdentifier XNavigation.TabBarEditorItemView itemViews;
    XNavigation.TabBarEditorBarView.Touch ? touch;
    __C.CGPoint lastTouchLocation;
    nominal type descriptor for Dispatch.DispatchWorkItem ? pendingLongPress;
    __C.CGPoint pillRestCenter;
    __C.UISelectionFeedbackGenerator selectionFeedback;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)handleTracking:(id)tracking;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC11XNavigation19TabBarEditorBarView_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11XNavigation23TabBarAccessoryHostView_h
#define _TtC11XNavigation23TabBarAccessoryHostView_h
@import Foundation;

@class Swift.Bool, UIView, XDesignSystem.Blur.ContentEffect ?, XNavigation.TabBarAccessoryHostView.Placement, XNavigation.TabBarAccessoryID, XNavigation.TabBarAccessoryState ?, XNavigation.TabBarAccessoryView, XNavigation.TabBarCollapse ?, _$sSi, _$sSo6UIViewC;

@interface XNavigation.TabBarAccessoryHostView : UIView { // (Swift)
    /* instance variables */
    XNavigation.TabBarAccessoryID id;
    XNavigation.TabBarAccessoryView contentView;
    XNavigation.TabBarAccessoryHostView.Placement placement;
    Swift.Bool isConcealed;
    XNavigation.TabBarCollapse ? collapseHiding;
    Swift.Bool isArriving;
    Swift.Bool isPosing;
    __C.UIView poseContainer;
    XNavigation.TabBarAccessoryState ? appliedState;
    Swift.Int poseGeneration;
    XDesignSystem.Blur.ContentEffect ? glassDepartureBlur;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC11XNavigation23TabBarAccessoryHostView_h */

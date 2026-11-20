//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11XNavigation18TabBarBadgeOverlay_h
#define _TtC11XNavigation18TabBarBadgeOverlay_h
@import Foundation;

@class Swift.Bool, UIView, _$s12CoreGraphics7CGFloatVMn, _$sSa -> XNavigation.TabBarBadgeView ?, _$sSa -> XNavigation.TabBarController.TabBadge ?, _$sSa -> __C.CGRect, _$sSi, _$sSo7UIColorC;

@interface XNavigation.TabBarBadgeOverlay : UIView { // (Swift)
    /* instance variables */
    __C.UIColor color;
    nominal type descriptor for CoreGraphics.CGFloat glyphScale;
    nominal type descriptor for CoreGraphics.CGFloat glyphRotation;
    nominal type descriptor for CoreGraphics.CGFloat iconLift;
    Swift.Bool drawsCountsAsDots;
    Swift.Array -> XNavigation.TabBarController.TabBadge ? badges;
    Swift.Array -> XNavigation.TabBarBadgeView ? badgeViews;
    Swift.Array -> __C.CGRect itemFrames;
    Swift.Int selectedIndex;
    Swift.Bool isRightToLeft;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC11XNavigation18TabBarBadgeOverlay_h */

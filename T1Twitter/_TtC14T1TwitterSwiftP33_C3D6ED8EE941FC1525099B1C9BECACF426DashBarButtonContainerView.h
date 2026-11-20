//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwiftP33_C3D6ED8EE941FC1525099B1C9BECACF426DashBarButtonContainerView_h
#define _TtC14T1TwitterSwiftP33_C3D6ED8EE941FC1525099B1C9BECACF426DashBarButtonContainerView_h
@import Foundation;

@class UIView;

@interface T1TwitterSwift.(DashBarButtonContainerView in _C3D6ED8EE941FC1525099B1C9BECACF4) : UIView { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *avatarView;
    NSNumber"16@0:8 *dashButton;
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *appBadging;
    NSNumber"16@0:8 *badgeView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)accountBadgesDidUpdateWithNotification:(id)notification;

@end

#endif /* _TtC14T1TwitterSwiftP33_C3D6ED8EE941FC1525099B1C9BECACF426DashBarButtonContainerView_h */

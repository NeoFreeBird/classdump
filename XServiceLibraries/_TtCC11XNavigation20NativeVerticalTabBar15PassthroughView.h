//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCC11XNavigation20NativeVerticalTabBar15PassthroughView_h
#define _TtCC11XNavigation20NativeVerticalTabBar15PassthroughView_h
@import Foundation;

@class UIView, __C.CGRect _$scSg ->;

@interface XNavigation.NativeVerticalTabBar.PassthroughView : UIView { // (Swift)
    /* instance variables */
    __C.CGRect _$scSg -> onLayout;
}

/* instance methods */
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtCC11XNavigation20NativeVerticalTabBar15PassthroughView_h */

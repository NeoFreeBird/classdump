//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7DMInbox20InboxSearchBarButton_h
#define _TtC7DMInbox20InboxSearchBarButton_h
@import Foundation;

@class UIControl, _$s13XDesignSystem13SearchCapsuleCMn ?, _$s13XDesignSystem5InputCMn;

@interface DMInbox.InboxSearchBarButton : UIControl { // (Swift)
    /* instance variables */
    nominal type descriptor for XDesignSystem.Input input;
    nominal type descriptor for XDesignSystem.SearchCapsule ? capsule;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (void)handleGlassTap;

@end

#endif /* _TtC7DMInbox20InboxSearchBarButton_h */

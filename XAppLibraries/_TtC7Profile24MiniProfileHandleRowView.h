//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7Profile24MiniProfileHandleRowView_h
#define _TtC7Profile24MiniProfileHandleRowView_h
@import Foundation;

@class Profile.FollowsYouPillView, Profile.MiniProfileContent.FollowsYouMode, UIView, _$sSo7UILabelC;

@interface Profile.MiniProfileHandleRowView : UIView { // (Swift)
    /* instance variables */
    __C.UILabel handleLabel;
    Profile.FollowsYouPillView pill;
    Profile.MiniProfileContent.FollowsYouMode followsYou;
}

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC7Profile24MiniProfileHandleRowView_h */

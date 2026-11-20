//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC6CallUI16CallTrayHeroView_h
#define _TtC6CallUI16CallTrayHeroView_h
@import Foundation;

@class UIView, _$sSa -> CallUI.CallAvatarView, _$sSi, _$sSo6UIViewCSg;

@interface CallUI.CallTrayHeroView : UIView { // (Swift)
    /* instance variables */
    Swift.Array -> CallUI.CallAvatarView avatarViews;
    Swift.Int faceCount;
    __C.UIView? conversationAvatarView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;

@end

#endif /* _TtC6CallUI16CallTrayHeroView_h */

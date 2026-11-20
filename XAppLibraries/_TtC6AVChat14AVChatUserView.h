//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC6AVChat14AVChatUserView_h
#define _TtC6AVChat14AVChatUserView_h
@import Foundation;

@class Chat.AVChatCoordinatorUserState ?, UIView, _$sSo18TUIAvatarImageViewC, _$sSo6UIViewC, _$sSo6UIViewCSg;

@interface AVChat.AVChatUserView : UIView { // (Swift)
    /* instance variables */
    oneway _Atomic Chat.AVChatCoordinatorUserState ? userState;
    __C.TUIAvatarImageView avatarView;
    __C.UIView loadingIndicatorView;
    __C.UIView? videoView;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC6AVChat14AVChatUserView_h */

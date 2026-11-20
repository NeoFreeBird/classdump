//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC4DMUI24ConversationAvatarUIView_h
#define _TtC4DMUI24ConversationAvatarUIView_h
@import Foundation;

@class DMUI.ConversationAvatarUIView.AvatarLayout ?, TwitterUISwift.AvatarImageView, UIView, _$sSa -> DMUI.AvatarViewModel, _$sSo12CAShapeLayerC, __C.CGSize;

@interface DMUI.ConversationAvatarUIView : UIView { // (Swift)
    /* instance variables */
    Swift.Array -> DMUI.AvatarViewModel avatarViewModels;
    DMUI.ConversationAvatarUIView.AvatarLayout ? layout;
    __C.CAShapeLayer cutoutMaskLayer;
    TwitterUISwift.AvatarImageView firstAvatarImageView;
    TwitterUISwift.AvatarImageView secondAvatarImageView;
    __C.CGSize size;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC4DMUI24ConversationAvatarUIView_h */

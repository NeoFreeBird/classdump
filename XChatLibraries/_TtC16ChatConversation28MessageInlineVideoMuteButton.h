//
#ifndef _TtC16ChatConversation28MessageInlineVideoMuteButton_h
#define _TtC16ChatConversation28MessageInlineVideoMuteButton_h
@import Foundation;

@class Swift.Bool, UIView, _$sSo11UIImageViewC, _$syycSg;

@interface ChatConversation.MessageInlineVideoMuteButton : UIView { // (Swift)
    /* instance variables */
    Swift.Bool isMuted;
    (() -> ())? onTap;
    __C.UIImageView imageView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC16ChatConversation28MessageInlineVideoMuteButton_h */

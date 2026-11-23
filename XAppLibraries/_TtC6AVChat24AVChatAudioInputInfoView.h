//
#ifndef _TtC6AVChat24AVChatAudioInputInfoView_h
#define _TtC6AVChat24AVChatAudioInputInfoView_h
@import Foundation;

@class Chat.AVChatInfoItemsState.AudioInput, Swift.Bool, UIView, _$sSo11UIImageViewC, __C.CGSize;

@interface AVChat.AVChatAudioInputInfoView : UIView { // (Swift)
    /* instance variables */
    oneway _Atomic Chat.AVChatInfoItemsState.AudioInput info;
    __C.CGSize preferredContentSize;
    Swift.Bool _isAnimatingTalking;
    __C.UIImageView _imageView;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC6AVChat24AVChatAudioInputInfoView_h */

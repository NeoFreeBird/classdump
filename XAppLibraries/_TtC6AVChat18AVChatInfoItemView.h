//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC6AVChat18AVChatInfoItemView_h
#define _TtC6AVChat18AVChatInfoItemView_h
@import Foundation;

@class UIView, _$sSo11UIImageViewCSg, _$sSo7UILabelCSg, __C.CGSize, __C.UIEdgeInsets;

@interface AVChat.AVChatInfoItemView : UIView { // (Swift)
    /* instance variables */
    __C.CGSize preferredContentSize;
    __C.UIImageView? _imageView;
    __C.UILabel? _emojiLabel;
    __C.UIEdgeInsets insets;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC6AVChat18AVChatInfoItemView_h */

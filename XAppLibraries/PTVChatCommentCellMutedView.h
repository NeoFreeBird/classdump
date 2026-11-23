//
#ifndef PTVChatCommentCellMutedView_h
#define PTVChatCommentCellMutedView_h
@import Foundation;

@class UILabel, UIView, XDSBlur;

@interface PTVChatCommentCellMutedView : UIView {
    /* instance variables */
    XDSBlur *_blurView;
    UILabel *_mutedLabel;
}

@property (nonatomic) _Bool useLargeChatFont;

/* instance methods */
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* PTVChatCommentCellMutedView_h */

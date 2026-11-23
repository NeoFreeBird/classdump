//
#ifndef _TtC11XLiveChatUI18LiveChatRepostCell_h
#define _TtC11XLiveChatUI18LiveChatRepostCell_h
@import Foundation;

#include "TFNAttributedTextViewDelegate-Protocol.h"

@class Swift.Bool, UICollectionViewCell, XLiveChatUI.LiveChatCellViewModelProtocol ?, _$sSo18TUIAvatarImageViewC, _$sSo21TFNAttributedTextViewC, _$sSo6UIViewC, _$syycSg;

@interface XLiveChatUI.LiveChatRepostCell : UICollectionViewCell <TFNAttributedTextViewDelegate> { // (Swift)
    /* instance variables */
    XLiveChatUI.LiveChatCellViewModelProtocol ? viewModel;
    __C.TUIAvatarImageView avatarView;
    __C.TFNAttributedTextView textView;
    __C.UIView highlightedBar;
    Swift.Bool alwaysDark;
    (() -> ())? tapHandler;
}

/* instance methods */
- (void)attributedTextView:(id)view didTapRange:(id)range rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)handleTap:(id)tap;

@end

#endif /* _TtC11XLiveChatUI18LiveChatRepostCell_h */

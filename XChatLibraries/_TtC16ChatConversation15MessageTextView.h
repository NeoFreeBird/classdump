//
#ifndef _TtC16ChatConversation15MessageTextView_h
#define _TtC16ChatConversation15MessageTextView_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"

@class ChatConversation.MessageTextView.Configuration ?, ChatConversation.MessageTextView.LastLineMetrics ?, ChatConversation.MessageTextViewDelegate ?, ChatConversation.MessageTextViewStyle, ChatConversationServices.MessageTextEntityHighlighter ?, ChatModels.ChatMessageItemBubbleStyle, ChatUI.ChatColorProviding ?, ChatUI.MessageExpandButton ?, ChatUI.ScrollViewAwarePressGestureRecognizer ?, ChatUI.ScrollViewAwareTapGestureRecognizer ?, Swift.Bool, UIView, _$sSSSg, _$sSa -> ChatModelsCore.TextEntity, _$sSiSg, _$sSo10UITextViewC, _$sSo12UIScrollViewCSgXw, _$sSo18NSAttributedStringCSg, _$sSo24UIPinchGestureRecognizerCSg, _$sSo6UIFontCSg, _$sSo6UIViewC, _$sSo7UIImageCSg, __C.CGSize ?;

@interface ChatConversation.MessageTextView : UIView <UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    ChatConversation.MessageTextViewDelegate ? delegate;
    weak __C.UIScrollView? scrollView;
    ChatUI.ChatColorProviding ? colorProvider;
    Swift.Bool ownsHorizontalPans;
    __C.UITextView textView;
    __C.UIView backgroundView;
    ChatConversation.MessageTextView.Configuration ? configuration;
    __C.NSAttributedString? baseAttributedText;
    __C.UIFont? attributedTextFont;
    __C.UIImage? leadingImage;
    ChatConversationServices.MessageTextEntityHighlighter ? $__lazy_storage_$_entityHighlighter;
    Swift.String? text;
    Swift.Array -> ChatModelsCore.TextEntity textEntities;
    ChatModels.ChatMessageItemBubbleStyle bubbleStyle;
    Swift.Bool isSupersizedEmoji;
    Swift.Int? maxLines;
    Swift.Bool showsExpandButton;
    Swift.Bool showsPinGlyph;
    ChatConversation.MessageTextViewStyle style;
    Swift.Bool didTriggerExpandPinch;
    ChatUI.ScrollViewAwareTapGestureRecognizer ? $__lazy_storage_$_textTapRecognizer;
    ChatUI.ScrollViewAwarePressGestureRecognizer ? $__lazy_storage_$_textPressRecognizer;
    __C.UIPinchGestureRecognizer? $__lazy_storage_$_expandPinchRecognizer;
    ChatUI.MessageExpandButton ? expandButton;
    ChatConversation.MessageTextView.LastLineMetrics ? cachedMetrics;
    __C.CGSize ? resolvedExpandLayoutSize;
}

/* instance methods */
- (_Bool)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)traitCollectionDidChange:(id)change;
- (void)layoutSubviews;
- (void)handleExpandTap;
- (void)handleExpandPinch:(id)pinch;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)handleTextPress:(id)press;
- (void)handleTextTap:(id)tap;

@end

#endif /* _TtC16ChatConversation15MessageTextView_h */

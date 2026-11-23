//
#ifndef _TtC11XLiveChatUI17LiveChatInputView_h
#define _TtC11XLiveChatUI17LiveChatInputView_h
@import Foundation;

#include "UITextViewDelegate-Protocol.h"

@class Swift.Bool, UIView, XLiveChatUI.LiveChatComposerEditingState _$scSg ->, XLiveChatUI.LiveChatInputDelegateForwarder ?, XLiveChatUI.LiveChatInputViewModelProtocol ?, XLiveChatUI.LiveChatReplyCloseButton, XLiveChatUI.LiveChatRestrictedModeBanner ?, XLiveChatUI.LiveChatSendButton, XLiveChatUI.LiveChatUpsellButton, _$s12CoreGraphics7CGFloatVMn, _$sSa -> XLiveChatUI.LiveChatQuickSendButton, _$sSo11UIImageViewC, _$sSo22TFNPlaceholderTextViewC, _$sSo22UITapGestureRecognizerCSg, _$sSo25UIImpactFeedbackGeneratorC, _$sSo6UIViewC, _$sSo7UIColorCSg, _$sSo7UILabelC, _$syycSg, __C.AnimationOptions _$sSg_SdSgtcSg ->;

@interface XLiveChatUI.LiveChatInputView : UIView <UITextViewDelegate> { // (Swift)
    /* instance variables */
    XLiveChatUI.LiveChatInputViewModelProtocol ? viewModel;
    XLiveChatUI.LiveChatInputDelegateForwarder ? inputDelegateForwarder;
    XLiveChatUI.LiveChatComposerEditingState _$scSg -> composerEditingDidChange;
    __C.UITapGestureRecognizer? tapGesture;
    __C.TFNPlaceholderTextView textInput;
    __C.TFNPlaceholderTextView placeholderTransitioningView;
    XLiveChatUI.LiveChatSendButton sendButton;
    __C.UIView pillBackgroundView;
    __C.UILabel overLimitLabel;
    __C.UIView replyCardView;
    __C.UIView replyIconChipView;
    __C.UIImageView replyIconView;
    __C.UILabel replyTitleLabel;
    __C.UILabel replySubtitleLabel;
    XLiveChatUI.LiveChatReplyCloseButton replyCloseButton;
    __C.UIImpactFeedbackGenerator sendHapticGenerator;
    __C.UILabel restrictedModeLabel;
    XLiveChatUI.LiveChatUpsellButton upsellButton;
    __C.UIView quickSendGroup;
    Swift.Array -> XLiveChatUI.LiveChatQuickSendButton quickSendButtons;
    Swift.Bool wantsQuickSendsVisible;
    XLiveChatUI.LiveChatRestrictedModeBanner ? activeRestrictedModeBanner;
    Swift.Bool isReplyBannerVisible;
    __C.UIColor? pillBorderColor;
    (() -> ())? replyCancelHandler;
    nominal type descriptor for CoreGraphics.CGFloat textInputPlaceholderTransition;
    (() -> ())? tapAction;
    Swift.Bool isTextInputEnabled;
    __C.AnimationOptions _$sSg_SdSgtcSg -> keyboardUpdateHandler;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (void)textViewDidBeginEditing:(id)editing;
- (void)textViewDidEndEditing:(id)editing;
- (void)textViewDidChange:(id)change;
- (void)textViewDidChangeSelection:(id)selection;
- (_Bool)textView:(id)view shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementText:(id)text;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (_Bool)becomeFirstResponder;
- (_Bool)resignFirstResponder;
- (void)didMoveToWindow;
- (void)handleReplyCancelTap;
- (void)keyboardWillShowHandlerWithNotification:(id)notification;
- (void)keyboardWillHideHandlerWithNotification:(id)notification;
- (void)handleTap;
- (void)handleSendTap;
- (void)handleUpsellTap;
- (void)prepareQuickSendHaptic;
- (void)handleQuickSendTap:(id)tap;
- (void)traitCollectionDidChange:(id)change;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC11XLiveChatUI17LiveChatInputView_h */

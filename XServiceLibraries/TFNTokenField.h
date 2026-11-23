//
#ifndef TFNTokenField_h
#define TFNTokenField_h
@import Foundation;

#include "TFNTokenControl.h"
#include "TFNTokenKeyboardEventTextField.h"
#include "TFNTokenKeyboardEventTextFieldDelegate-Protocol.h"
#include "TFNTokenTextField.h"
#include "TFSObjectCache.h"
#include "UITextInputTraits-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, UIColor, UIControl, UIConversationContext, UIFont, UITextInputPasswordRules, UIView;
@protocol TFNTokenFieldDelegate;

@interface TFNTokenField : UIControl <TFNTokenKeyboardEventTextFieldDelegate, UITextInputTraits> {
    /* instance variables */
    NSMutableArray *_tokens;
    TFNTokenControl *_selectedToken;
    TFNTokenKeyboardEventTextField *_hiddenTextField;
    TFNTokenTextField *_textField;
    NSMutableArray *_accessibilityElements;
    NSMutableDictionary *_tokenBackgroundColorsByControlState;
    NSMutableDictionary *_tokenTitleColorsByControlState;
    TFSObjectCache *_layoutCache;
}

@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } edgeInsets;
@property (nonatomic) struct CGSize { double x0; double x1; } tokenPadding;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } tokenEdgeInsets;
@property (nonatomic) double minimumEditingWidth;
@property (retain, nonatomic) NSString *placeholder;
@property (retain, nonatomic) UIView *leftView;
@property (copy, nonatomic) NSString *text;
@property (readonly, nonatomic) _Bool updatingTokenSelectionState;
@property (weak, nonatomic) id <TFNTokenFieldDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic) long long spellCheckingType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long inlinePredictionType;
@property (nonatomic) long long mathExpressionCompletionType;
@property (nonatomic) long long grammarCheckingType;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long returnKeyType;
@property (nonatomic) _Bool enablesReturnKeyAutomatically;
@property (nonatomic) _Bool secureTextEntry;
@property (copy, nonatomic) NSString *textContentType;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property long long writingToolsBehavior;
@property unsigned long long allowedWritingToolsResultOptions;
@property (retain, nonatomic) UIConversationContext *conversationContext;
@property (nonatomic) _Bool allowsNumberPadPopover;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)addTokenWithAttributedTitle:(id)title;
- (id)addTokenWithTitle:(id)title;
- (void)_addToken:(id)token;
- (void)removeAllTokens;
- (void)removeTokenAtIndex:(unsigned long long)index;
- (void)_removeToken:(id)token;
- (void)_selectToken:(id)token;
- (void)_deselectToken;
- (void)clearTextField;
- (void)_updatePlaceholderVisibility;
- (void)_updateLeftViewVisibility;
- (double)lineHeight;
- (unsigned long long)tokenCount;
- (id)allTokens;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForCurrentAreaOfFocus;
- (_Bool)isAccessibilityElement;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)index;
- (long long)indexOfAccessibilityElement:(id)element;
- (id)tokenBackgroundColorForState:(unsigned long long)state;
- (void)setTokenBackgroundColor:(id)color forState:(unsigned long long)state;
- (id)tokenTitleColorForState:(unsigned long long)state;
- (void)setTokenTitleColor:(id)color forState:(unsigned long long)state;
- (void)_tokenTouchDown:(id)down;
- (void)_tokenTouchUpInside:(id)inside;
- (void)_tokenAccessibilityActionRemove:(id)remove;
- (void)_textFieldEditingDidBegin:(id)begin;
- (void)_textFieldEditingChanged:(id)changed;
- (void)_textFieldEditingDidEnd:(id)end;
- (void)_hiddenTextFieldEditingDidEnd:(id)end;
- (void)textFieldDidBeginEditing:(id)editing;
- (void)textFieldDidEndEditing:(id)editing;
- (_Bool)textFieldShouldReturn:(id)_return;
- (void)_textFieldDidReturnText:(id)text;
- (_Bool)textField:(id)field shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementString:(id)string;
- (void)textFieldDidReceiveDeleteKeyOnEmptyText:(id)text;
- (_Bool)textFieldShouldResignFirstResponder:(id)responder;
- (void)textFieldWillAttemptToBecomeFirstResponder:(id)responder;
- (void)textField:(id)field didAttemptToBecomeFirstResponder:(_Bool)responder;
- (void)textFieldWillAttemptToResignFirstResponder:(id)responder;
- (void)textField:(id)field didAttemptToResignFirstResponder:(_Bool)responder;
- (_Bool)canBecomeFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)isFirstResponder;
- (_Bool)canResignFirstResponder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })_leftViewSize;
- (void)_nextLineRect:(inout struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)rect resetPosition:(out struct CGPoint { double x0; double x1; } *)position inWidth:(double)width withLeftViewSize:(struct CGSize { double x0; double x1; })size minimumLineHeight:(double)height;
- (id)_layoutForWidth:(double)width;
- (void)_layoutWithLayout:(id)layout;
- (void)_cacheLayout:(id)layout;
- (id)_cachedLayoutForWidth:(double)width layoutDirection:(long long)direction;
- (id)_cacheKeyForWidth:(double)width layoutDirection:(long long)direction;
- (void)_invalidateLayoutCache;
- (_Bool)isSecureTextEntry;

@end

#endif /* TFNTokenField_h */

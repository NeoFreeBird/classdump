//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC17TwitterTextEditor14TextEditorView_h
#define _TtC17TwitterTextEditor14TextEditorView_h
@import Foundation;

#include "NSTextStorageDelegate-Protocol.h"
#include "UITextDragDelegate-Protocol.h"
#include "UITextDropDelegate-Protocol.h"
#include "UITextInputTraits-Protocol.h"
#include "UITextViewDelegate-Protocol.h"
#include "_TtP17TwitterTextEditor25TextViewTextPasteDelegate_-Protocol.h"

@class NSArray, NSString, Swift.Bool, TwitterTextEditor.ContentFilterScheduler _$sySo18NSAttributedStringCACSgGSg, TwitterTextEditor.DebounceScheduler ?, TwitterTextEditor.EditingContent, TwitterTextEditor.TextEditorView.DefaultTextPasteObserver, TwitterTextEditor.TextEditorView.LocalTextDragContext ?, TwitterTextEditor.TextEditorViewChangeObserver ?, TwitterTextEditor.TextEditorViewEditingContentDelegate ?, TwitterTextEditor.TextEditorViewEditingDelegate ?, TwitterTextEditor.TextEditorViewSelectionDelegate ?, TwitterTextEditor.TextEditorViewTextAttributesDelegate ?, TwitterTextEditor.TextEditorViewTextInputObserver ?, TwitterTextEditor.TextView, UIColor, UIInputViewController, UITextInputPasswordRules, UIView, _$sSSSg, _$sSa -> TwitterTextEditor.TextEditorViewPasteObserver, _$sSi, _$sSo10UITextViewCSg, _$sSo13NSTextStorageC, _$sSo21UIInputViewControllerCSg, _$sSo6UIViewCSg, _$sSo7UIColorCSg, __C.NSLineBreakMode;

@interface TwitterTextEditor.TextEditorView : UIView <UITextInputTraits, UITextDropDelegate, UITextDragDelegate, TwitterTextEditor.TextViewTextPasteDelegate, UITextViewDelegate, NSTextStorageDelegate> { // (Swift)
    /* instance variables */
    __C.NSTextStorage textStorage;
    TwitterTextEditor.TextView textView;
    TwitterTextEditor.DebounceScheduler ? updatePlaceholderTextScheduler;
    TwitterTextEditor.ContentFilterScheduler _$sySo18NSAttributedStringCACSgGSg updateTextAttributesScheduler;
    TwitterTextEditor.TextEditorViewEditingDelegate ? editingDelegate;
    TwitterTextEditor.TextEditorViewTextInputObserver ? textInputObserver;
    TwitterTextEditor.TextEditorViewEditingContentDelegate ? editingContentDelegate;
    TwitterTextEditor.TextEditorViewTextAttributesDelegate ? textAttributesDelegate;
    TwitterTextEditor.TextEditorViewSelectionDelegate ? textSelectionDelegate;
    TwitterTextEditor.TextEditorViewChangeObserver ? changeObserver;
    Swift.Array -> TwitterTextEditor.TextEditorViewPasteObserver pasteObservers;
    TwitterTextEditor.TextEditorView.DefaultTextPasteObserver defaultTextPasteObserver;
    TwitterTextEditor.EditingContent editingContent;
    Swift.Bool isUserInteractionBeingProcessed;
    Swift.Bool isApplyingEditingContentUpdate;
    Swift.Bool returnToEndEditingEnabled;
    Swift.String? inputPrimaryLanguage;
    Swift.Bool isScrollEnabled;
    TwitterTextEditor.TextEditorView.LocalTextDragContext ? currentTextDragSessionLocalContext;
    Swift.Bool isDropInteractionEnabled;
    __C.UITextView? placeholderTextView;
    Swift.String? placeholderText;
    __C.UIColor? placeholderTextColor;
    __C.NSLineBreakMode placeholderTextLineBreakMode;
    Swift.Int maximumNumberOfLinesForPlaceholderText;
}

@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic) long long spellCheckingType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long returnKeyType;
@property (nonatomic) _Bool enablesReturnKeyAutomatically;
@property (nonatomic) _Bool secureTextEntry;
@property (nonatomic, copy) NSString *textContentType;
@property (nonatomic, retain) UITextInputPasswordRules *passwordRules;
@property (nonatomic, readonly) NSArray *richTextTags;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic, readonly) _Bool canBecomeFirstResponder;
@property (nonatomic, readonly) _Bool canResignFirstResponder;
@property (nonatomic, readonly) _Bool isFirstResponder;
@property (nonatomic, retain) UIView *inputAccessoryView;
@property (nonatomic, retain) UIInputViewController *inputAccessoryViewController;
@property (nonatomic, retain) UIView *inputView;
@property (nonatomic, retain) UIInputViewController *inputViewController;

/* instance methods */
- (_Bool)isSecureTextEntry;
- (id)textDroppableView:(id)view proposalForDrop:(id)drop;
- (void)textDraggableView:(id)view dragSessionWillBegin:(id)begin;
- (void)textDraggableView:(id)view dragSessionDidEnd:(id)end withOperation:(unsigned long long)operation;
- (_Bool)textPasteConfigurationSupporting:(id)supporting canPaste:(id)paste;
- (void)textPasteConfigurationSupporting:(id)supporting transformPasteItem:(id)item;
- (_Bool)textPasteConfigurationSupporting:(id)supporting shouldAnimatePasteOfAttributedString:(id)string toRange:(id)range;
- (_Bool)textViewShouldBeginEditing:(id)editing;
- (void)textViewDidBeginEditing:(id)editing;
- (void)textViewDidEndEditing:(id)editing;
- (_Bool)textView:(id)view shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementText:(id)text;
- (void)textViewDidChangeSelection:(id)selection;
- (void)textViewDidChange:(id)change;
- (void)textStorage:(id)storage willProcessEditing:(unsigned long long)editing range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range changeInLength:(long long)length;
- (void)textStorage:(id)storage didProcessEditing:(unsigned long long)editing range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range changeInLength:(long long)length;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)textInputModeDidChange:(id)change;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)didMoveToWindow;
- (_Bool)becomeFirstResponder;
- (_Bool)resignFirstResponder;
- (void)reloadInputViews;

@end

#endif /* _TtC17TwitterTextEditor14TextEditorView_h */

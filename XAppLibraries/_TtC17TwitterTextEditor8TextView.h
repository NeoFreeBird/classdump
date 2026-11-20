//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC17TwitterTextEditor8TextView_h
#define _TtC17TwitterTextEditor8TextView_h
@import Foundation;

#include "UITextViewDelegate-Protocol.h"

@class NSString, Swift.Bool, TwitterTextEditor.TextView.TextInputPasteboardObserverCache _$s_Sb, TwitterTextEditor.TextViewDelegateForwarder, TwitterTextEditor.TextViewTextInputDelegate ?, UIPasteConfiguration, UITextInputMode, UITextView, _$sSS, _$sSSSg;

@interface TwitterTextEditor.TextView : UITextView { // (Swift)
    /* instance variables */
    Swift.String? preferredTextInputModePrimaryLanguage;
    Swift.Bool shouldWorkaroundTextInputModeBug;
    Swift.Bool changeTextWritingDirectionActionsEnabled;
    TwitterTextEditor.TextView.TextInputPasteboardObserverCache  first-element-marker Swift.Bool pasteboardObserverCache;
    Swift.String preferredTextInputModeContextIdentifier;
    TwitterTextEditor.TextViewTextInputDelegate ? textViewTextInputDelegate;
    Swift.String returnTextInputInsertText;
    TwitterTextEditor.TextViewDelegateForwarder delegateForwarder;
}

@property (nonatomic, retain) UIPasteConfiguration *pasteConfiguration;
@property (nonatomic, readonly) NSString *textInputContextIdentifier;
@property (nonatomic, readonly) UITextInputMode *textInputMode;
@property (nonatomic, retain) id <UITextViewDelegate> delegate;

/* instance methods */
- (_Bool)canPerformAction:(SEL)action withSender:(id)sender;
- (_Bool)becomeFirstResponder;
- (void)insertText:(id)text;
- (void)deleteBackward;
- (void)setBaseWritingDirection:(long long)direction forRange:(id)range;
- (_Bool)canPasteItemProviders:(id)providers;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame textContainer:(id)container;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC17TwitterTextEditor8TextView_h */

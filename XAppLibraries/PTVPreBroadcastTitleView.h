//
#ifndef PTVPreBroadcastTitleView_h
#define PTVPreBroadcastTitleView_h
@import Foundation;

#include "NSTextStorageDelegate-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"
#include "UITextViewDelegate-Protocol.h"

@class NSString, UILabel, UITapGestureRecognizer, UITextView, UIView;

@interface PTVPreBroadcastTitleView : UIView <UITextViewDelegate, NSTextStorageDelegate, UIGestureRecognizerDelegate> {
    /* instance variables */
    UITapGestureRecognizer *_tapToCloseGestureRecognizer;
}

@property (readonly, nonatomic) UITextView *statusTextView;
@property (retain, nonatomic) UIView *keyboardTitleAccessoryView;
@property (readonly, nonatomic) UILabel *placeholderLabel;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) unsigned long long remainingCharacterLimit;
@property (retain, nonatomic) UIView *topAccessoryView;
@property (retain, nonatomic) UIView *bottomFloatingAccessoryView;
@property (weak, nonatomic) id <UITextViewDelegate> textViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })textSizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (_Bool)textView:(id)view shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementText:(id)text;
- (void)textViewDidChange:(id)change;
- (void)textViewDidChangeSelection:(id)selection;
- (void)textStorage:(id)storage didProcessEditing:(unsigned long long)editing range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range changeInLength:(long long)length;
- (id)initWithTitle:(id)title;
- (void)setupPTVPreBroadcastTitleView;
- (void)updateTitleViewState;
- (void)setupTapToCloseGesture;
- (void)handleTapToClose;
- (_Bool)canTapToClose;
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (void)layoutStatusTextView;
- (void)layoutPlaceholder;
- (_Bool)hasTitle;
- (void)layoutBottomFloatingAccessoryView;

@end

#endif /* PTVPreBroadcastTitleView_h */

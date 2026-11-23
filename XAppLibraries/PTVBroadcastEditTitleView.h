//
#ifndef PTVBroadcastEditTitleView_h
#define PTVBroadcastEditTitleView_h
@import Foundation;

#include "PTVBroadcastEditTitleViewDelegate-Protocol.h"
#include "PTVBroadcastEditViewModel.h"
#include "PTVBroadcastEditViewModelObserver-Protocol.h"
#include "PTVSelectableLinkTextView.h"
#include "UITextViewDelegate-Protocol.h"

@class NSString, UITextView, UIView;

@interface PTVBroadcastEditTitleView : UIView <UITextViewDelegate, PTVBroadcastEditViewModelObserver>

@property (readonly, weak, nonatomic) id <PTVBroadcastEditTitleViewDelegate> delegate;
@property (readonly, nonatomic) PTVSelectableLinkTextView *statusLabel;
@property (readonly, nonatomic) PTVBroadcastEditViewModel *viewModel;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) UITextView *titleTextView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)EditStatusTextFont;
+ (id)EditStatusTextColor;
+ (id)EditStatusTextAttributes;
+ (id)EditStatusTextLinkAttributes;
+ (id)AttributedEditStatusTextFromDelimitedString:(id)string;

/* instance methods */
- (id)initWithDelegate:(id)delegate viewModel:(id)model;
- (_Bool)textView:(id)view shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementText:(id)text;
- (void)textViewDidBeginEditing:(id)editing;
- (void)textViewDidChange:(id)change;
- (void)textViewDidEndEditing:(id)editing;
- (void)endEditingTitle;
- (void)updateEditableState;
- (void)broadcastEditViewModelDidCompleteEditBroadcast:(id)broadcast;

@end

#endif /* PTVBroadcastEditTitleView_h */

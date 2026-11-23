//
#ifndef T1TweetComposeSocialContextTextView_h
#define T1TweetComposeSocialContextTextView_h
@import Foundation;

#include "T1TweetComposeSocialContext.h"
#include "T1TweetComposeSocialContextTextViewDelegate-Protocol.h"
#include "TFNAttributedTextViewDelegate-Protocol.h"

@class NSString, TFNAttributedTextView, UIView;

@interface T1TweetComposeSocialContextTextView : UIView <TFNAttributedTextViewDelegate>

@property (readonly, nonatomic) TFNAttributedTextView *textView;
@property (copy, nonatomic) id /* block */ customAttributedText;
@property (weak, nonatomic) id <T1TweetComposeSocialContextTextViewDelegate> delegate;
@property (copy, nonatomic) T1TweetComposeSocialContext *socialContext;
@property (nonatomic) unsigned long long maximumNumberOfLines;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_t1_composeSocialContextTextView_initialize;
- (void)encodeWithCoder:(id)coder;
- (void)applyTextColor:(id)color detailsColor:(id)color linkColor:(id)color;
- (void)applyTextColor:(id)color detailsColor:(id)color linkColor:(id)color font:(id)font;
- (void)_t1_private_updateTextView;
- (void)_t1_private_updateAccessibilityValue;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)attributedTextView:(id)view didTapRange:(id)range rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;

@end

#endif /* T1TweetComposeSocialContextTextView_h */

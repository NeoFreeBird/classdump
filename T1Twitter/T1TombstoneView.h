//
#ifndef T1TombstoneView_h
#define T1TombstoneView_h
@import Foundation;

#include "T1TombstoneViewDelegate-Protocol.h"
#include "T1URTRichTextInteractionHandler-Protocol.h"
#include "TFNAttributedTextViewDelegate-Protocol.h"
#include "TFNLayoutMetricsEnvironment-Protocol.h"

@class NSArray, NSString, TFNAttributedTextView, UIView;

@interface T1TombstoneView : UIView <TFNLayoutMetricsEnvironment, TFNAttributedTextViewDelegate> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *paragraphSpacing;
    NSNumber"16@0:8 *button;
    NSNumber"16@0:8 *textView;
    NSNumber"16@0:8 *buttonRichText;
}

@property (nonatomic, weak) id <T1TombstoneViewDelegate> delegate;
@property (nonatomic, retain) id <T1URTRichTextInteractionHandler> interactionHandler;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic, readonly) TFNAttributedTextView *attributedTextView;
@property (nonatomic, readonly) NSArray *allActiveRanges;
@property (nonatomic, readonly) NSString *buttonText;

/* class methods */
+ (double)heightWith:(id)with buttonRichText:(id)text width:(double)width layoutMetrics:(id)metrics;
+ (double)heightWith:(id)with buttonRichText:(id)text width:(double)width layoutMetrics:(id)metrics paragraphSpacing:(double)spacing;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame paragraphSpacing:(double)spacing;
- (id)initWithCoder:(id)coder;
- (void)updateWith:(id)with buttonRichText:(id)text;
- (void)layoutSubviews;
- (void)buttonTapped;
- (id)quotedTweetTombstoneAccessibilityCustomAction;
- (void)layoutMetricsDidChange:(id)change to:(id)to;

@end

#endif /* T1TombstoneView_h */

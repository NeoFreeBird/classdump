//
#ifndef T1ComposerQuoteVideoPresentationHost_Protocol_h
#define T1ComposerQuoteVideoPresentationHost_Protocol_h
@import Foundation;

#include "T1QuotedStandardStatusView.h"
#include "T1VideoEmbedComposerPreviewController.h"

@class TFNTwitterStatus, UIView, UIViewController;

@protocol T1ComposerQuoteVideoPresentationHost

@required

@property (nonatomic, readonly) UIView *quoteVideoHostView;
@property (nonatomic, readonly) T1VideoEmbedComposerPreviewController *quoteVideoEmbedPreviewController;
@property (nonatomic, readonly) T1QuotedStandardStatusView *quoteVideoQuotedStatusView;
@property (nonatomic, readonly) TFNTwitterStatus *quoteVideoDisplayedQuotedStatus;
@property (nonatomic, readonly) _Bool quoteVideoIsQuotedStatusDisplayed;
@property (nonatomic, readonly) _Bool quoteVideoIsEditingStyle;
@property (nonatomic, readonly) _Bool quoteVideoCanToggle;
@property (nonatomic, readonly) _Bool quoteVideoCanToggleToQuote;
@property (nonatomic, readonly) _Bool quoteVideoCanToggleToEmbed;
@property (nonatomic, readonly) UIViewController *quoteVideoPresentingViewController;

/* required instance methods */
- (void)quoteVideoRequestToggleToQuote;
- (void)quoteVideoRequestToggleToEmbed;
- (void)quoteVideoApplyEmbedURLString:(id)urlstring;

@optional

@end

#endif /* T1ComposerQuoteVideoPresentationHost_Protocol_h */

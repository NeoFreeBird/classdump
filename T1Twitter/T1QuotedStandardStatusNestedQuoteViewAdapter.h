//
#ifndef T1QuotedStandardStatusNestedQuoteViewAdapter_h
#define T1QuotedStandardStatusNestedQuoteViewAdapter_h
@import Foundation;

@class TFNComposableViewAdapter;

@interface T1QuotedStandardStatusNestedQuoteViewAdapter : TFNComposableViewAdapter // (Swift)

/* class methods */
+ (_Bool)shouldShowNestedQuotedStatusForViewModel:(id)model;
+ (_Bool)shouldShowNestedQuotePreviewForQuotedStatusViewModel:(id)model quotingStatusViewModel:(id)model account:(id)account;
+ (_Bool)shouldShowNestedQuotePreviewInComposerForQuotedStatusViewModel:(id)model account:(id)account;
+ (_Bool)composerContextSuppressesNestedQuotePreviewForQuotedStatusViewModel:(id)model account:(id)account hasMediaAttachments:(_Bool)attachments isReply:(_Bool)reply isPartOfThread:(_Bool)thread;

/* instance methods */
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (id)initializeView;
- (void)view:(id)view willMoveToHostView:(id)view;
- (void)setViewModel:(id)model forView:(id)view;
- (void)unsetViewModelForView:(id)view;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (_Bool)isLayoutState:(id)state validForViewModel:(id)model layoutMetrics:(id)metrics;
- (id)initWithViewIdentifier:(long long)identifier;

@end

#endif /* T1QuotedStandardStatusNestedQuoteViewAdapter_h */

//
#ifndef T1QuotedStatusParameters_h
#define T1QuotedStatusParameters_h
@import Foundation;

@class NSObject, TFSTimer;

@interface T1QuotedStatusParameters : NSObject {
    /* instance variables */
    TFSTimer *_updateTimer;
}

/* class methods */
+ (id)sharedParameters;
+ (double)_lineHeightBasicUnitForLayoutMetrics:(id)metrics;

/* instance methods */
- (id)init;
- (double)inlineActionTopMarginWithLayoutMetrics:(id)metrics;
- (double)authorBodyMarginWithLayoutMetrics:(id)metrics;
- (double)authorBodyMarginForConversationWithLayoutMetrics:(id)metrics;
- (double)conversationContextMarginWithLayoutMetrics:(id)metrics;
- (double)mediaTextMarginWithLayoutMetrics:(id)metrics;
- (double)mediaVerticalMarginWithLayoutMetrics:(id)metrics;
- (double)mediaVerticalTextMarginWithLayoutMetrics:(id)metrics;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentEdgeInsetsWithLayoutMetrics:(id)metrics;
- (double)mediaMaxWidthWithLayoutMetrics:(id)metrics;
- (double)mediaForwardMaxWidthWithLayoutMetrics:(id)metrics;
- (struct CGSize { double x0; double x1; })mediaPreviewCompactSizeWithLayoutMetrics:(id)metrics;
- (void)tfx_inlineActionTopMarginParameterChanged;
- (void)tfx_authorBodyMarginParameterChanged;
- (void)tfx_mediaTextMarginParameterChanged;
- (void)tfx_contentEdgeInsetsValueParameterChanged;
- (void)tfx_mediaMaxWidthParameterChanged;
- (void)_coalesceUpdates;
- (void)_performUpdate;

@end

#endif /* T1QuotedStatusParameters_h */

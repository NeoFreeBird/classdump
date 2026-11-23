//
#ifndef TAFAppAdImpressionHandler_Protocol_h
#define TAFAppAdImpressionHandler_Protocol_h
@import Foundation;

@protocol TAFAppAdImpressionHandler

@required

/* required instance methods */
- (void)startImpressionWithPromotedContent:(id)content scribeContext:(id)context;
- (void)endImpressionWithPromotedContent:(id)content scribeContext:(id)context;

@optional

@end

#endif /* TAFAppAdImpressionHandler_Protocol_h */

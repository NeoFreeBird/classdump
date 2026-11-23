//
#ifndef TAFEventLogger_Protocol_h
#define TAFEventLogger_Protocol_h
@import Foundation;

@protocol TAFEventLogger

@required

/* required instance methods */
- (void)logClientEventForAction:(id)action page:(id)page section:(id)section component:(id)component element:(id)element parameters:(id)parameters;
- (void)logPromotedEventWithParameters:(id)parameters promotedContent:(id)content scribeContext:(id)context;
- (void)logRawPromotedEventWithEvent:(long long)event withParameters:(id)parameters promotedContent:(id)content scribeContext:(id)context;

@optional

@end

#endif /* TAFEventLogger_Protocol_h */

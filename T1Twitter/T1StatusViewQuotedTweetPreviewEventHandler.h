//
#ifndef T1StatusViewQuotedTweetPreviewEventHandler_h
#define T1StatusViewQuotedTweetPreviewEventHandler_h
@import Foundation;

@class NSObject;

@interface T1StatusViewQuotedTweetPreviewEventHandler : NSObject

/* instance methods */
- (id)handleStatusViewEvent:(id)event controller:(id)controller scribeContext:(id)context;

@end

#endif /* T1StatusViewQuotedTweetPreviewEventHandler_h */

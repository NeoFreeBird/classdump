//
#ifndef T1StatusViewConversationContextPreviewingEventHandler_h
#define T1StatusViewConversationContextPreviewingEventHandler_h
@import Foundation;

@class NSObject;

@interface T1StatusViewConversationContextPreviewingEventHandler : NSObject

/* instance methods */
- (id)handleStatusViewEvent:(id)event controller:(id)controller scribeContext:(id)context;

@end

#endif /* T1StatusViewConversationContextPreviewingEventHandler_h */

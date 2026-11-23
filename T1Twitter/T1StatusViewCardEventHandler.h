//
#ifndef T1StatusViewCardEventHandler_h
#define T1StatusViewCardEventHandler_h
@import Foundation;

@class NSObject, TUICardViewEventHandlerRegistry;

@interface T1StatusViewCardEventHandler : NSObject

@property (retain, nonatomic) TUICardViewEventHandlerRegistry *handlerRegistry;

/* instance methods */
- (id)handleStatusViewEvent:(id)event controller:(id)controller zoomProvider:(id)provider cardScribeContextProvider:(id)provider;

@end

#endif /* T1StatusViewCardEventHandler_h */

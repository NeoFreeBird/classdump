//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

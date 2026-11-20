//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCDestinationHandler_Protocol_h
#define TUCDestinationHandler_Protocol_h
@import Foundation;

@protocol TUCDestinationHandler

@required

/* class methods */
+ (id)handlerWithContext:(id)context;

/* required instance methods */
- (void)handleClickWithCompletion:(id /* block */)completion;
- (id)handleForceTouchWithCompletion:(id /* block */)completion;

@optional

@end

#endif /* TUCDestinationHandler_Protocol_h */

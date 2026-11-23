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

//
#ifndef TUCPlayableWebViewControllerFactory_Protocol_h
#define TUCPlayableWebViewControllerFactory_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TUCPlayableWebViewControllerFactory <NSObject>

@required

/* required instance methods */
- (id)webViewControllerWithDelegate:(id)delegate;
- (id)webViewControllerWithDelegate:(id)delegate;

@optional

@end

#endif /* TUCPlayableWebViewControllerFactory_Protocol_h */

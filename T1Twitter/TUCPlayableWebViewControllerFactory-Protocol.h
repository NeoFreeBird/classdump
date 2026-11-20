//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

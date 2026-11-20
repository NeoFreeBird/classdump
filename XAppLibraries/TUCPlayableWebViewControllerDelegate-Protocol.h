//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCPlayableWebViewControllerDelegate_Protocol_h
#define TUCPlayableWebViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TUCPlayableWebViewControllerDelegate <NSObject>

@required

/* required instance methods */
- (void)didFinishLoadingWithSuccess:(_Bool)success;
- (void)didFinishLoadingWithSuccess:(_Bool)success;
- (void)didLaunchDestination;

@optional

@end

#endif /* TUCPlayableWebViewControllerDelegate_Protocol_h */

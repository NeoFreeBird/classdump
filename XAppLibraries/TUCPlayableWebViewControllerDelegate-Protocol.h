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

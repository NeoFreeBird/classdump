//
#ifndef T1ComposeViewControllerDelegate_Protocol_h
#define T1ComposeViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1ComposeViewControllerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)composeViewController:(id)controller dismissAnimated:(_Bool)animated compositionSent:(_Bool)sent;

@end

#endif /* T1ComposeViewControllerDelegate_Protocol_h */

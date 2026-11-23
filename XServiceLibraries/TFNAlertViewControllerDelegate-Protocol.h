//
#ifndef TFNAlertViewControllerDelegate_Protocol_h
#define TFNAlertViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNAlertViewControllerDelegate <NSObject>

@required

/* required instance methods */
- (void)alertViewControllerDidAnimateOut:(id)out;

@optional

@end

#endif /* TFNAlertViewControllerDelegate_Protocol_h */

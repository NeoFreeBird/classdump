//
#ifndef PTVCopyrightViolationViewControllerDelegate_Protocol_h
#define PTVCopyrightViolationViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVCopyrightViolationViewControllerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)copyrightViolationViewControllerDidConfirmViolation:(id)violation;
- (void)copyrightViolationViewControllerDidSelectHasBroadcastingRights:(id)rights;
- (void)copyrightViolationViewControllerDidSelectDismiss:(id)dismiss;

@end

#endif /* PTVCopyrightViolationViewControllerDelegate_Protocol_h */

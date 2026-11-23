//
#ifndef PTVCopyrightViolationViewDelegate_Protocol_h
#define PTVCopyrightViolationViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVCopyrightViolationViewDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)copyrightViolationViewDidSelectConfirmViolation:(id)violation;
- (void)copyrightViolationViewDidSelectDisputeViolation:(id)violation;
- (void)copyrightViolationViewDidSelectHasBroadcastingRights:(id)rights;
- (void)copyrightViolationViewDidSelectDismiss:(id)dismiss;

@end

#endif /* PTVCopyrightViolationViewDelegate_Protocol_h */

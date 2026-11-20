//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

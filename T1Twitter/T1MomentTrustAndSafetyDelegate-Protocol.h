//
#ifndef T1MomentTrustAndSafetyDelegate_Protocol_h
#define T1MomentTrustAndSafetyDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1MomentTrustAndSafetyDelegate <NSObject>

@required

/* required instance methods */
- (void)momentEventViewControllerDidReportStatus:(id)status;
- (void)momentEventViewControllerDidBlockStatus:(id)status;
- (void)momentEventViewControllerDidUnblockStatus:(id)status;

@optional

@end

#endif /* T1MomentTrustAndSafetyDelegate_Protocol_h */

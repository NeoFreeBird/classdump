//
#ifndef GADMediationRewardedAdEventDelegate_Protocol_h
#define GADMediationRewardedAdEventDelegate_Protocol_h
@import Foundation;

#include "GADMediationAdEventDelegate-Protocol.h"

@protocol GADMediationRewardedAdEventDelegate <GADMediationAdEventDelegate>

@required

/* required instance methods */
- (void)didRewardUser;
- (void)didStartVideo;
- (void)didEndVideo;

@optional

@end

#endif /* GADMediationRewardedAdEventDelegate_Protocol_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

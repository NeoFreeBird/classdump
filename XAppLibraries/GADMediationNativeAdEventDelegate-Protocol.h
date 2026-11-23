//
#ifndef GADMediationNativeAdEventDelegate_Protocol_h
#define GADMediationNativeAdEventDelegate_Protocol_h
@import Foundation;

#include "GADMediationAdEventDelegate-Protocol.h"

@protocol GADMediationNativeAdEventDelegate <GADMediationAdEventDelegate>

@required

/* required instance methods */
- (void)didPlayVideo;
- (void)didPauseVideo;
- (void)didEndVideo;
- (void)didMuteVideo;
- (void)didUnmuteVideo;

@optional

@end

#endif /* GADMediationNativeAdEventDelegate_Protocol_h */

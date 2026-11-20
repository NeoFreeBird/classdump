//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

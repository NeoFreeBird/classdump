//
#ifndef GADRewardedInterstitialSignalRequest_h
#define GADRewardedInterstitialSignalRequest_h
@import Foundation;

#include "GADSignalRequest.h"

@interface GADRewardedInterstitialSignalRequest : GADSignalRequest

/* instance methods */
- (id)initWithSignalType:(id)type;
- (id)adType;

@end

#endif /* GADRewardedInterstitialSignalRequest_h */

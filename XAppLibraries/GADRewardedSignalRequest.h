//
#ifndef GADRewardedSignalRequest_h
#define GADRewardedSignalRequest_h
@import Foundation;

#include "GADSignalRequest.h"

@interface GADRewardedSignalRequest : GADSignalRequest

/* instance methods */
- (id)initWithSignalType:(id)type;
- (id)adType;

@end

#endif /* GADRewardedSignalRequest_h */

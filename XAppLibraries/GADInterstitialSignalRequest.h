//
#ifndef GADInterstitialSignalRequest_h
#define GADInterstitialSignalRequest_h
@import Foundation;

#include "GADSignalRequest.h"

@interface GADInterstitialSignalRequest : GADSignalRequest

/* instance methods */
- (id)initWithSignalType:(id)type;
- (id)adType;

@end

#endif /* GADInterstitialSignalRequest_h */

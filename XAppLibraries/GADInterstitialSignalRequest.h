//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

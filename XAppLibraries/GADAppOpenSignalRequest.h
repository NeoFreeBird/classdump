//
#ifndef GADAppOpenSignalRequest_h
#define GADAppOpenSignalRequest_h
@import Foundation;

#include "GADSignalRequest.h"

@interface GADAppOpenSignalRequest : GADSignalRequest

/* instance methods */
- (id)initWithSignalType:(id)type;
- (id)adType;

@end

#endif /* GADAppOpenSignalRequest_h */

//
#ifndef UIBarPositioningDelegate_Protocol_h
#define UIBarPositioningDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol UIBarPositioningDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (long long)positionForBar:(id)bar;

@end

#endif /* UIBarPositioningDelegate_Protocol_h */

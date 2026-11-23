//
#ifndef TFNTwitterTimelineManagerProvider_Protocol_h
#define TFNTwitterTimelineManagerProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNTwitterTimelineManagerProvider <NSObject>

@required

/* required instance methods */
- (id)timelineManagerForAccount:(id)account;

@optional

@end

#endif /* TFNTwitterTimelineManagerProvider_Protocol_h */

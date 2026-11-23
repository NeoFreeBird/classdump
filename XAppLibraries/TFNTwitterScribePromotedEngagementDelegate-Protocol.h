//
#ifndef TFNTwitterScribePromotedEngagementDelegate_Protocol_h
#define TFNTwitterScribePromotedEngagementDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNTwitterScribePromotedEngagementDelegate <NSObject>

@required

/* required instance methods */
- (void)scribeDidLogPromotedLatencySensitiveEvent:(id)event;

@optional

@end

#endif /* TFNTwitterScribePromotedEngagementDelegate_Protocol_h */

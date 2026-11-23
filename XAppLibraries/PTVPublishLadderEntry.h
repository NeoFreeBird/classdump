//
#ifndef PTVPublishLadderEntry_h
#define PTVPublishLadderEntry_h
@import Foundation;

#include "PTVPublishParams.h"

@class NSObject;

@interface PTVPublishLadderEntry : NSObject

@property (readonly, nonatomic) int bandwidthLimit;
@property (readonly, nonatomic) PTVPublishParams *publishParams;

/* instance methods */
- (id)initWithParams:(id)params andBandwidthLimit:(int)limit;

@end

#endif /* PTVPublishLadderEntry_h */

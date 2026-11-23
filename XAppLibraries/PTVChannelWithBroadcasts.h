//
#ifndef PTVChannelWithBroadcasts_h
#define PTVChannelWithBroadcasts_h
@import Foundation;

#include "PTVChannel.h"

@class NSArray, NSObject;

@interface PTVChannelWithBroadcasts : NSObject

@property (readonly, nonatomic) PTVChannel *channel;
@property (retain, nonatomic) NSArray *broadcasts;

/* instance methods */
- (id)initWithChannel:(id)channel broadcasts:(id)broadcasts;

@end

#endif /* PTVChannelWithBroadcasts_h */

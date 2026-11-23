//
#ifndef PTVJanusTrickleMessage_h
#define PTVJanusTrickleMessage_h
@import Foundation;

#include "PTVJanusMessage.h"

@class NSString;

@interface PTVJanusTrickleMessage : PTVJanusMessage

@property (readonly, nonatomic) int sdpMLineIndex;
@property (readonly, nonatomic) NSString *sdpMid;
@property (readonly, nonatomic) NSString *candidate;

/* instance methods */
- (id)initWithSdpMLineIndex:(int)index sdpMid:(id)mid candidate:(id)candidate;
- (id)JSONDictionary;

@end

#endif /* PTVJanusTrickleMessage_h */

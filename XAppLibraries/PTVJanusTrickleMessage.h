//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

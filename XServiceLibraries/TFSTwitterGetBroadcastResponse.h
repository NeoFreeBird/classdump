//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterGetBroadcastResponse_h
#define TFSTwitterGetBroadcastResponse_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "TFSTwitterBroadcast.h"

@class NSObject, NSString;

@interface TFSTwitterGetBroadcastResponse : NSObject <NSCoding> // (Swift)

@property (nonatomic, readonly) TFSTwitterBroadcast *broadcast;
@property (nonatomic, readonly) NSString *unavailableBroadcastID;

/* instance methods */
- (id)initWithBroadcast:(id)broadcast;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)init;

@end

#endif /* TFSTwitterGetBroadcastResponse_h */

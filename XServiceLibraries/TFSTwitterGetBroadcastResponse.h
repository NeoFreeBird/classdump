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

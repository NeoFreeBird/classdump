//
#ifndef TFSTwitterViewCountInfo_h
#define TFSTwitterViewCountInfo_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSNumber, NSObject, NSString;

@interface TFSTwitterViewCountInfo : NSObject <NSCopying, NSCoding> // (Swift)

@property (nonatomic, readonly) NSNumber *count;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)copyWithZone:(void *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)init;

@end

#endif /* TFSTwitterViewCountInfo_h */

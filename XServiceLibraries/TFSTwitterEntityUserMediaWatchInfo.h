//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterEntityUserMediaWatchInfo_h
#define TFSTwitterEntityUserMediaWatchInfo_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSObject, NSString;

@interface TFSTwitterEntityUserMediaWatchInfo : NSObject <NSCopying, NSSecureCoding> // (Swift)

@property (nonatomic) long long lastUpdatedAt;
@property (nonatomic) long long lastWatchedSeconds;
@property (nonatomic, copy) NSString *statusID;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

/* class methods */
+ (_Bool)supportsSecureCoding;
+ (void)setSupportsSecureCoding:(_Bool)coding;

/* instance methods */
- (id)copyWithZone:(void *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFSTwitterEntityUserMediaWatchInfo_h */

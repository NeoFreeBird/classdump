//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterCommunityReference_h
#define TFSTwitterCommunityReference_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSObject, NSString;

@interface TFSTwitterCommunityReference : NSObject <NSSecureCoding, NSCopying> // (Swift)

@property (nonatomic, readonly) NSString *communityID;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *displayName;

/* class methods */
+ (_Bool)supportsSecureCoding;

/* instance methods */
- (id)initWithCommunityID:(id)id name:(id)name;
- (id)initWithCommunityID:(id)id;
- (id)copyWithZone:(void *)zone;
- (_Bool)isEqual:(id)equal;
- (id)mergingWithPreviousReference:(id)reference;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)init;

@end

#endif /* TFSTwitterCommunityReference_h */

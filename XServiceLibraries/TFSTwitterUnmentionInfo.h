//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterUnmentionInfo_h
#define TFSTwitterUnmentionInfo_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSObject, NSString;

@interface TFSTwitterUnmentionInfo : NSObject <NSCoding, NSCopying> // (Swift)

@property (nonatomic, readonly) NSArray *unmentionedUserIDs;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

/* instance methods */
- (id)initWithUnmentionedUserIDs:(id)ids;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(void *)zone;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFSTwitterUnmentionInfo_h */

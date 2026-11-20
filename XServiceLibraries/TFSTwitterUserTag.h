//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterUserTag_h
#define TFSTwitterUserTag_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSObject, NSString;

@interface TFSTwitterUserTag : NSObject <NSCoding, NSCopying> // (Swift)

@property (nonatomic, readonly) long long userID;
@property (nonatomic, readonly) NSString *username;
@property (nonatomic, readonly) NSString *fullName;
@property (nonatomic, readonly) NSString *displayText;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

/* instance methods */
- (id)initWithUserID:(long long)id username:(id)username fullName:(id)name;
- (id)initWithJsonDictionary:(id)dictionary;
- (id)copyWithZone:(void *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)userReference;
- (id)userIDString;
- (_Bool)representsUserIDWithUserID:(long long)id;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFSTwitterUserTag_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14TFSTwitterCore52TFSTwitterStatusAuthorAndActorSocialContextUserGroup_h
#define _TtC14TFSTwitterCore52TFSTwitterStatusAuthorAndActorSocialContextUserGroup_h
@import Foundation;

#include "NSCoding-Protocol.h"

@class NSArray, NSObject, TFSTwitterCore.TFSTwitterStatusAuthorAndActorSocialContextType, _$sSaySDySSyXlGGSg, _$sSi;

@interface TFSTwitterCore.TFSTwitterStatusAuthorAndActorSocialContextUserGroup : NSObject <NSCoding> // (Swift)

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSArray *relatedUserInfoDicts;
@property (nonatomic, readonly) long long additionalUserCount;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)initWithType:(long long)type relatedUserInfoDicts:(id)dicts additionalUserCount:(long long)count;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* _TtC14TFSTwitterCore52TFSTwitterStatusAuthorAndActorSocialContextUserGroup_h */

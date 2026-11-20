//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterUserRecommendation_h
#define TFSTwitterUserRecommendation_h
@import Foundation;

#include "TFSTwitterUser.h"
#include "TFSTwitterUserWhyToFollow.h"
#include "_TtC14TFSTwitterCore25TFSTwitterPromotedContent.h"

@class NSArray, NSObject, NSString;

@interface TFSTwitterUserRecommendation : NSObject // (Swift)

@property (nonatomic, readonly) TFSTwitterUser *user;
@property (nonatomic, readonly) TFSTwitterCore.TFSTwitterPromotedContent *promotedContent;
@property (nonatomic, readonly) TFSTwitterUserWhyToFollow *reason;
@property (nonatomic, readonly) NSString *token;
@property (nonatomic, readonly) NSString *trackingToken;
@property (nonatomic, readonly) _Bool deviceFollow;
@property (nonatomic, readonly) NSString *socialText;
@property (nonatomic, readonly) NSArray *connections;
@property (nonatomic, readonly) long long hash;

/* instance methods */
- (id)initWithUser:(id)user promotedContent:(id)content reason:(id)reason token:(id)token trackingToken:(id)token deviceFollow:(_Bool)follow socialText:(id)text connections:(id)connections;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFSTwitterUserRecommendation_h */

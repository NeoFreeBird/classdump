//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterUserTestFields_h
#define TFSTwitterUserTestFields_h
@import Foundation;

#include "TFSTwitterEntityMedia.h"
#include "TFSTwitterRelationship.h"
#include "TFSTwitterUserDesignatorInfo.h"

@class NSObject, NSString;

@interface TFSTwitterUserTestFields : NSObject // (Swift)

@property (nonatomic) long long userID;
@property (nonatomic, copy) NSString *username;
@property (nonatomic, copy) NSString *fullName;
@property (nonatomic, copy) NSString *bio;
@property (nonatomic, retain) TFSTwitterRelationship *relationship;
@property (nonatomic) _Bool protected;
@property (nonatomic) _Bool verified;
@property (nonatomic) _Bool isBlueVerified;
@property (nonatomic) long long identityType;
@property (nonatomic, retain) TFSTwitterEntityMedia *profileImageMediaEntity;
@property (nonatomic, copy) NSString *profileImageURL;
@property (nonatomic, copy) NSString *profileBannerURL;
@property (nonatomic, readonly) TFSTwitterEntityMedia *profileBannerMediaEntity;
@property (nonatomic, retain) TFSTwitterUserDesignatorInfo *highlightedDesignatorInfo;
@property (nonatomic) long long numberOfFollowers;

/* instance methods */
- (id)init;

@end

#endif /* TFSTwitterUserTestFields_h */

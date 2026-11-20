//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAPTweetUserPerspective_Protocol_h
#define TAPTweetUserPerspective_Protocol_h
@import Foundation;

#include "_TtP7TAPUser18TAPUserPerspective_-Protocol.h"

@class NSNumber, NSString, TFSTwitterEntityMedia, TFSTwitterRelationship, TFSTwitterUserReference;

@protocol TAPTweetUserPerspective <TAPUser.TAPUserPerspective>

@required

@property (readonly, nonatomic) long long profileImageShape;
@property (readonly, nonatomic) long long userID;
@property (readonly, copy, nonatomic) NSString *username;
@property (readonly, copy, nonatomic) NSString *fullName;
@property (readonly, nonatomic) TFSTwitterEntityMedia *profileImageMediaEntity;
@property (readonly, nonatomic) TFSTwitterUserReference *userReference;
@property (readonly, nonatomic) NSNumber *userIDNumber;
@property (readonly, copy, nonatomic) NSString *twitterURLForEmail;
@property (readonly, copy, nonatomic) NSString *displayFullName;
@property (readonly, copy, nonatomic) NSString *displayUsername;
@property (readonly, nonatomic) TFSTwitterRelationship *relationship;
@property (readonly, nonatomic) _Bool protectedUser;
@property (readonly, nonatomic) _Bool hasAccountLabel;
@property (readonly, nonatomic) long long designatorLabelType;

@optional

@end

#endif /* TAPTweetUserPerspective_Protocol_h */

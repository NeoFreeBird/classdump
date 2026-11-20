//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtP14TFSTwitterCore29TFSTwitterUserDataSourceModel__Protocol_h
#define _TtP14TFSTwitterCore29TFSTwitterUserDataSourceModel__Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TFSTwitterCanonicalUser-Protocol.h"

@class NSDictionary, NSNumber, NSString, TFSTwitterUserReference;

@protocol TFSTwitterCore.TFSTwitterUserDataSourceModel <NSObject>

@required

@property (readonly, copy, nonatomic) NSString *accountID;
@property (readonly, nonatomic) id <TFSTwitterCanonicalUser> user;
@property (readonly, nonatomic) TFSTwitterUserReference *userReference;
@property (readonly, nonatomic) long long userID;
@property (readonly, copy, nonatomic) NSString *username;
@property (readonly, copy, nonatomic) NSString *fullName;
@property (readonly, nonatomic) _Bool representsUserForAssociatedAccount;
@property (readonly, nonatomic) NSNumber *userIDNumber;
@property (readonly, nonatomic) _Bool hasUser;
@property (readonly, copy, nonatomic) NSString *displayUsername;
@property (readonly, copy, nonatomic) NSString *displayFullName;
@property (readonly, copy, nonatomic) NSDictionary *scribeItem;

/* required instance methods */
- (_Bool)isEqualToUser:(id)user;
- (_Bool)isEqualToUserReference:(id)reference;

@optional

@end

#endif /* _TtP14TFSTwitterCore29TFSTwitterUserDataSourceModel__Protocol_h */

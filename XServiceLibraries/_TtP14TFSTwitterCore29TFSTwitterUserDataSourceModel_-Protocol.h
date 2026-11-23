//
#ifndef _TtP14TFSTwitterCore29TFSTwitterUserDataSourceModel__Protocol_h
#define _TtP14TFSTwitterCore29TFSTwitterUserDataSourceModel__Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TFSTwitterCanonicalUser-Protocol.h"
#include "TFSTwitterUserReference.h"

@class NSDictionary, NSNumber, NSString;

@protocol TFSTwitterCore.TFSTwitterUserDataSourceModel <NSObject>

@required

@property (nonatomic, readonly) NSString *accountID;
@property (nonatomic, readonly) id <TFSTwitterCanonicalUser> user;
@property (nonatomic, readonly) TFSTwitterUserReference *userReference;
@property (nonatomic, readonly) long long userID;
@property (nonatomic, readonly) NSString *username;
@property (nonatomic, readonly) NSString *fullName;
@property (nonatomic, readonly) _Bool representsUserForAssociatedAccount;
@property (nonatomic, readonly) NSNumber *userIDNumber;
@property (nonatomic, readonly) _Bool hasUser;
@property (nonatomic, readonly) NSString *displayUsername;
@property (nonatomic, readonly) NSString *displayFullName;
@property (nonatomic, readonly) NSDictionary *scribeItem;

/* required instance methods */
- (_Bool)isEqualToUser:(id)user;
- (_Bool)isEqualToUserReference:(id)reference;

@optional

@end

#endif /* _TtP14TFSTwitterCore29TFSTwitterUserDataSourceModel__Protocol_h */

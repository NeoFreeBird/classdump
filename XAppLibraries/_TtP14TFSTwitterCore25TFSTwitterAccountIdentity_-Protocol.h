//
#ifndef _TtP14TFSTwitterCore25TFSTwitterAccountIdentity__Protocol_h
#define _TtP14TFSTwitterCore25TFSTwitterAccountIdentity__Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TFSTwitterCanonicalUser-Protocol.h"

@class NSString, TFSTwitterUserReference;

@protocol TFSTwitterCore.TFSTwitterAccountIdentity <NSObject>

@required

@property (nonatomic, readonly) NSString *accountID;
@property (nonatomic, readonly) long long userID;
@property (nonatomic, readonly) TFSTwitterUserReference *userReference;
@property (nonatomic, readonly) id <TFSTwitterCanonicalUser> user;
@property (nonatomic, readonly) NSString *username;
@property (nonatomic, readonly) NSString *displayUsername;
@property (nonatomic, readonly) NSString *fullName;
@property (nonatomic, readonly) NSString *displayFullName;
@property (nonatomic, readonly) _Bool verified;
@property (nonatomic, readonly) _Bool isBlueVerified;
@property (nonatomic, readonly) _Bool isSuspended;
@property (nonatomic, readonly) _Bool hasOAuthTokens;
@property (nonatomic, readonly) long long userType;
@property (nonatomic, readonly) long long identityType;

@optional

@end

#endif /* _TtP14TFSTwitterCore25TFSTwitterAccountIdentity__Protocol_h */

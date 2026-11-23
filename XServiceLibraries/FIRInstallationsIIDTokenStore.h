//
#ifndef FIRInstallationsIIDTokenStore_h
#define FIRInstallationsIIDTokenStore_h
@import Foundation;

@class NSObject, NSString;

@interface FIRInstallationsIIDTokenStore : NSObject

@property (readonly, nonatomic) NSString *GCMSenderID;

/* instance methods */
- (id)initWithGCMSenderID:(id)id;
- (id)existingIIDDefaultToken;
- (id)IIDCheckinWithData:(id)data;
- (id)IIDDefaultTokenData;
- (id)IIDDefaultTokenDataKeychainQuery;
- (id)IIDAppIdentifier;
- (id)serviceKeyForAuthorizedEntity:(id)entity scope:(id)scope;

@end

#endif /* FIRInstallationsIIDTokenStore_h */

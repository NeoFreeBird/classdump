//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

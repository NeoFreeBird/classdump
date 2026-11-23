//
#ifndef FIRInstallationsIIDStore_h
#define FIRInstallationsIIDStore_h
@import Foundation;

@class NSObject;

@interface FIRInstallationsIIDStore : NSObject

/* instance methods */
- (id)existingIID;
- (id)deleteExistingIID;
- (id)IIDWithPublicKeyData:(id)data;
- (id)sha1WithData:(id)data;
- (id)base64URLEncodedStringWithData:(id)data;
- (id)IIDPublicKeyData;
- (_Bool)deleteIID:(id *)iid;
- (_Bool)deleteKeychainKeyWithTagPrefix:(id)prefix error:(id *)error;
- (id)keyPairQueryWithTag:(id)tag returnData:(_Bool)data;
- (id)keychainKeyTagWithPrefix:(id)prefix;
- (id)mainbundleIdentifier;
- (_Bool)deleteIIDFlagFromPlist:(id *)plist;
- (_Bool)hasPlistIIDFlag;
- (id)plistPath;
- (unsigned long long)supportedDirectory;

@end

#endif /* FIRInstallationsIIDStore_h */

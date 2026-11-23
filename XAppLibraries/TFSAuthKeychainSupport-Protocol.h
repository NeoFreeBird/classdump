//
#ifndef TFSAuthKeychainSupport_Protocol_h
#define TFSAuthKeychainSupport_Protocol_h
@import Foundation;

@protocol TFSAuthKeychainSupport

@required

/* required instance methods */
- (void)fetchAppTokenFromKeychain:(id /* block */)keychain;
- (void)saveAppTokenToKeychain:(id)keychain completionBlock:(id /* block */)block;
- (void)deleteAppTokenFromKeychain:(id /* block */)keychain;

@optional

@end

#endif /* TFSAuthKeychainSupport_Protocol_h */

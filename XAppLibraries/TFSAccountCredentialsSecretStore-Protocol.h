//
#ifndef TFSAccountCredentialsSecretStore_Protocol_h
#define TFSAccountCredentialsSecretStore_Protocol_h
@import Foundation;

@protocol TFSAccountCredentialsSecretStore

@required

/* required instance methods */
- (_Bool)saveSecretWithToken:(id)token secret:(id)secret error:(id *)error;
- (_Bool)loadSecretWithToken:(id)token error:(id *)error secret:(id /* block */)secret;
- (_Bool)removeSecretWithToken:(id)token error:(id *)error;

@optional

@end

#endif /* TFSAccountCredentialsSecretStore_Protocol_h */

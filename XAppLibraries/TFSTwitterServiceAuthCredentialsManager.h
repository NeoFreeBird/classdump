//
#ifndef TFSTwitterServiceAuthCredentialsManager_h
#define TFSTwitterServiceAuthCredentialsManager_h
@import Foundation;

@class TFSAuthCredentialsManager;

@interface TFSTwitterServiceAuthCredentialsManager : TFSAuthCredentialsManager

@property (nonatomic) _Bool ready;

/* class methods */
+ (id)sharedManager;

/* instance methods */
- (id)handleRequestResponse:(id)response;
- (long long)accountAuthErrorCodeFromAPIResponse:(id)apiresponse;
- (id)_handleAccountAuthRequestResponse:(id)response;
- (_Bool)isReady;

@end

#endif /* TFSTwitterServiceAuthCredentialsManager_h */

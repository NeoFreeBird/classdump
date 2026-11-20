//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

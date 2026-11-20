//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GACAppCheck_h
#define GACAppCheck_h
@import Foundation;

#include "FBLPromise.h"
#include "GACAppCheckProtocol-Protocol.h"
#include "GACAppCheckProvider-Protocol.h"
#include "GACAppCheckSettingsProtocol-Protocol.h"
#include "GACAppCheckStorageProtocol-Protocol.h"
#include "GACAppCheckTokenRefresherProtocol-Protocol.h"

@class NSObject, NSString;
@protocol GACAppCheckTokenDelegate;

@interface GACAppCheck : NSObject <GACAppCheckProtocol>

@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) id <GACAppCheckProvider> appCheckProvider;
@property (readonly, nonatomic) id <GACAppCheckStorageProtocol> storage;
@property (readonly, nonatomic) id <GACAppCheckSettingsProtocol> settings;
@property (readonly, weak, nonatomic) id <GACAppCheckTokenDelegate> tokenDelegate;
@property (readonly, nonatomic) id <GACAppCheckTokenRefresherProtocol> tokenRefresher;
@property (retain, nonatomic) FBLPromise *ongoingRetrieveOrRefreshTokenPromise;

/* instance methods */
- (id)initWithServiceName:(id)name appCheckProvider:(id)provider storage:(id)storage tokenRefresher:(id)refresher settings:(id)settings tokenDelegate:(id)delegate;
- (id)initWithServiceName:(id)name resourceName:(id)name appCheckProvider:(id)provider settings:(id)settings tokenDelegate:(id)delegate keychainAccessGroup:(id)group;
- (void)tokenForcingRefresh:(_Bool)refresh completion:(id /* block */)completion;
- (void)limitedUseTokenWithCompletion:(id /* block */)completion;
- (id)retrieveOrRefreshTokenForcingRefresh:(_Bool)refresh;
- (id)createRetrieveOrRefreshTokenPromiseForcingRefresh:(_Bool)refresh;
- (id)getCachedValidTokenForcingRefresh:(_Bool)refresh;
- (id)refreshToken;
- (id)limitedUseToken;
- (void)periodicTokenRefreshWithCompletion:(id /* block */)completion;

@end

#endif /* GACAppCheck_h */

//
#ifndef GACAppCheckDebugProvider_h
#define GACAppCheckDebugProvider_h
@import Foundation;

#include "GACAppCheckDebugProviderAPIServiceProtocol-Protocol.h"
#include "GACAppCheckProvider-Protocol.h"

@class NSObject, NSString;

@interface GACAppCheckDebugProvider : NSObject <GACAppCheckProvider>

@property (readonly, nonatomic) id <GACAppCheckDebugProviderAPIServiceProtocol> APIService;
@property (readonly, copy, nonatomic) NSString *debugTokenEnvValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAPIService:(id)apiservice;
- (id)initWithServiceName:(id)name resourceName:(id)name baseURL:(id)url APIKey:(id)apikey requestHooks:(id)hooks;
- (id)currentDebugToken;
- (id)localDebugToken;
- (void)getTokenWithCompletion:(id /* block */)completion;
- (void)getLimitedUseTokenWithCompletion:(id /* block */)completion;
- (void)getTokenWithLimitedUse:(_Bool)use completion:(id /* block */)completion;

@end

#endif /* GACAppCheckDebugProvider_h */

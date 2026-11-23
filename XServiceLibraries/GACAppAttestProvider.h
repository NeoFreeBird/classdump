//
#ifndef GACAppAttestProvider_h
#define GACAppAttestProvider_h
@import Foundation;

#include "FBLPromise.h"
#include "GACAppAttestAPIServiceProtocol-Protocol.h"
#include "GACAppAttestArtifactStorageProtocol-Protocol.h"
#include "GACAppAttestKeyIDStorageProtocol-Protocol.h"
#include "GACAppAttestService-Protocol.h"
#include "GACAppCheckBackoffWrapperProtocol-Protocol.h"
#include "GACAppCheckProvider-Protocol.h"

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface GACAppAttestProvider : NSObject <GACAppCheckProvider>

@property (readonly, nonatomic) id <GACAppAttestAPIServiceProtocol> APIService;
@property (readonly, nonatomic) id <GACAppAttestService> appAttestService;
@property (readonly, nonatomic) id <GACAppAttestKeyIDStorageProtocol> keyIDStorage;
@property (readonly, nonatomic) id <GACAppAttestArtifactStorageProtocol> artifactStorage;
@property (readonly, nonatomic) id <GACAppCheckBackoffWrapperProtocol> backoffWrapper;
@property (retain, nonatomic) FBLPromise *ongoingGetTokenOperation;
@property (nonatomic) _Bool ongoingGetTokenOperationLimitedUse;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)storageKeySuffixWithServiceName:(id)name resourceName:(id)name;

/* instance methods */
- (id)initWithAppAttestService:(id)service APIService:(id)apiservice keyIDStorage:(id)idstorage artifactStorage:(id)storage backoffWrapper:(id)wrapper;
- (id)initWithServiceName:(id)name resourceName:(id)name baseURL:(id)url APIKey:(id)apikey keychainAccessGroup:(id)group requestHooks:(id)hooks;
- (void)getTokenWithCompletion:(id /* block */)completion;
- (void)getLimitedUseTokenWithCompletion:(id /* block */)completion;
- (void)getTokenWithLimitedUse:(_Bool)use completion:(id /* block */)completion;
- (id)getTokenWithLimitedUse:(_Bool)use;
- (id)createGetTokenSequenceWithBackoffPromiseWithLimitedUse:(_Bool)use;
- (id)createGetTokenSequencePromiseWithLimitedUse:(_Bool)use;
- (id)initialHandshakeWithKeyID:(id)id limitedUse:(_Bool)use;
- (id)saveArtifactAndGetAppCheckTokenFromResponse:(id)response keyID:(id)id;
- (id)attestKey:(id)key challenge:(id)challenge;
- (id)attestKeyGenerateIfNeededWithID:(id)id limitedUse:(_Bool)use;
- (id)resetAttestation;
- (id)refreshTokenWithKeyID:(id)id artifact:(id)artifact limitedUse:(_Bool)use;
- (id)generateAssertionWithKeyID:(id)id artifact:(id)artifact challenge:(id)challenge;
- (id)attestationState;
- (id)isAppAttestSupported;
- (id)generateAppAttestKeyIDIfNeeded:(id)needed;
- (id)generateAppAttestKey;

@end

#endif /* GACAppAttestProvider_h */

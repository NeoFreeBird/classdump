//
#ifndef GACAppCheckDebugProviderAPIService_h
#define GACAppCheckDebugProviderAPIService_h
@import Foundation;

#include "GACAppCheckAPIServiceProtocol-Protocol.h"
#include "GACAppCheckDebugProviderAPIServiceProtocol-Protocol.h"

@class NSObject, NSString;

@interface GACAppCheckDebugProviderAPIService : NSObject <GACAppCheckDebugProviderAPIServiceProtocol>

@property (readonly, nonatomic) id <GACAppCheckAPIServiceProtocol> APIService;
@property (readonly, nonatomic) NSString *resourceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAPIService:(id)apiservice resourceName:(id)name;
- (id)appCheckTokenWithDebugToken:(id)token limitedUse:(_Bool)use;
- (id)HTTPBodyWithDebugToken:(id)token limitedUse:(_Bool)use;
- (id)backgroundQueue;

@end

#endif /* GACAppCheckDebugProviderAPIService_h */

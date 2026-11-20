//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GACDeviceCheckAPIService_h
#define GACDeviceCheckAPIService_h
@import Foundation;

#include "GACAppCheckAPIServiceProtocol-Protocol.h"
#include "GACDeviceCheckAPIServiceProtocol-Protocol.h"

@class NSObject, NSString;

@interface GACDeviceCheckAPIService : NSObject <GACDeviceCheckAPIServiceProtocol>

@property (readonly, nonatomic) id <GACAppCheckAPIServiceProtocol> APIService;
@property (readonly, nonatomic) NSString *resourceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAPIService:(id)apiservice resourceName:(id)name;
- (id)appCheckTokenWithDeviceToken:(id)token limitedUse:(_Bool)use;
- (id)HTTPBodyWithDeviceToken:(id)token limitedUse:(_Bool)use;
- (id)backgroundQueue;

@end

#endif /* GACDeviceCheckAPIService_h */

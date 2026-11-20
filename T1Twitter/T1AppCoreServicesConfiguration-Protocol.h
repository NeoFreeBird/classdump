//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1AppCoreServicesConfiguration_Protocol_h
#define T1AppCoreServicesConfiguration_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TFSKeychainConfiguration-Protocol.h"
#include "TFSTwitterClientIdentificationProvider-Protocol.h"

@protocol T1AppCoreServicesConfiguration <NSObject>

@required

@property (readonly, nonatomic) id <TFSTwitterClientIdentificationProvider> clientIdentificationProvider;
@property (readonly, nonatomic) id <TFSKeychainConfiguration> keychainConfiguration;

@optional

@end

#endif /* T1AppCoreServicesConfiguration_Protocol_h */

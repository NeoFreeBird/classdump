//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSKeychainOAuthTwitterConfiguration_h
#define TFSKeychainOAuthTwitterConfiguration_h
@import Foundation;

#include "TFSKeychainConfiguration-Protocol.h"

@class NSObject, NSString;

@interface TFSKeychainOAuthTwitterConfiguration : NSObject <TFSKeychainConfiguration>

@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) NSString *defaultAccessGroup;
@property (readonly, nonatomic) NSString *sharedAccessGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;

@end

#endif /* TFSKeychainOAuthTwitterConfiguration_h */

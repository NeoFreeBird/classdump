//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSKeychainConfiguration_Protocol_h
#define TFSKeychainConfiguration_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;

@protocol TFSKeychainConfiguration <NSObject>

@required

@property (readonly, nonatomic) NSString *serviceName;

@optional

@property (readonly, nonatomic) NSString *defaultAccessGroup;
@property (readonly, nonatomic) NSString *sharedAccessGroup;

@end

#endif /* TFSKeychainConfiguration_Protocol_h */

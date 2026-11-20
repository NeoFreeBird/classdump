//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GTMUserAgentProvider_Protocol_h
#define GTMUserAgentProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;

@protocol GTMUserAgentProvider <NSObject>

@required

@property (readonly, copy) NSString *cachedUserAgent;
@property (readonly, copy) NSString *userAgent;

@optional

@end

#endif /* GTMUserAgentProvider_Protocol_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GTMUserAgentStringProvider_h
#define GTMUserAgentStringProvider_h
@import Foundation;

#include "GTMUserAgentProvider-Protocol.h"

@class NSObject, NSString;

@interface GTMUserAgentStringProvider : NSObject <GTMUserAgentProvider>

@property (readonly, copy) NSString *cachedUserAgent;
@property (readonly, copy) NSString *userAgent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserAgentString:(id)string;

@end

#endif /* GTMUserAgentStringProvider_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TNUAdvancedBackoffBehaviorProvider_h
#define TNUAdvancedBackoffBehaviorProvider_h
@import Foundation;

#include "TNLBackoffBehaviorProvider-Protocol.h"

@class NSObject, NSString;

@interface TNUAdvancedBackoffBehaviorProvider : NSObject <TNLBackoffBehaviorProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (struct TNLBackoffBehavior_T { double x0; double x1; double x2; })tnl_backoffBehaviorForURL:(id)url responseHeaders:(id)headers;

@end

#endif /* TNUAdvancedBackoffBehaviorProvider_h */

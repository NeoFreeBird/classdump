//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TBCPeriscopeLifecycleAPIAccessVideoResult_h
#define TBCPeriscopeLifecycleAPIAccessVideoResult_h
@import Foundation;

#include "TBCPeriscopeLifecycleAPIResult.h"

@class NSString;

@interface TBCPeriscopeLifecycleAPIAccessVideoResult : TBCPeriscopeLifecycleAPIResult

@property (readonly, nonatomic) NSString *lifecycleToken;

@end

#endif /* TBCPeriscopeLifecycleAPIAccessVideoResult_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TBCPeriscopeLifecycleAPIStartWatchingResult_h
#define TBCPeriscopeLifecycleAPIStartWatchingResult_h
@import Foundation;

#include "TBCPeriscopeLifecycleAPIResult.h"

@class NSString;

@interface TBCPeriscopeLifecycleAPIStartWatchingResult : TBCPeriscopeLifecycleAPIResult

@property (readonly, nonatomic) NSString *session;

@end

#endif /* TBCPeriscopeLifecycleAPIStartWatchingResult_h */

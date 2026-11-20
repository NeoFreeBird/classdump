//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVDynamicAdProvider_Protocol_h
#define TAVDynamicAdProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TAVDynamicAdProvider <NSObject>

@required

/* required instance methods */
- (void)provideAdWithCompletion:(id /* block */)completion;

@optional

@end

#endif /* TAVDynamicAdProvider_Protocol_h */

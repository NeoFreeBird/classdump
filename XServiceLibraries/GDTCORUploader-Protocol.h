//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GDTCORUploader_Protocol_h
#define GDTCORUploader_Protocol_h
@import Foundation;

#include "GDTCORLifecycleProtocol-Protocol.h"
#include "NSObject-Protocol.h"

@protocol GDTCORUploader <NSObject, GDTCORLifecycleProtocol>

@required

/* required instance methods */
- (void)uploadTarget:(long long)target withConditions:(long long)conditions;

@optional

@end

#endif /* GDTCORUploader_Protocol_h */

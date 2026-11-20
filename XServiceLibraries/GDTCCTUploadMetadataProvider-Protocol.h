//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GDTCCTUploadMetadataProvider_Protocol_h
#define GDTCCTUploadMetadataProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GDTCCTUploadMetadataProvider <NSObject>

@required

/* required instance methods */
- (id)nextUploadTimeForTarget:(long long)target;
- (void)setNextUploadTime:(id)time forTarget:(long long)target;
- (id)APIKeyForTarget:(long long)target;

@optional

@end

#endif /* GDTCCTUploadMetadataProvider_Protocol_h */

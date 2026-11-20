//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TEKAPIMediaUploadInitResponse_h
#define TEKAPIMediaUploadInitResponse_h
@import Foundation;

#include "TEKAPIResponse.h"

@class NSString;

@interface TEKAPIMediaUploadInitResponse : TEKAPIResponse

@property (readonly, copy, nonatomic) NSString *mediaID;

/* instance methods */
- (void)prepare;

@end

#endif /* TEKAPIMediaUploadInitResponse_h */

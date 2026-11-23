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

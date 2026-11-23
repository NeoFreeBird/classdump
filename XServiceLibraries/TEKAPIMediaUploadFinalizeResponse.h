//
#ifndef TEKAPIMediaUploadFinalizeResponse_h
#define TEKAPIMediaUploadFinalizeResponse_h
@import Foundation;

#include "TEKAPIResponse.h"

@class NSError, NSString;

@interface TEKAPIMediaUploadFinalizeResponse : TEKAPIResponse

@property (readonly, nonatomic) float progress;
@property (readonly, copy, nonatomic) NSString *processingState;
@property (readonly, nonatomic) double checkAfterDuration;
@property (readonly, nonatomic) NSError *mediaUploadError;

/* instance methods */
- (id)anyError;
- (void)prepare;

@end

#endif /* TEKAPIMediaUploadFinalizeResponse_h */

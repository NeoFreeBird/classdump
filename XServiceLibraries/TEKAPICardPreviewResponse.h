//
#ifndef TEKAPICardPreviewResponse_h
#define TEKAPICardPreviewResponse_h
@import Foundation;

#include "TEKAPIResponse.h"

@class NSError, NSString;

@interface TEKAPICardPreviewResponse : TEKAPIResponse {
    /* instance variables */
    _Bool _forceHTTPError;
}

@property (readonly, nonatomic) NSError *cardPreviewError;
@property (readonly, nonatomic) long long result;
@property (readonly, nonatomic) double retryAfterDelay;
@property (readonly, copy, nonatomic) NSString *cardPreviewTitle;
@property (readonly, copy, nonatomic) NSString *cardPreviewImageURLString;

/* instance methods */
- (id)anyError;
- (_Bool)shouldTreatStatusCodeAsHTTPError;
- (id)prepareByParsingModel:(out id *)model;
- (void)prepare;

@end

#endif /* TEKAPICardPreviewResponse_h */

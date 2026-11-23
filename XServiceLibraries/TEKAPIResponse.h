//
#ifndef TEKAPIResponse_h
#define TEKAPIResponse_h
@import Foundation;

#include "TNLResponse.h"

@class NSError;

@interface TEKAPIResponse : TNLResponse

@property (readonly, nonatomic) NSError *parseError;
@property (readonly, nonatomic) id parsedModel;

/* instance methods */
- (_Bool)shouldTreatStatusCodeAsHTTPError;
- (id)HTTPError;
- (id)anyError;
- (void)prepare;
- (id)prepareByParsingModel:(out id *)model;

@end

#endif /* TEKAPIResponse_h */

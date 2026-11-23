//
#ifndef TEKAPIMediaUploadGetStatusRequest_h
#define TEKAPIMediaUploadGetStatusRequest_h
@import Foundation;

#include "TEKAPIMediaUploadBaseRequest.h"

@class NSString;

@interface TEKAPIMediaUploadGetStatusRequest : TEKAPIMediaUploadBaseRequest

@property (readonly, copy, nonatomic) NSString *mediaID;

/* instance methods */
- (long long)HTTPMethodValue;
- (id)initWithMediaID:(id)id;
- (Class)responseClass;
- (id)parameters;

@end

#endif /* TEKAPIMediaUploadGetStatusRequest_h */

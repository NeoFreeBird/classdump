//
#ifndef TEKAPIMediaUploadFinalizeRequest_h
#define TEKAPIMediaUploadFinalizeRequest_h
@import Foundation;

#include "TEKAPIMediaUploadBaseRequest.h"

@class NSString;

@interface TEKAPIMediaUploadFinalizeRequest : TEKAPIMediaUploadBaseRequest

@property (readonly, copy, nonatomic) NSString *mediaID;
@property (readonly, copy, nonatomic) NSString *mediaCategory;

/* instance methods */
- (id)initWithMediaID:(id)id mediaCategory:(id)category;
- (Class)responseClass;
- (id)parameters;

@end

#endif /* TEKAPIMediaUploadFinalizeRequest_h */

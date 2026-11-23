//
#ifndef TEKAPIMediaUploadInitRequest_h
#define TEKAPIMediaUploadInitRequest_h
@import Foundation;

#include "TEKAPIMediaUploadBaseRequest.h"

@class NSString;

@interface TEKAPIMediaUploadInitRequest : TEKAPIMediaUploadBaseRequest {
    /* instance variables */
    NSString *_mediaType;
    long long _totalBytes;
}

@property (readonly, copy, nonatomic) NSString *mediaCategory;

/* instance methods */
- (id)initWithMediaType:(id)type totalBytes:(long long)bytes mediaCategory:(id)category;
- (Class)responseClass;
- (id)parameters;

@end

#endif /* TEKAPIMediaUploadInitRequest_h */

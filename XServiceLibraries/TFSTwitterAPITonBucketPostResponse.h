//
#ifndef TFSTwitterAPITonBucketPostResponse_h
#define TFSTwitterAPITonBucketPostResponse_h
@import Foundation;

#include "TFSAPIResponse.h"

@class NSError, NSURL;

@interface TFSTwitterAPITonBucketPostResponse : TFSAPIResponse

@property (readonly, nonatomic) _Bool created;
@property (readonly, nonatomic) NSError *executionError;
@property (readonly, nonatomic) NSURL *uploadURL;
@property (readonly, nonatomic) NSError *anyError;

/* instance methods */
- (void)prepare;
- (id)modelWithParseError:(out id *)error APIErrors:(out id *)apierrors;

@end

#endif /* TFSTwitterAPITonBucketPostResponse_h */

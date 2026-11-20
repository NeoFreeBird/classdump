//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAdsIDSyncFetchResponse_h
#define TFSTwitterAdsIDSyncFetchResponse_h
@import Foundation;

@class NSArray, NSObject;

@interface TFSTwitterAdsIDSyncFetchResponse : NSObject

@property (retain, nonatomic) NSArray *idBlobs;

/* class methods */
+ (_Bool)_setError:(id *)error description:(id)description;

/* instance methods */
- (id)initWithJSONDData:(id)jsonddata error:(id *)error;
- (id)initWithIdBlobs:(id)blobs error:(id *)error;

@end

#endif /* TFSTwitterAdsIDSyncFetchResponse_h */

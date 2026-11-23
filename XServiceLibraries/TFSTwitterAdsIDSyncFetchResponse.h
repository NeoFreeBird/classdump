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

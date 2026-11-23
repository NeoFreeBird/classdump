//
#ifndef TFSTwitterTypeaheadPromotedTopicMetadataMedia_h
#define TFSTwitterTypeaheadPromotedTopicMetadataMedia_h
@import Foundation;

@class NSObject, NSString, NSURL;

@interface TFSTwitterTypeaheadPromotedTopicMetadataMedia : NSObject // (Swift)

@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) long long width;
@property (nonatomic, readonly) long long height;
@property (nonatomic, readonly) NSString *description;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFSTwitterTypeaheadPromotedTopicMetadataMedia_h */

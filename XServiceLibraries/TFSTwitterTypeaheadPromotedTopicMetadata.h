//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterTypeaheadPromotedTopicMetadata_h
#define TFSTwitterTypeaheadPromotedTopicMetadata_h
@import Foundation;

@class NSArray, NSObject, NSString;

@interface TFSTwitterTypeaheadPromotedTopicMetadata : NSObject // (Swift)

@property (nonatomic, readonly) NSString *promotedBy;
@property (nonatomic, readonly) NSArray *mediaInfo;
@property (nonatomic, readonly) NSString *description;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFSTwitterTypeaheadPromotedTopicMetadata_h */

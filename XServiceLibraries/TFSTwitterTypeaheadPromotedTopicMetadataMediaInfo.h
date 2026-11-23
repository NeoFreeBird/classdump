//
#ifndef TFSTwitterTypeaheadPromotedTopicMetadataMediaInfo_h
#define TFSTwitterTypeaheadPromotedTopicMetadataMediaInfo_h
@import Foundation;

#include "TFSTwitterTypeaheadPromotedTopicMetadataMedia.h"

@class NSObject, NSString;

@interface TFSTwitterTypeaheadPromotedTopicMetadataMediaInfo : NSObject // (Swift)

@property (nonatomic, readonly) NSString *mediaID;
@property (nonatomic, readonly) TFSTwitterTypeaheadPromotedTopicMetadataMedia *preview;
@property (nonatomic, readonly) TFSTwitterTypeaheadPromotedTopicMetadataMedia *thumbnail;
@property (nonatomic, readonly) NSString *description;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFSTwitterTypeaheadPromotedTopicMetadataMediaInfo_h */

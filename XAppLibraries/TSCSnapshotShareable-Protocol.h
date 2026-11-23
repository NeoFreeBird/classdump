//
#ifndef TSCSnapshotShareable_Protocol_h
#define TSCSnapshotShareable_Protocol_h
@import Foundation;

#include "TSCShareable-Protocol.h"

@class NSString, NSURL;

@protocol TSCSnapshotShareable <TSCShareable>

@required

@property (nonatomic, readonly) double snapshotScale;
@property (nonatomic, readonly) NSURL *shareableVideoURL;
@property (nonatomic, readonly) double shareableVideoDurationSeconds;
@property (nonatomic, readonly) NSString *shareableAuthorName;
@property (nonatomic, readonly) NSString *shareableAuthorHandle;
@property (nonatomic, readonly) NSURL *shareableAuthorProfileImageURL;

/* required instance methods */
- (id)externalShareableViewFor:(id)_for layoutMetrics:(id)metrics;
- (id)videoReactionShareableViewFor:(id)_for layoutMetrics:(id)metrics;

@optional

@end

#endif /* TSCSnapshotShareable_Protocol_h */

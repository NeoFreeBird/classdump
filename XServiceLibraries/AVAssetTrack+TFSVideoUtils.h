//
#ifndef AVAssetTrack_TFSVideoUtils_h
#define AVAssetTrack_TFSVideoUtils_h
@import Foundation;

@interface AVAssetTrack (TFSVideoUtils)

/* instance methods */
- (_Bool)tfs_hasAPACAudioFormat;
- (id)tfs_mediaSubTypeDescription;

@end

#endif /* AVAssetTrack_TFSVideoUtils_h */

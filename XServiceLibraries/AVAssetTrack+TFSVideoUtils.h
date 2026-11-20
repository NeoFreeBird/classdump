//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef AVAsset_TFSVideoUtils_h
#define AVAsset_TFSVideoUtils_h
@import Foundation;

@interface AVAsset (TFSVideoUtils)

/* instance methods */
- (id)grokSignatureMetadata;
- (id)tfs_sourceDiagnostics;

@end

#endif /* AVAsset_TFSVideoUtils_h */

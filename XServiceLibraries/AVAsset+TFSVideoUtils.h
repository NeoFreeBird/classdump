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

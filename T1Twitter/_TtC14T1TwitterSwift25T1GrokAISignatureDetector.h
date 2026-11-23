//
#ifndef _TtC14T1TwitterSwift25T1GrokAISignatureDetector_h
#define _TtC14T1TwitterSwift25T1GrokAISignatureDetector_h
@import Foundation;

#include "T1AssetAISignatureDetector-Protocol.h"

@class NSObject, NSString;

@interface T1TwitterSwift.T1GrokAISignatureDetector : NSObject <T1AssetAISignatureDetector> // (Swift)

@property (nonatomic, readonly) NSString *identifier;

/* instance methods */
- (_Bool)isEnabledForAccount:(id)account;
- (void)detectWithAsset:(id)asset account:(id)account completion:(id /* block */)completion;
- (id)debugMenuItemsForRecord:(id)record asset:(id)asset;
- (void)t1_scribeComposeImpressionForAsset:(id)asset account:(id)account sink:(id)sink;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift25T1GrokAISignatureDetector_h */

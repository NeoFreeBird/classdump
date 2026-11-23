//
#ifndef T1AssetAISignatureDetector_Protocol_h
#define T1AssetAISignatureDetector_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;

@protocol T1AssetAISignatureDetector <NSObject>

@required

@property (nonatomic, readonly) NSString *identifier;

/* required instance methods */
- (_Bool)isEnabledForAccount:(id)account;
- (_Bool)isEnabledForAccount:(id)account;
- (void)detectWithAsset:(id)asset account:(id)account completion:(id /* block */)completion;
- (void)detectWithAsset:(id)asset account:(id)account completion:(id /* block */)completion;
- (id)debugMenuItemsForRecord:(id)record asset:(id)asset;
- (id)debugMenuItemsForRecord:(id)record asset:(id)asset;

@optional

/* optional instance methods */
- (void)t1_scribeComposeImpressionForAsset:(id)asset account:(id)account sink:(id)sink;
- (void)t1_scribeComposeImpressionForAsset:(id)asset account:(id)account sink:(id)sink;

@end

#endif /* T1AssetAISignatureDetector_Protocol_h */

//
#ifndef _TtC4Grok22GrokImagineSharedAsset_h
#define _TtC4Grok22GrokImagineSharedAsset_h
@import Foundation;

#include "_TtC4Grok23GrokImaginePostMetadata.h"

@class NSObject, NSString;

@interface Grok.GrokImagineSharedAsset : NSObject // (Swift)

/* class methods */
+ (void)assetFor:(Grok.GrokImaginePostMetadata *)_for completionHandler:(id /* block */)handler;
+ (void)assetFor:(Grok.GrokImaginePostMetadata *)_for musicOverlayID:(NSString *)id captionPreset:(NSString *)preset completionHandler:(id /* block */)handler;
+ (void)loadAssetsWithTransferID:(NSString *)id completionHandler:(id /* block */)handler;

/* instance methods */
- (id)init;

@end

#endif /* _TtC4Grok22GrokImagineSharedAsset_h */

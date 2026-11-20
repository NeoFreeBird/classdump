//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNHashflagImageDownloader_h
#define TFNHashflagImageDownloader_h
@import Foundation;

#include "TFNHashflagImageCache.h"
#include "TIPImageFetchDelegate-Protocol.h"
#include "TIPImagePipeline.h"

@class NSMutableDictionary, NSObject, NSString;

@interface TFNHashflagImageDownloader : NSObject <TIPImageFetchDelegate> {
    /* instance variables */
    TFNHashflagImageCache *_cache;
    NSMutableDictionary *_hashflagOperations;
}

@property (readonly, nonatomic) TIPImagePipeline *imagePipeline;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithImagePipeline:(id)pipeline cache:(id)cache;
- (void)downloadImageForHashflag:(id)hashflag completion:(id /* block */)completion;
- (void)tip_imageFetchOperation:(id)operation didLoadFinalImage:(id)image;
- (void)tip_imageFetchOperation:(id)operation didFailToLoadFinalImage:(id)image;

@end

#endif /* TFNHashflagImageDownloader_h */

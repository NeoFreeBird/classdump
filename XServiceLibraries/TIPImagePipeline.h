//
#ifndef TIPImagePipeline_h
#define TIPImagePipeline_h
@import Foundation;

#include "TIPImageDiskCache.h"
#include "TIPImageDownloader.h"
#include "TIPImageMemoryCache.h"
#include "TIPImageRenderedCache.h"

@class NSArray, NSObject, NSString;
@protocol TIPImagePipelineObserver;

@interface TIPImagePipeline : NSObject {
    /* instance variables */
    NSString *_imagePipelinePath;
    TIPImageRenderedCache *_renderedCache;
    TIPImageMemoryCache *_memoryCache;
    TIPImageDiskCache *_diskCache;
    TIPImageDownloader *_downloader;
}

@property (copy) NSArray *additionalCaches;
@property (retain) id <TIPImagePipelineObserver> observer;
@property (readonly, copy, nonatomic) NSString *identifier;

/* class methods */
+ (id)allRegisteredImagePipelines;
+ (void)getKnownImagePipelineIdentifiers:(id /* block */)identifiers;

/* instance methods */
- (void)inspect:(id /* block */)inspect;
- (id)init;
- (void)dealloc;
- (id)initWithIdentifier:(id)identifier;
- (id)operationWithRequest:(id)request context:(id)context delegate:(id)delegate;
- (id)operationWithRequest:(id)request context:(id)context completion:(id /* block */)completion;
- (id)memoryCachedCompleteImageWithOperation:(id)operation;
- (id)memoryCachedRenderedImageWithOperation:(id)operation;
- (void)fetchImageWithOperation:(id)operation;
- (id)changeIdentifierForImageWithIdentifier:(id)identifier toIdentifier:(id)identifier completion:(id /* block */)completion;
- (id)storeImageWithRequest:(id)request completion:(id /* block */)completion;
- (void)clearImageWithIdentifier:(id)identifier;
- (void)clearRenderedMemoryCacheImageWithIdentifier:(id)identifier;
- (void)dirtyRenderedMemoryCacheImageWithIdentifier:(id)identifier;
- (void)clearMemoryCaches;
- (void)clearDiskCache;
- (void)copyDiskCacheFileWithIdentifier:(id)identifier completion:(id /* block */)completion;
- (id)cacheOfType:(long long)type;
- (void)_tip_applicationDidEnterBackground;

@end

#endif /* TIPImagePipeline_h */

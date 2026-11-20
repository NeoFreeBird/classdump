//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TVPDownloadPlaylistItemProvider_h
#define TVPDownloadPlaylistItemProvider_h
@import Foundation;

#include "TAVAnalyticsPlaylistItemMetadata.h"
#include "TAVPlayerOutputViewFactory-Protocol.h"
#include "TAVPlaylistItemProvider-Protocol.h"
#include "TAVVideoContext.h"
#include "TVPPlayerDownloadItem.h"
#include "TVPPlayerDownloadItemDelegate-Protocol.h"

@class NSObject, NSString, NSURL;

@interface TVPDownloadPlaylistItemProvider : NSObject <TVPPlayerDownloadItemDelegate, TAVPlaylistItemProvider>

@property (readonly, nonatomic) TVPPlayerDownloadItem *downloadItem;
@property (readonly, nonatomic) TAVVideoContext *videoContext;
@property (readonly, copy, nonatomic) TAVAnalyticsPlaylistItemMetadata *analyticsMetadata;
@property (readonly, nonatomic) _Bool prefersLooping;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly, nonatomic) unsigned long long maximumRetries;
@property (readonly, copy, nonatomic) NSString *errorHint;
@property (readonly, nonatomic) id <TAVPlayerOutputViewFactory> outputViewFactory;
@property (readonly, copy, nonatomic) NSURL *sourceURL;
@property (nonatomic) _Bool disableVideoRendering;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithSourceURL:(id)url alternativeURLs:(id)urls videoContext:(id)context analyticsMetadata:(id)metadata prefersLooping:(_Bool)looping maximumRetries:(unsigned long long)retries errorHint:(id)hint outputViewFactory:(id)factory;
- (void)providePlaylistItemWithCompletion:(id /* block */)completion;
- (void)playerDownloadItemDidFinish:(id)finish;
- (void)_tfn_completeWithURL:(id)url error:(id)error;
- (id)_tfn_playlistItemWithDownloadedURL:(id)url;

@end

#endif /* TVPDownloadPlaylistItemProvider_h */

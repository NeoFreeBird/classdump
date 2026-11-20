//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVFoundationAssetResourceLoader_h
#define TAVFoundationAssetResourceLoader_h
@import Foundation;

#include "AVAssetResourceLoaderDelegate-Protocol.h"
#include "TAVDownloader-Protocol.h"
#include "TAVFoundationAssetPlaylistContents.h"

@class NSObject, NSString;

@interface TAVFoundationAssetResourceLoader : NSObject <AVAssetResourceLoaderDelegate>

@property (readonly, nonatomic) id <TAVDownloader> downloader;
@property (readonly, nonatomic) _Bool downloadAllPlaylists;
@property (readonly, nonatomic) TAVFoundationAssetPlaylistContents *playlistContents;
@property (readonly, nonatomic) NSString *originalScheme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)tav_resourceLoaderQueue;
+ (id)twitterURLSchemeFromURL:(id)url;
+ (id)urlByReplacingCustomSchemeWithHttpSchemeFromURL:(id)url;

/* instance methods */
- (id)initWithDownloader:(id)downloader originalURL:(id)url downloadAllPlaylists:(_Bool)playlists playlistContents:(id)contents;
- (_Bool)resourceLoader:(id)loader shouldWaitForLoadingOfRequestedResource:(id)resource;

@end

#endif /* TAVFoundationAssetResourceLoader_h */

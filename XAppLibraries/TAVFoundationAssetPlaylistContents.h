//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVFoundationAssetPlaylistContents_h
#define TAVFoundationAssetPlaylistContents_h
@import Foundation;

@class NSDictionary, NSObject;

@interface TAVFoundationAssetPlaylistContents : NSObject

@property (readonly, nonatomic) NSDictionary *playlistRelativePathsAndData;

/* instance methods */
- (id)initWithHLSPlaylists:(id)hlsplaylists masterPlaylistRewriteBlock:(id /* block */)block;

@end

#endif /* TAVFoundationAssetPlaylistContents_h */

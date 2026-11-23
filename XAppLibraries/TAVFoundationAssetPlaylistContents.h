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

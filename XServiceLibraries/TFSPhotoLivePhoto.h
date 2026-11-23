//
#ifndef TFSPhotoLivePhoto_h
#define TFSPhotoLivePhoto_h
@import Foundation;

@class NSObject;

@interface TFSPhotoLivePhoto : NSObject

/* class methods */
+ (void)createLoopedGIFWithLivePhotoAsset:(id)asset options:(id)options boomerang:(_Bool)boomerang crossfade:(_Bool)crossfade completionHandler:(id /* block */)handler;
+ (void)createLoopedGIFWithVideoURL:(id)url boomerang:(_Bool)boomerang crossfade:(_Bool)crossfade completionHandler:(id /* block */)handler;
+ (void)createLoopedGIFWithAVAsset:(id)avasset boomerang:(_Bool)boomerang crossfade:(_Bool)crossfade configureGenerator:(id /* block */)generator completionHandler:(id /* block */)handler;
+ (id)loopedGIFFromImages:(id)images frameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })duration crossfade:(_Bool)crossfade;

@end

#endif /* TFSPhotoLivePhoto_h */

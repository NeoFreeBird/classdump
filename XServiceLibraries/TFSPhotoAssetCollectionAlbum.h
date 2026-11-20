//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSPhotoAssetCollectionAlbum_h
#define TFSPhotoAssetCollectionAlbum_h
@import Foundation;

@class NSObject, NSString;

@interface TFSPhotoAssetCollectionAlbum : NSObject

@property (readonly, copy, nonatomic) NSString *localizedTitle;

/* instance methods */
- (id)init;
- (id)initWithLocalizedTitle:(id)title;
- (void)addAssets:(id)assets completionHandler:(id /* block */)handler;
- (void)_performChangesWithAssetCollectionChangeRequest:(id /* block */)request completionHandler:(id /* block */)handler;
- (id)_fetchAssetCollection;

@end

#endif /* TFSPhotoAssetCollectionAlbum_h */

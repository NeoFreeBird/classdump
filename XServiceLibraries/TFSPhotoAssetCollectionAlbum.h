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

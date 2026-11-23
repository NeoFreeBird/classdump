//
#ifndef TTMPhotoAlbum_h
#define TTMPhotoAlbum_h
@import Foundation;

#include "TTMRecentPhotoAssetLocalIdentifiersStore.h"

@class NSObject, TFSPhotoAssetCollectionAlbum;

@interface TTMPhotoAlbum : NSObject

@property (retain, nonatomic) TTMRecentPhotoAssetLocalIdentifiersStore *assetLocalIdentifiersStore;
@property (readonly, nonatomic) TFSPhotoAssetCollectionAlbum *assetCollectionAlbum;

/* class methods */
+ (id)defaultPhotoAlbum;

/* instance methods */
- (id)init;
- (id)initWithAssetCollectionAlbum:(id)album;
- (void)createPhotoAssetFromImage:(id)image withAuthorizationInstructions:(_Bool)instructions completionHandler:(id /* block */)handler;
- (void)createPhotoAssetFromImageData:(id)data withAuthorizationInstructions:(_Bool)instructions completionHandler:(id /* block */)handler;
- (void)createPhotoAssetFromImageAtFileURL:(id)url withAuthorizationInstructions:(_Bool)instructions completionHandler:(id /* block */)handler;
- (void)createPhotoAssetFromVideoAtFileURL:(id)url withAuthorizationInstructions:(_Bool)instructions completionHandler:(id /* block */)handler;
- (void)_authorizeAndPerformAssetCreationChange:(id /* block */)change withAuthorizationInstructions:(_Bool)instructions completionHandler:(id /* block */)handler;
- (void)_performAssetCreationChange:(id /* block */)change completionHandler:(id /* block */)handler;
- (id)recentPhotoAssetLocalIdentifiersSince:(id)since;

@end

#endif /* TTMPhotoAlbum_h */

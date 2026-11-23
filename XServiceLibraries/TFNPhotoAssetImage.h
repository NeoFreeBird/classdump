//
#ifndef TFNPhotoAssetImage_h
#define TFNPhotoAssetImage_h
@import Foundation;

@class NSData, NSDictionary, NSObject, NSString, PHAsset, UIImage;

@interface TFNPhotoAssetImage : NSObject

@property (nonatomic) _Bool needsToTestAnimatedGIF;
@property (readonly, nonatomic) PHAsset *asset;
@property (readonly, nonatomic) NSData *imageData;
@property (readonly, copy, nonatomic) NSString *imageDataUTI;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) NSDictionary *metadata;
@property (readonly, nonatomic) _Bool animatedGIF;
@property (readonly, copy, nonatomic) NSString *caption;

/* class methods */
+ (void)requestAssetImageForAsset:(id)asset resultHandler:(id /* block */)handler;
+ (void)requestAssetImageForAsset:(id)asset allowNetworkAccess:(_Bool)access resultHandler:(id /* block */)handler;

/* instance methods */
- (id)init;
- (id)initWithAsset:(id)asset imageData:(id)data imageDataUTI:(id)uti;
- (_Bool)isAnimatedGIF;

@end

#endif /* TFNPhotoAssetImage_h */

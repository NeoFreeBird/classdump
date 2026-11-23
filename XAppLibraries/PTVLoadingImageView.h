//
#ifndef PTVLoadingImageView_h
#define PTVLoadingImageView_h
@import Foundation;

#include "PTVImageLoader.h"
#include "PTVImageLoaderDelegate-Protocol.h"
#include "PTVImageLoaderSource-Protocol.h"
#include "PTVLoadingImageViewDelegate-Protocol.h"
#include "PTVProfileImageEntity-Protocol.h"
#include "PTVWorkClient.h"

@class NSString, NSURL, UIColor, UIImage, UIImageView, UIView;

@interface PTVLoadingImageView : UIView <PTVImageLoaderDelegate> {
    /* instance variables */
    UIColor *_storedBackgroundColor;
    _Bool _shouldShowDropShadow;
}

@property (weak, nonatomic) id <PTVLoadingImageViewDelegate> delegate;
@property (readonly, nonatomic) int state;
@property (readonly, nonatomic) PTVWorkClient *workClient;
@property (readonly, nonatomic) PTVImageLoader *imageLoader;
@property (retain, nonatomic) id <PTVImageLoaderSource> imageSource;
@property (readonly, nonatomic) _Bool canLoadFromNetwork;
@property (nonatomic) long long cachePolicy;
@property (readonly, nonatomic) UIImage *loadedImage;
@property (nonatomic) _Bool clearsOnLoad;
@property (nonatomic) _Bool animatesOnImmediate;
@property (nonatomic) _Bool animatesOnEventual;
@property (retain, nonatomic) NSURL *imageURL;
@property (readonly, nonatomic) id <PTVProfileImageEntity> entity;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (readonly, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) UIImage *image;
@property (nonatomic) _Bool shouldShowBlackBackgroundWhenImageIsMissing;
@property (nonatomic) _Bool useBlur;
@property (nonatomic) long long blurImageStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (Class)ImageLoaderClass;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)setContentMode:(long long)mode;
- (void)setAlpha:(double)alpha;
- (void)setBackgroundColor:(id)color;
- (_Bool)imageLoaderCanLoadFromNetwork:(id)network;
- (void)imageLoader:(id)loader willChangeStateTo:(long long)to;
- (void)imageLoader:(id)loader didChangeStateFrom:(long long)from;
- (void)imageLoader:(id)loader didChangeImageFrom:(id)from;
- (void)willChangeStateTo:(int)to;
- (void)didChangeStateFrom:(int)from;
- (void)updateImage:(id)image;
- (void)setImage:(id)image animated:(_Bool)animated;
- (void)setImageClipsToBounds:(_Bool)bounds;
- (void)setImageCornerRadius:(double)radius;
- (void)setShouldShowDropShadow:(_Bool)shadow;
- (void)setDropShadowOpacity;
- (id)imageLoaderURLSource;
- (void)setImageURL:(id)url cacheKey:(id)key;
- (void)setImageURL:(id)url useCircularCrop:(_Bool)crop;
- (void)setImageURL:(id)url overlayColor:(id)color useCircularCrop:(_Bool)crop;
- (void)setEntity:(id)entity formatType:(unsigned long long)type;
- (void)setImageAfterBlurring:(id)blurring animated:(_Bool)animated;

@end

#endif /* PTVLoadingImageView_h */

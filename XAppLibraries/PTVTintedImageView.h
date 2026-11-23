//
#ifndef PTVTintedImageView_h
#define PTVTintedImageView_h
@import Foundation;

#include "PTVWorkClient.h"
#include "PTVWorkClientDelegate-Protocol.h"

@class NSString, UIColor, UIImage, UIImageView;

@interface PTVTintedImageView : UIImageView <PTVWorkClientDelegate> {
    /* instance variables */
    PTVWorkClient *_workClient;
    UIColor *_imageTintColor;
    NSString *_cacheKey;
    UIImage *_originalImage;
}

@property (retain, nonatomic) UIImage *image;
@property (readonly) struct CGSize { double x0; double x1; } imageSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithImage:(id)image;
- (void)setImage:(id)image tintColor:(id)color cachePrefix:(id)prefix;
- (void)setTintColor:(id)color cachePrefix:(id)prefix;
- (id)cacheKeyForColor:(id)color prefix:(id)prefix;
- (id)context;
- (void)load:(long long)load;
- (void)immediate:(id)immediate context:(id)context loadingFromNetwork:(_Bool)network;
- (void)eventual:(id)eventual context:(id)context;
- (void)error:(id)error context:(id)context;

@end

#endif /* PTVTintedImageView_h */

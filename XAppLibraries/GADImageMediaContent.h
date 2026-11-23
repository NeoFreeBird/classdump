//
#ifndef GADImageMediaContent_h
#define GADImageMediaContent_h
@import Foundation;

#include "GADAdVideoController.h"
#include "GADMediaContentDisplaying-Protocol.h"
#include "GADNativeAdImage.h"

@class NSObject, NSString, UIImageView, UIView;

@interface GADImageMediaContent : NSObject <GADMediaContentDisplaying> {
    /* instance variables */
    UIImageView *_imageView;
}

@property (readonly, nonatomic) UIView *mediaView;
@property (readonly, nonatomic) GADAdVideoController *videoController;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (readonly, nonatomic) double aspectRatio;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double currentTime;
@property (retain, nonatomic) GADNativeAdImage *mainImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMainImage:(id)image;

@end

#endif /* GADImageMediaContent_h */

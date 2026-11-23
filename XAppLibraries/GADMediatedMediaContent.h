//
#ifndef GADMediatedMediaContent_h
#define GADMediatedMediaContent_h
@import Foundation;

#include "GADAdVideoController.h"
#include "GADMediaContentDisplaying-Protocol.h"
#include "GADMediatedUnifiedNativeAd-Protocol.h"
#include "GADNativeAdImage.h"

@class NSObject, NSString, UIImageView, UIView;

@interface GADMediatedMediaContent : NSObject <GADMediaContentDisplaying> {
    /* instance variables */
    id <GADMediatedUnifiedNativeAd> _mediatedNativeAd;
    _Atomic double _mainImageAspectRatio;
    UIImageView *_mainImageView;
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
- (id)initWithMediatedNativeAd:(id)ad mainImage:(id)image;
- (_Bool)isValidTimeInterval:(double)interval;

@end

#endif /* GADMediatedMediaContent_h */

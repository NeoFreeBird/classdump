//
#ifndef GADMediaContent_h
#define GADMediaContent_h
@import Foundation;

#include "GADInternalNativeAd.h"
#include "GADMediaContentDisplaying-Protocol.h"
#include "GADVideoController.h"

@class NSObject;

@interface GADMediaContent : NSObject

@property (retain, nonatomic) id <GADMediaContentDisplaying> internalMediaContent;
@property (weak, nonatomic) GADInternalNativeAd *internalCustomNativeAd;
@property (readonly, nonatomic) GADVideoController *videoController;
@property (readonly, nonatomic) _Bool hasVideoContent;
@property (readonly, nonatomic) double aspectRatio;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double currentTime;

/* instance methods */
- (id)mainImage;
- (void)setMainImage:(id)image;

@end

#endif /* GADMediaContent_h */

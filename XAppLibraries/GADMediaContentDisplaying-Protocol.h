//
#ifndef GADMediaContentDisplaying_Protocol_h
#define GADMediaContentDisplaying_Protocol_h
@import Foundation;

#include "GADAdVideoController.h"
#include "GADNativeAdImage.h"
#include "NSObject-Protocol.h"

@class UIView;

@protocol GADMediaContentDisplaying <NSObject>

@required

@property (readonly, nonatomic) UIView *mediaView;
@property (readonly, nonatomic) GADAdVideoController *videoController;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (readonly, nonatomic) double aspectRatio;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double currentTime;
@property (retain, nonatomic) GADNativeAdImage *mainImage;

@optional

@end

#endif /* GADMediaContentDisplaying_Protocol_h */

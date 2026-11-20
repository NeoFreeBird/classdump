//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADImmersiveVideoMediaContent_h
#define GADImmersiveVideoMediaContent_h
@import Foundation;

#include "GADAdVideoController.h"
#include "GADEventContext.h"
#include "GADMediaContentDisplaying-Protocol.h"
#include "GADNativeAdImage.h"
#include "GADObserverCollection.h"
#include "GADWebAdView.h"

@class NSDictionary, NSObject, NSString, UIView;

@interface GADImmersiveVideoMediaContent : NSObject <GADMediaContentDisplaying> {
    /* instance variables */
    NSDictionary *_adConfiguration;
    NSDictionary *_videoConfiguration;
    GADEventContext *_eventContext;
    GADObserverCollection *_observers;
    GADWebAdView *_nativeVideoJSAdView;
    id /* block */ _completionHandler;
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
- (id)initWithAdConfiguration:(id)configuration eventContext:(id)context;
- (void)loadNativeVideoJS:(id /* block */)js;
- (void)recordEvent:(id)event;
- (void)addObservers;
- (void)renderVideoDictionary;
- (void)videoSourceGmsgObserved:(id)observed;
- (void)finishLoadingWithSourceURLString:(id)urlstring error:(id)error;

@end

#endif /* GADImmersiveVideoMediaContent_h */

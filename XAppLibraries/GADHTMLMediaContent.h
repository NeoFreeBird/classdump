//
#ifndef GADHTMLMediaContent_h
#define GADHTMLMediaContent_h
@import Foundation;

#include "GADAdLoadMonitor.h"
#include "GADAdVideoController.h"
#include "GADEventContext.h"
#include "GADEventContextSource-Protocol.h"
#include "GADInternalNativeAd.h"
#include "GADMediaContentDisplaying-Protocol.h"
#include "GADMonitorOwner-Protocol.h"
#include "GADNativeAdImage.h"
#include "GADViewVisibilityMonitor.h"
#include "GADWebAdView.h"

@class NSDictionary, NSMutableArray, NSObject, NSString, UIView;
@protocol OS_dispatch_queue;

@interface GADHTMLMediaContent : NSObject <GADEventContextSource, GADMediaContentDisplaying, GADMonitorOwner> {
    /* instance variables */
    NSDictionary *_adConfiguration;
    NSDictionary *_mediaConfiguration;
    GADInternalNativeAd *_internalNativeAd;
    GADWebAdView *_adView;
    NSMutableArray *_adViewMonitors;
    GADAdLoadMonitor *_adLoadMonitor;
    GADViewVisibilityMonitor *_viewVisibilityMonitor;
    NSDictionary *_videoOptions;
    id /* block */ _completionHandler;
    struct atomic_flag { _Atomic _Bool _Value; } _completionHandlerExecuted;
    NSObject<OS_dispatch_queue> *_lockQueue;
}

@property (readonly, nonatomic) GADEventContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *mediaView;
@property (readonly, nonatomic) GADAdVideoController *videoController;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (readonly, nonatomic) double aspectRatio;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double currentTime;
@property (retain, nonatomic) GADNativeAdImage *mainImage;

/* instance methods */
- (id)initWithInternalNativeAd:(id)ad adConfiguration:(id)configuration mediaConfiguration:(id)configuration;
- (_Bool)isVideo;
- (void)loadMediaContentWithCompletionHandler:(id /* block */)handler;
- (void)createAndLoadAdView;
- (void)attachMonitors;
- (void)finishLoadingWithError:(id)error;
- (void)performPostLoadActions;
- (void)registerOverlayViewObservers:(id)observers;
- (void)addMonitor:(id)monitor;

@end

#endif /* GADHTMLMediaContent_h */

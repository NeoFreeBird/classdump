//
#ifndef GADInternalBannerView_h
#define GADInternalBannerView_h
@import Foundation;

#include "GADAdSizeDelegate-Protocol.h"
#include "GADAdSource.h"
#include "GADAppEventDelegate-Protocol.h"
#include "GADBannerAd.h"
#include "GADBannerViewDelegate-Protocol.h"
#include "GADEventContext.h"
#include "GADEventContextSource-Protocol.h"
#include "GADIntrinsicContentSizeDelegate-Protocol.h"
#include "GADObserverCollection.h"
#include "GADRefreshTimer.h"
#include "GADRequest.h"
#include "GADResponseInfo.h"
#include "GADVideoController.h"

@class NSArray, NSError, NSObject, NSString, UIView, UIViewController;
@protocol OS_dispatch_queue;

@interface GADInternalBannerView : UIView <GADEventContextSource> {
    /* instance variables */
    GADAdSource *_adSource;
    _Bool _requestInProgress;
    struct GADAdSize { struct CGSize { double width; double height; } size; unsigned long long flags; } _lastRequestedAdSize;
    GADObserverCollection *_adObservers;
    GADRefreshTimer *_refreshTimer;
    GADRequest *_refreshRequest;
    struct GADAdSize { struct CGSize { double width; double height; } size; unsigned long long flags; } _refreshAdSize;
    _Bool _hasAdSize;
    NSArray *_adOptions;
    _Bool _intermissionInProgress;
    NSObject<OS_dispatch_queue> *_lockQueue;
    double _refreshLoadDelayInterval;
    GADBannerAd *_loadedRefreshAd;
    GADResponseInfo *_refreshResponseInfo;
    _Bool _setAdAfterLoaded;
    NSError *_delayRefreshAdLoadError;
}

@property (copy, nonatomic) NSString *adUnitID;
@property (weak, nonatomic) UIViewController *rootViewController;
@property (nonatomic) struct GADAdSize { struct CGSize { double x0; double x1; } x0; unsigned long long x1; } adSize;
@property (readonly, weak, nonatomic) id <GADBannerViewDelegate, GADAppEventDelegate, GADAdSizeDelegate, GADIntrinsicContentSizeDelegate> delegate;
@property (copy) id /* block */ paidEventHandler;
@property (readonly, nonatomic) GADResponseInfo *responseInfo;
@property (readonly, nonatomic) GADBannerAd *bannerAd;
@property (nonatomic) _Bool enableManualImpressions;
@property (readonly, nonatomic) GADVideoController *videoController;
@property (copy, nonatomic) NSArray *validAdSizes;
@property (readonly, nonatomic) GADEventContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame adSize:(struct GADAdSize { struct CGSize { double x0; double x1; } x0; unsigned long long x1; })size;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithAdSize:(struct GADAdSize { struct CGSize { double x0; double x1; } x0; unsigned long long x1; })size origin:(struct CGPoint { double x0; double x1; })origin delegate:(id)delegate;
- (id)initWithCoder:(id)coder;
- (void)commonInit;
- (void)initializeAdSource;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setResponseInfo:(id)info andUpdateRefreshTimerWithAd:(id)ad;
- (void)updateRefreshTimerWithResponseInfo:(id)info ad:(id)ad;
- (struct GADAdSize { struct CGSize { double x0; double x1; } x0; unsigned long long x1; })adSizeForTargeting;
- (void)updateTargeting:(id)targeting;
- (void)loadRequest:(id)request;
- (void)loadWithAdResponseString:(id)string;
- (void)loadAd:(id)ad responseInfo:(id)info error:(id)error completionHandler:(id /* block */)handler;
- (_Bool)shouldOverrideInProgressRequest;
- (void)loadWithTargeting:(id)targeting completionHandler:(id /* block */)handler;
- (void)callBackAdViewDidReceiveAd;
- (void)adLoadCompletedWithError:(id)error;
- (void)setAdOptions:(id)options;
- (id)adSource;
- (double)refreshLoadDelayInterval;
- (void)refresh;
- (void)attachContentSizeObservers;
- (void)intrinsicContentSizeDidChange:(struct CGSize { double x0; double x1; })change;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)resize:(struct GADAdSize { struct CGSize { double x0; double x1; } x0; unsigned long long x1; })resize;
- (void)attachLifecycleEventObservers;

@end

#endif /* GADInternalBannerView_h */

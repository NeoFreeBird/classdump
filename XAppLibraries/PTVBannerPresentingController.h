//
#ifndef PTVBannerPresentingController_h
#define PTVBannerPresentingController_h
@import Foundation;

#include "PTVBannerViewController.h"
#include "PTVBannerWindow.h"

@class NSMutableArray, NSObject, UIWindow;

@interface PTVBannerPresentingController : NSObject

@property (retain, nonatomic) UIWindow *previousKeyWindow;
@property (retain, nonatomic) PTVBannerWindow *bannerWindow;
@property (retain, nonatomic) PTVBannerViewController *bannerViewController;
@property (retain, nonatomic) NSMutableArray *presentedBanners;

/* class methods */
+ (id)BannerPresentingController;
+ (_Bool)ShowingBanners;
+ (void)PresentViewAsBanner:(id)banner;
+ (void)SetStatusBarHidden:(_Bool)hidden;
+ (void)BannerViewContainerNeedsLayout;

/* instance methods */
- (void)dealloc;
- (id)init;
- (void)presentViewAsBanner:(id)banner;
- (void)presentNextBanner;
- (void)mainQueue_presentNextBanner;
- (void)bannerViewDidDismiss:(id)dismiss fromWindow:(id)window;
- (void)addBannerToPresentedBannersArray:(id)array;
- (void)removePresentedBannerFromArray:(id)array;

@end

#endif /* PTVBannerPresentingController_h */

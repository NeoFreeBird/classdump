//
#ifndef _TtP8BrazeKit20BrazeBannerPlacement__Protocol_h
#define _TtP8BrazeKit20BrazeBannerPlacement__Protocol_h
@import Foundation;

@class NSString;

@protocol BrazeKit.BrazeBannerPlacement

@required

@property (nonatomic, readonly) NSString *placementId;
@property (nonatomic, copy) id /* block */ onDismiss;

/* required instance methods */
- (void)renderWithBanner:(id)banner;
- (void)notifyError:(id)error;

@optional

/* optional instance methods */
- (void)removeBannerContent;

@end

#endif /* _TtP8BrazeKit20BrazeBannerPlacement__Protocol_h */

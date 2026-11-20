//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADMediatedUnifiedNativeAd_Protocol_h
#define GADMediatedUnifiedNativeAd_Protocol_h
@import Foundation;

#include "GADNativeAdImage.h"
#include "NSObject-Protocol.h"

@class NSArray, NSDecimalNumber, NSDictionary, NSString, UIView;

@protocol GADMediatedUnifiedNativeAd <NSObject>

@required

@property (readonly, copy, nonatomic) NSString *headline;
@property (readonly, nonatomic) NSArray *images;
@property (readonly, copy, nonatomic) NSString *body;
@property (readonly, nonatomic) GADNativeAdImage *icon;
@property (readonly, copy, nonatomic) NSString *callToAction;
@property (readonly, copy, nonatomic) NSDecimalNumber *starRating;
@property (readonly, copy, nonatomic) NSString *store;
@property (readonly, copy, nonatomic) NSString *price;
@property (readonly, copy, nonatomic) NSString *advertiser;
@property (readonly, copy, nonatomic) NSDictionary *extraAssets;

@optional

@property (readonly, nonatomic) UIView *adChoicesView;
@property (readonly, nonatomic) UIView *mediaView;
@property (readonly, nonatomic) _Bool hasVideoContent;
@property (readonly, nonatomic) double mediaContentAspectRatio;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double currentTime;

/* optional instance methods */
- (void)didRenderInView:(id)view clickableAssetViews:(id)views nonclickableAssetViews:(id)views viewController:(id)controller;
- (void)didRecordImpression;
- (void)didRecordClickOnAssetWithName:(id)name view:(id)view viewController:(id)controller;
- (void)didUntrackView:(id)view;

@end

#endif /* GADMediatedUnifiedNativeAd_Protocol_h */

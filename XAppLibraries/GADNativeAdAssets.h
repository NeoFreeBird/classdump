//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADNativeAdAssets_h
#define GADNativeAdAssets_h
@import Foundation;

#include "GADMediaContentDisplaying-Protocol.h"
#include "GADNativeAdAssetsDataSource-Protocol.h"
#include "GADNativeAdAttribution.h"
#include "GADNativeAdImage.h"

@class NSArray, NSDecimalNumber, NSDictionary, NSObject, NSString, NSURL, UIView;

@interface GADNativeAdAssets : NSObject <GADNativeAdAssetsDataSource> {
    /* instance variables */
    NSDictionary *_assets;
}

@property (readonly, copy, nonatomic) NSString *headline;
@property (readonly, copy, nonatomic) NSString *callToAction;
@property (readonly, nonatomic) GADNativeAdImage *icon;
@property (readonly, copy, nonatomic) NSString *body;
@property (readonly, copy, nonatomic) NSArray *images;
@property (readonly, copy, nonatomic) NSDecimalNumber *starRating;
@property (readonly, copy, nonatomic) NSString *store;
@property (readonly, copy, nonatomic) NSString *price;
@property (readonly, copy, nonatomic) NSString *advertiser;
@property (readonly, nonatomic) UIView *adChoicesView;
@property (readonly, nonatomic) GADNativeAdAttribution *attribution;
@property (readonly, nonatomic) id <GADMediaContentDisplaying> mediaContent;
@property (readonly, copy, nonatomic) NSDictionary *extraAssets;
@property (readonly, copy, nonatomic) NSDictionary *customAssets;
@property (readonly, copy, nonatomic) NSURL *muteThisAdDefaultMuteURL;
@property (readonly, copy, nonatomic) NSArray *muteThisAdReasons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAssets:(id)assets;

@end

#endif /* GADNativeAdAssets_h */

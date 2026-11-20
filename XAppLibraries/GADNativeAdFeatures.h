//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADNativeAdFeatures_h
#define GADNativeAdFeatures_h
@import Foundation;

@class NSObject, NSString, NSURL;

@interface GADNativeAdFeatures : NSObject

@property (readonly, nonatomic) _Bool publisherClickReportingAllowed;
@property (readonly, nonatomic) _Bool publisherTouchReportingAllowed;
@property (readonly, nonatomic) _Bool publisherImpressionReportingAllowed;
@property (readonly, nonatomic) _Bool publisherRenderAdChoicesAllowed;
@property (readonly, nonatomic) _Bool publisherOwnedAdViewAllowed;
@property (readonly, nonatomic) _Bool customOnePointFiveClickAllowlisted;
@property (readonly, nonatomic) _Bool customClickGestureAllowed;
@property (readonly, nonatomic) NSURL *nativeAdValidatorURL;
@property (readonly, nonatomic) NSString *customFormatID;
@property (readonly, nonatomic) long long preferredAdChoicesPosition;
@property (readonly, nonatomic) _Bool customMuteThisAdRequested;
@property (readonly, nonatomic) long long mediaType;

/* instance methods */
- (id)initWithAdConfiguration:(id)configuration nativeOptions:(id)options;

@end

#endif /* GADNativeAdFeatures_h */

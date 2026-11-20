//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADReportingInfo_h
#define GADReportingInfo_h
@import Foundation;

@class NSMapTable, NSObject, UIView;

@interface GADReportingInfo : NSObject {
    /* instance variables */
    NSMapTable *_assets;
}

@property (readonly, weak, nonatomic) UIView *view;

/* instance methods */
- (id)initWithView:(id)view assetViews:(id)views;
- (void)updateImpressionURLs:(id)urls completionHandler:(id /* block */)handler;
- (void)updateClickURLs:(id)urls completionHandler:(id /* block */)handler;
- (void)updateClickURL:(id)url completionHandler:(id /* block */)handler;
- (void)recordImpressionWithURLs:(id)urls;
- (void)recordClickWithURLs:(id)urls;

@end

#endif /* GADReportingInfo_h */

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

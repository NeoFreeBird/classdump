//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NSURL_T1Safety_h
#define NSURL_T1Safety_h
@import Foundation;

@interface NSURL (T1Safety)

/* class methods */
+ (id)URLWithBlockOrReportContext:(id)context account:(id)account;
+ (id)webviewAuthURLWithBaseUrlString:(id)string params:(id)params;
+ (id)addInitiatedInAppAndLangToQueryString:(id)string;
+ (id)addKnownDeviceTokenAndAuthTimelineTokenToQueryString:(id)string knownDeviceToken:(id)token authTimelineToken:(id)token;
+ (id)urlStringByAppendingQueryString:(id)string baseStr:(id)str;
+ (id)featureFromBouncerURL:(id)url;

@end

#endif /* NSURL_T1Safety_h */

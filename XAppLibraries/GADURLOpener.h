//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADURLOpener_h
#define GADURLOpener_h
@import Foundation;

@class NSObject;

@interface GADURLOpener : NSObject

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (void)openURL:(id)url forAd:(id)ad;
- (void)openDeepLinkURL:(id)url forAd:(id)ad completionHandler:(id /* block */)handler;

@end

#endif /* GADURLOpener_h */

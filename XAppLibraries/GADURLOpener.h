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

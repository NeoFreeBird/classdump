//
#ifndef GADNativeAdSettings_h
#define GADNativeAdSettings_h
@import Foundation;

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface GADNativeAdSettings : NSObject {
    /* instance variables */
    NSMutableDictionary *_nativeAdSettings;
    NSObject<OS_dispatch_queue> *_lockQueue;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)mediaViewUnavailableToRenderMediaContentForAdType:(id)type;
- (id)nativeAdSettings;

@end

#endif /* GADNativeAdSettings_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef HFHealthSafetyFeature_h
#define HFHealthSafetyFeature_h
@import Foundation;

@class NSObject;

@interface HFHealthSafetyFeature : NSObject // (Swift)

/* class methods */
+ (_Bool)isToxicReplyFilterInlineCalloutEnabled:(id)enabled;
+ (_Bool)isToxicReplyFilterSettingsEnabled:(id)enabled;
+ (_Bool)isUCPDEnabled:(id)ucpdenabled;
+ (_Bool)isTweetMedialInterstitialEnabled:(id)enabled;

/* instance methods */
- (id)init;

@end

#endif /* HFHealthSafetyFeature_h */

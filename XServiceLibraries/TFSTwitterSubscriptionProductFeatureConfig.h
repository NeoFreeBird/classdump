//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterSubscriptionProductFeatureConfig_h
#define TFSTwitterSubscriptionProductFeatureConfig_h
@import Foundation;

@class NSObject;

@interface TFSTwitterSubscriptionProductFeatureConfig : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 featureId;
    B24@0:8@"NSString"16 title;
    B24@0:8@"NSString"16 summary;
    B24@0:8@"NSString"16 icon;
    B24@0:8@"NSString"16 isLabsFeature;
    B24@0:8@"NSString"16 featureSwitches;
}

/* instance methods */
- (id)initWithFeatureId:(id)id title:(id)title summary:(id)summary icon:(id)icon isLabsFeature:(_Bool)feature featureSwitches:(id)switches;
- (id)init;

@end

#endif /* TFSTwitterSubscriptionProductFeatureConfig_h */

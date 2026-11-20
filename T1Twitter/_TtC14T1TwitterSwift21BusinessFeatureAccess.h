//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift21BusinessFeatureAccess_h
#define _TtC14T1TwitterSwift21BusinessFeatureAccess_h
@import Foundation;

@class NSObject, NSString, _$sSo24TPSFeatureSwitchesAccess_p;

@interface T1TwitterSwift.BusinessFeatureAccess : NSObject { // (Swift)
    /* instance variables */
    __C.TPSFeatureSwitchesAccess featureSwitches;
}

@property (nonatomic, readonly) _Bool isBusinessPromoNavEnabled;
@property (nonatomic, readonly) _Bool isBusinessPromoNavPremPlusOnlyEnabled;
@property (nonatomic, readonly) NSString *navPromoBadgeLabelVariant;

/* instance methods */
- (id)initWithFeatureSwitches:(id)switches;
- (_Bool)shouldShowNavPromoToAccount:(id)account;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift21BusinessFeatureAccess_h */

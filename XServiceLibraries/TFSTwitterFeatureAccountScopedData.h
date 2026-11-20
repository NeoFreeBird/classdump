//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterFeatureAccountScopedData_h
#define TFSTwitterFeatureAccountScopedData_h
@import Foundation;

@class NSObject;

@interface TFSTwitterFeatureAccountScopedData : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 accountScopedFeatures;
}

/* instance methods */
- (void)loadAccountDetailInfo;
- (void)saveAccountDetailInfo;
- (id)featureForIdentifier:(id)identifier;
- (id)init;

@end

#endif /* TFSTwitterFeatureAccountScopedData_h */

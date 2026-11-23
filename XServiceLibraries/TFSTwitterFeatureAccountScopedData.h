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

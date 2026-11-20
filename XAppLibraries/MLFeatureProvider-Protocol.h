//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef MLFeatureProvider_Protocol_h
#define MLFeatureProvider_Protocol_h
@import Foundation;

@class NSSet;

@protocol MLFeatureProvider

@required

@property (nonatomic, readonly) NSSet *featureNames;

/* required instance methods */
- (id)featureValueForName:(id)name;
- (id)featureValueForName:(id)name;

@optional

@end

#endif /* MLFeatureProvider_Protocol_h */

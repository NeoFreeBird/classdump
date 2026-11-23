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

//
#ifndef TFSBooleanFeatureSwitch_h
#define TFSBooleanFeatureSwitch_h
@import Foundation;

@class NSObject;

@interface TFSBooleanFeatureSwitch : NSObject

@property (readonly, nonatomic) _Bool isConfinedToMainThread;
@property (readonly, nonatomic) _Bool defaultValue;
@property (copy, nonatomic) id /* block */ mainThreadBlock;
@property (copy) id /* block */ threadSafeBlock;

/* instance methods */
- (id)initWithMainThreadConfinement:(_Bool)confinement defaultValue:(_Bool)value;
- (void)setIsEnabledBlock:(id /* block */)block;
- (_Bool)isEnabled;

@end

#endif /* TFSBooleanFeatureSwitch_h */

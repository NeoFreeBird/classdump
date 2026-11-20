//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSIntegerFeatureSwitch_h
#define TFSIntegerFeatureSwitch_h
@import Foundation;

@class NSObject;

@interface TFSIntegerFeatureSwitch : NSObject

@property (readonly, nonatomic) _Bool isConfinedToMainThread;
@property (copy, nonatomic) id /* block */ mainThreadBlock;
@property (copy) id /* block */ threadSafeBlock;

/* instance methods */
- (id)initWithMainThreadConfinement:(_Bool)confinement;
- (void)setIntegerValueBlock:(id /* block */)block;
- (long long)integerValue;

@end

#endif /* TFSIntegerFeatureSwitch_h */

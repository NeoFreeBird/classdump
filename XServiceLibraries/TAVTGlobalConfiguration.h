//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVTGlobalConfiguration_h
#define TAVTGlobalConfiguration_h
@import Foundation;

@class NSObject;

@interface TAVTGlobalConfiguration : NSObject // (Swift)

@property (nonatomic) _Bool assertsEnabled;

/* class methods */
+ (id)shared;

/* instance methods */
- (id)init;

@end

#endif /* TAVTGlobalConfiguration_h */

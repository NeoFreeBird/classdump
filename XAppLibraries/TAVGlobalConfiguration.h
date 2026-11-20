//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVGlobalConfiguration_h
#define TAVGlobalConfiguration_h
@import Foundation;

@class NSObject;

@interface TAVGlobalConfiguration : NSObject

@property (nonatomic) _Bool areAssertionsEnabled;

/* class methods */
+ (id)sharedInstance;
+ (id)rootAnalyticsQueue;

/* instance methods */
- (id)init;

@end

#endif /* TAVGlobalConfiguration_h */

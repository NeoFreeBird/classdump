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

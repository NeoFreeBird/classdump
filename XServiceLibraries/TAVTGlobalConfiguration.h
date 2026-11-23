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

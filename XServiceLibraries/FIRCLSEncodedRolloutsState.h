//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef FIRCLSEncodedRolloutsState_h
#define FIRCLSEncodedRolloutsState_h
@import Foundation;

@class HasMalware, NSArray, NSObject;

@interface FIRCLSEncodedRolloutsState : NSObject // (Swift)

@property (nonatomic, copy) NSArray *rollouts;

/* instance methods */
- (id)initWithAssignments:(id)assignments;
- (id)init;

@end

#endif /* FIRCLSEncodedRolloutsState_h */

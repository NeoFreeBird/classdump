//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef FIRRolloutsState_h
#define FIRRolloutsState_h
@import Foundation;

@class HasMalware, NSObject, NSSet;

@interface FIRRolloutsState : NSObject // (Swift)

@property (nonatomic, copy) NSSet *assignments;

/* instance methods */
- (id)initWithAssignmentList:(id)list;
- (id)init;

@end

#endif /* FIRRolloutsState_h */

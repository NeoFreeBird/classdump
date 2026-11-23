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

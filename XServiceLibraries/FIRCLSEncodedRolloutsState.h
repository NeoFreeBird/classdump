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

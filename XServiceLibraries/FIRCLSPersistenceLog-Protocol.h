//
#ifndef FIRCLSPersistenceLog_Protocol_h
#define FIRCLSPersistenceLog_Protocol_h
@import Foundation;

@protocol FIRCLSPersistenceLog

@required

/* required instance methods */
- (void)updateRolloutsStateToPersistenceWithRollouts:(id)rollouts reportID:(id)id;
- (void)debugLogWithMessage:(id)message;

@optional

@end

#endif /* FIRCLSPersistenceLog_Protocol_h */

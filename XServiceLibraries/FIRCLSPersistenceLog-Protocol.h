//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

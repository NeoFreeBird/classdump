//
#ifndef FIRCLSRolloutsPersistenceManager_h
#define FIRCLSRolloutsPersistenceManager_h
@import Foundation;

#include "FIRCLSFileManager.h"
#include "FIRCLSPersistenceLog-Protocol.h"

@class NSObject;
@protocol OS_dispatch_queue;

@interface FIRCLSRolloutsPersistenceManager : NSObject <FIRCLSPersistenceLog>

@property (readonly, nonatomic) FIRCLSFileManager *fileManager;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *rolloutsLoggingQueue;

/* instance methods */
- (id)initWithFileManager:(id)manager andQueue:(id)queue;
- (void)updateRolloutsStateToPersistenceWithRollouts:(id)rollouts reportID:(id)id;
- (void)debugLogWithMessage:(id)message;

@end

#endif /* FIRCLSRolloutsPersistenceManager_h */

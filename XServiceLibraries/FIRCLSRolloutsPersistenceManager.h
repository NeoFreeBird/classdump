//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

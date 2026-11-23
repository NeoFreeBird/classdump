//
#ifndef PTVPublishLifecycleManager_h
#define PTVPublishLifecycleManager_h
@import Foundation;

#include "PTVAccessVideo.h"
#include "PTVVideoAccessManager.h"
#include "PTVVideoAccessManagerDelegate-Protocol.h"
#include "PTVWatchVideoLifecycleManager.h"

@class NSString;

@interface PTVPublishLifecycleManager : PTVWatchVideoLifecycleManager <PTVVideoAccessManagerDelegate>

@property (retain, nonatomic) PTVVideoAccessManager *videoAccessManager;
@property (retain, nonatomic) PTVAccessVideo *videoAccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithVideoAccessManager:(id)manager loggedInUser:(id)user;
- (void)dealloc;
- (id)lifecycleToken;
- (_Bool)shouldSendLifecycleLogData;
- (void)videoAccessManager:(id)manager didUpdateVideoAccess:(id)access previousVideoAccess:(id)access;

@end

#endif /* PTVPublishLifecycleManager_h */

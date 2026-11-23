//
#ifndef TPSHostFetchTask_h
#define TPSHostFetchTask_h
@import Foundation;

#include "TFSFeatureSwitchesFetchTask-Protocol.h"
#include "TPSHost.h"

@class NSObject, NSString;

@interface TPSHostFetchTask : NSObject <TFSFeatureSwitchesFetchTask>

@property (retain, nonatomic) TPSHost *host;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithHost:(id)host;
- (void)fetchFeatureSwitchesForAccountID:(id)id settingsVersion:(id)version featureSetToken:(id)token completion:(id /* block */)completion;

@end

#endif /* TPSHostFetchTask_h */

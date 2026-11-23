//
#ifndef TFNTwitterAccountFetch_h
#define TFNTwitterAccountFetch_h
@import Foundation;

#include "TFNTwitterAccountFetchCancellable-Protocol.h"

@class NSObject, NSString;
@protocol OS_dispatch_queue, TFSTwitterAPICommandCancellable;

@interface TFNTwitterAccountFetch : NSObject <TFNTwitterAccountFetchCancellable>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cancellQueue;
@property (readonly, nonatomic) _Bool cancelled;
@property (retain, nonatomic) id <TFSTwitterAPICommandCancellable> cancellableCommand;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)cancel;
- (_Bool)isCancelled;

@end

#endif /* TFNTwitterAccountFetch_h */

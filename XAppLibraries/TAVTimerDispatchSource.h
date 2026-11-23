//
#ifndef TAVTimerDispatchSource_h
#define TAVTimerDispatchSource_h
@import Foundation;

#include "OS_dispatch_source-Protocol.h"
#include "TAVTimerDispatchSourceProtocol-Protocol.h"

@class NSObject;

@interface TAVTimerDispatchSource : NSObject <TAVTimerDispatchSourceProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_source> *timerDispatchSource;

/* class methods */
+ (id /* block */)defaultFactory;

/* instance methods */
- (id)initWithQueue:(id)queue startDelta:(long long)delta interval:(unsigned long long)interval leeway:(unsigned long long)leeway eventHandler:(id /* block */)handler;
- (void)dealloc;
- (void)cancel;
- (id)init;

@end

#endif /* TAVTimerDispatchSource_h */

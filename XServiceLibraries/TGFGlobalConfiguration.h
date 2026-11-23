//
#ifndef TGFGlobalConfiguration_h
#define TGFGlobalConfiguration_h
@import Foundation;

#include "TGFExecuteContext.h"

@class CIContext, NSObject;
@protocol OS_dispatch_queue, TGFLogger;

@interface TGFGlobalConfiguration : NSObject {
    /* instance variables */
    NSObject<OS_dispatch_queue> *_executeQueue;
    TGFExecuteContext *_executeContext;
    CIContext *_coreImageVanillaContext;
    id <TGFLogger> _internalLogger;
}

@property (readonly, nonatomic) _Bool runningOnExecuteQueue;
@property (retain) id <TGFLogger> logger;
@property (nonatomic) _Bool assertsEnabled;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (_Bool)isRunningOnExecuteQueue;
- (void)_execute:(id /* block */)_execute;
- (void)syncExecute:(id /* block */)execute;
- (void)asyncExecute:(id /* block */)execute;

@end

#endif /* TGFGlobalConfiguration_h */

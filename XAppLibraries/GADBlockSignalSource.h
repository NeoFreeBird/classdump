//
#ifndef GADBlockSignalSource_h
#define GADBlockSignalSource_h
@import Foundation;

#include "GADSignalSource-Protocol.h"

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface GADBlockSignalSource : NSObject <GADSignalSource> {
    /* instance variables */
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _signalBlock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithQueue:(id)queue signalBlock:(id /* block */)block;
- (void)getSignalUpdateQueue:(id *)queue signalCreationBlock:(id /* block */ *)block;

@end

#endif /* GADBlockSignalSource_h */

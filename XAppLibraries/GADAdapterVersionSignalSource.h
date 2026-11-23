//
#ifndef GADAdapterVersionSignalSource_h
#define GADAdapterVersionSignalSource_h
@import Foundation;

#include "GADSignalSource-Protocol.h"

@class NSMutableDictionary, NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface GADAdapterVersionSignalSource : NSObject <GADSignalSource> {
    /* instance variables */
    NSMutableDictionary *_adapterNameToAdapterData;
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSMutableSet *_adaptersRaisingExceptions;
    _Bool _adapterVersionsUpdated;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)registerAdapterClassNameRaisingException:(id)exception;
- (_Bool)doesAdapterClassRaiseExceptions:(id)exceptions;
- (void)updateAdapterVersions;
- (void)getSignalUpdateQueue:(id *)queue signalCreationBlock:(id /* block */ *)block;

@end

#endif /* GADAdapterVersionSignalSource_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADFailingRTBAdapterSignalSource_h
#define GADFailingRTBAdapterSignalSource_h
@import Foundation;

#include "GADSignal-Protocol.h"
#include "GADSignalSource-Protocol.h"

@class NSMutableDictionary, NSObject, NSString;

@interface GADFailingRTBAdapterSignalSource : NSObject <GADSignalSource, GADSignal> {
    /* instance variables */
    NSMutableDictionary *_adapterSignals;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFailedAdapterName:(id)name reason:(long long)reason;
- (void)getSignalUpdateQueue:(id *)queue signalCreationBlock:(id /* block */ *)block;
- (void)addSignalEntriesToMutableDictionary:(id)dictionary;

@end

#endif /* GADFailingRTBAdapterSignalSource_h */

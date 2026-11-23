//
#ifndef GADRTBAdapterSignalSource_h
#define GADRTBAdapterSignalSource_h
@import Foundation;

#include "GADRTBAdapter-Protocol.h"
#include "GADRTBRequestParameters.h"
#include "GADSignal-Protocol.h"
#include "GADSignalSource-Protocol.h"

@class NSMutableDictionary, NSObject, NSString;

@interface GADRTBAdapterSignalSource : NSObject <GADSignalSource, GADSignal> {
    /* instance variables */
    id <GADRTBAdapter> _adapter;
    GADRTBRequestParameters *_requestParameters;
    _Bool _shouldCollectSignals;
    NSMutableDictionary *_adapterSignals;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithRTBAdapter:(id)rtbadapter targeting:(id)targeting shouldCollectSignals:(_Bool)signals;
- (void)adapterSignalsWithCompletionHandler:(id /* block */)handler;
- (void)getAsynchronousSignalCreationBlock:(id /* block */ *)block;
- (void)addSignalEntriesToMutableDictionary:(id)dictionary;
- (void)addAdapterInformationToDictionary:(id)dictionary;

@end

#endif /* GADRTBAdapterSignalSource_h */

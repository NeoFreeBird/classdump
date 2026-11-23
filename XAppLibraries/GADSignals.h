//
#ifndef GADSignals_h
#define GADSignals_h
@import Foundation;

@class NSMutableArray, NSMutableDictionary, NSObject, NSOperationQueue;

@interface GADSignals : NSObject {
    /* instance variables */
    NSMutableDictionary *_signalSources;
    NSMutableArray *_mainQueueSignalUpdateBlocks;
    NSOperationQueue *_signalCreationQueue;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (id)dictionaryWithSignals:(id)signals;
- (void)createSignalDictionaryWithTargeting:(id)targeting completionHandler:(id /* block */)handler;
- (void)internalCreateSignalDictionaryWithTargeting:(id)targeting completionHandler:(id /* block */)handler;
- (void)updatedSignalsWithSignalSources:(id)sources completionHandler:(id /* block */)handler;
- (void)runMainQueueSignalUpdateBlocks;

@end

#endif /* GADSignals_h */

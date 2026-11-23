//
#ifndef TNLURLSessionContext_h
#define TNLURLSessionContext_h
@import Foundation;

#include "TNLLRUEntry-Protocol.h"

@class NSArray, NSObject, NSString, NSURLSession;

@interface TNLURLSessionContext : NSObject <TNLLRUEntry> {
    /* instance variables */
    NSURLSession *_URLSession;
    NSString *_reuseId;
    long long _executionMode;
    NSArray *_URLSessionTaskOperations;
    unsigned long long _lastOperationRemovedMachTime;
}

@property (retain, nonatomic) id <TNLLRUEntry> nextLRUEntry;
@property (weak, nonatomic) id <TNLLRUEntry> previousLRUEntry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)LRUEntryIdentifier;
- (_Bool)shouldAccessMoveLRUEntryToHead;
- (void)dealloc;

@end

#endif /* TNLURLSessionContext_h */

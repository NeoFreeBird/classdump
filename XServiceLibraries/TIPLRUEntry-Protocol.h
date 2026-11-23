//
#ifndef TIPLRUEntry_Protocol_h
#define TIPLRUEntry_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TIPLRUEntry <NSObject>

@required

@property (retain, nonatomic) id <TIPLRUEntry> nextLRUEntry;
@property (weak, nonatomic) id <TIPLRUEntry> previousLRUEntry;

/* required instance methods */
- (id)LRUEntryIdentifier;
- (_Bool)shouldAccessMoveLRUEntryToHead;

@optional

@end

#endif /* TIPLRUEntry_Protocol_h */

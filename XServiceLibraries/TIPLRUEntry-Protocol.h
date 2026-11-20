//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

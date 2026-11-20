//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TNLLRUEntry_Protocol_h
#define TNLLRUEntry_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TNLLRUEntry <NSObject>

@required

@property (retain, nonatomic) id <TNLLRUEntry> nextLRUEntry;
@property (weak, nonatomic) id <TNLLRUEntry> previousLRUEntry;

/* required instance methods */
- (id)LRUEntryIdentifier;
- (_Bool)shouldAccessMoveLRUEntryToHead;

@optional

@end

#endif /* TNLLRUEntry_Protocol_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSParsedDateLRUEntry_h
#define TFSParsedDateLRUEntry_h
@import Foundation;

#include "TNLLRUEntry-Protocol.h"

@class NSDate, NSObject, NSString;

@interface TFSParsedDateLRUEntry : NSObject <TNLLRUEntry> {
    /* instance variables */
    NSString *_string;
    struct { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; struct atomic_flag { _Atomic _Bool _Value; } predicate; } _token;
}

@property (readonly, nonatomic) NSDate *date;
@property (retain, nonatomic) id <TNLLRUEntry> nextLRUEntry;
@property (weak, nonatomic) id <TNLLRUEntry> previousLRUEntry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithString:(id)string;
- (id)LRUEntryIdentifier;
- (_Bool)shouldAccessMoveLRUEntryToHead;

@end

#endif /* TFSParsedDateLRUEntry_h */

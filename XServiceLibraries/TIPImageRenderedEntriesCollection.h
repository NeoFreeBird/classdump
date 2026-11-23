//
#ifndef TIPImageRenderedEntriesCollection_h
#define TIPImageRenderedEntriesCollection_h
@import Foundation;

#include "TIPLRUEntry-Protocol.h"

@class NSMutableArray, NSObject, NSString;

@interface TIPImageRenderedEntriesCollection : NSObject <TIPLRUEntry> {
    /* instance variables */
    NSMutableArray *_items;
    NSString *_identifier;
}

@property (retain, nonatomic) id <TIPLRUEntry> nextLRUEntry;
@property (weak, nonatomic) id <TIPLRUEntry> previousLRUEntry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)LRUEntryIdentifier;
- (_Bool)shouldAccessMoveLRUEntryToHead;
- (void)_insertEntry:(id)entry transformerIdentifier:(id)identifier sourceImageDimensions:(struct CGSize { double x0; double x1; })dimensions;

@end

#endif /* TIPImageRenderedEntriesCollection_h */

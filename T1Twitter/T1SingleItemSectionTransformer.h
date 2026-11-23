//
#ifndef T1SingleItemSectionTransformer_h
#define T1SingleItemSectionTransformer_h
@import Foundation;

#include "TFNItemsTransformer-Protocol.h"

@class NSObject, NSString;

@interface T1SingleItemSectionTransformer : NSObject <TFNItemsTransformer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)transformItem:(id)item;

@end

#endif /* T1SingleItemSectionTransformer_h */

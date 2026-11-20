//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNItemsDataViewAdapterRegistry_h
#define TFNItemsDataViewAdapterRegistry_h
@import Foundation;

#include "TFSObjectCache.h"

@class NSMutableDictionary, NSObject;

@interface TFNItemsDataViewAdapterRegistry : NSObject {
    /* instance variables */
    TFSObjectCache *_calculatedItemClassToAdapter;
    NSMutableDictionary *_registeredItemClassToAdapter;
}

/* instance methods */
- (id)init;
- (void)registerDataViewAdapter:(id)adapter forItemsOfClass:(Class)_class;
- (id)dataViewAdapterForItem:(id)item;
- (id)_tfn_dataViewAdapterForClass:(Class)_class;

@end

#endif /* TFNItemsDataViewAdapterRegistry_h */

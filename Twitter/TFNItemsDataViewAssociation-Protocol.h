//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNItemsDataViewAssociation_Protocol_h
#define TFNItemsDataViewAssociation_Protocol_h
@import Foundation;

#include "TFNDataSourceScrollPositionAssociation-Protocol.h"

@protocol TFNItemsDataViewAssociation <TFNDataSourceScrollPositionAssociation>

@required

/* required instance methods */
- (id)itemAtIndexPath:(id)path;
- (id)itemAtIndexPath:(id)path;
- (id)indexPathForItem:(id)item;
- (id)indexPathForItem:(id)item;
- (id)indexPathForObjectIdentifier:(id)identifier;
- (id)indexPathForObjectIdentifier:(id)identifier;
- (void)enumerateItemsUsingBlock:(id /* block */)block;
- (void)enumerateItemsUsingBlock:(id /* block */)block;
- (void)useDataViewAdapter:(id)adapter forItemsOfClass:(Class)_class;
- (void)useDataViewAdapter:(id)adapter forItemsOfClass:(Class)_class;
- (id)registeredDataViewAdapterForItem:(id)item;
- (id)registeredDataViewAdapterForItem:(id)item;

@optional

@end

#endif /* TFNItemsDataViewAssociation_Protocol_h */

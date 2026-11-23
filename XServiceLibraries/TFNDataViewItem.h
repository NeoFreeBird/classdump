//
#ifndef TFNDataViewItem_h
#define TFNDataViewItem_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "TFNItemsDataViewAdapter.h"
#include "TFNItemsDataViewSectionController.h"

@class NSMutableDictionary, NSObject;

@interface TFNDataViewItem : NSObject

@property (retain, nonatomic) id item;
@property (copy, nonatomic) id <NSCopying> objectIdentifier;
@property (retain, nonatomic) TFNItemsDataViewAdapter *dataViewAdapter;
@property (retain, nonatomic) TFNItemsDataViewSectionController *sectionController;
@property (readonly, nonatomic) NSMutableDictionary *options;

/* instance methods */
- (id)initWithItem:(id)item;

@end

#endif /* TFNDataViewItem_h */

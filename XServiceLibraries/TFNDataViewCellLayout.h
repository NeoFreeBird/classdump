//
#ifndef TFNDataViewCellLayout_h
#define TFNDataViewCellLayout_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSObject;

@interface TFNDataViewCellLayout : NSObject

@property (retain, nonatomic) id <NSCopying> objectIdentifier;
@property (nonatomic) struct CGSize { double x0; double x1; } size;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentEdgeInsets;

/* class methods */
+ (id)cellLayoutForDataView:(id)view atIndexPath:(id)path objectIdentifier:(id)identifier initialization:(id /* block */)initialization;
+ (double)automaticDimension;

/* instance methods */
- (id)init;

@end

#endif /* TFNDataViewCellLayout_h */

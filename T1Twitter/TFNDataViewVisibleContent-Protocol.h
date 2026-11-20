//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNDataViewVisibleContent_Protocol_h
#define TFNDataViewVisibleContent_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSArray;

@protocol TFNDataViewVisibleContent <NSObject>

@required

@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } tfn_visibleContentInset;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } tfn_visibleCellsInset;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } tfn_visibleContentRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } tfn_visibleCellsRect;
@property (readonly, nonatomic) NSArray *tfn_visibleCells;
@property (readonly, nonatomic) NSArray *tfn_indexPathsForVisibleCells;

/* required instance methods */
- (id)tfn_visibleCellsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;

@optional

@end

#endif /* TFNDataViewVisibleContent_Protocol_h */

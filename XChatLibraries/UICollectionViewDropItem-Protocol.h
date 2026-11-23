//
#ifndef UICollectionViewDropItem_Protocol_h
#define UICollectionViewDropItem_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSIndexPath, UIDragItem;

@protocol UICollectionViewDropItem <NSObject>

@required

@property (nonatomic, readonly) UIDragItem *dragItem;
@property (nonatomic, readonly) NSIndexPath *sourceIndexPath;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } previewSize;

@optional

@end

#endif /* UICollectionViewDropItem_Protocol_h */

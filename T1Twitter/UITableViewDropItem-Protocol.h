//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UITableViewDropItem_Protocol_h
#define UITableViewDropItem_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSIndexPath, UIDragItem;

@protocol UITableViewDropItem <NSObject>

@required

@property (nonatomic, readonly) UIDragItem *dragItem;
@property (nonatomic, readonly) NSIndexPath *sourceIndexPath;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } previewSize;

@optional

@end

#endif /* UITableViewDropItem_Protocol_h */

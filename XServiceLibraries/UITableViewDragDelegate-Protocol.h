//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UITableViewDragDelegate_Protocol_h
#define UITableViewDragDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol UITableViewDragDelegate <NSObject>

@required

/* required instance methods */
- (id)tableView:(id)view itemsForBeginningDragSession:(id)session atIndexPath:(id)path;

@optional

/* optional instance methods */
- (id)tableView:(id)view itemsForAddingToDragSession:(id)session atIndexPath:(id)path point:(struct CGPoint { double x0; double x1; })point;
- (id)tableView:(id)view dragPreviewParametersForRowAtIndexPath:(id)path;
- (void)tableView:(id)view dragSessionWillBegin:(id)begin;
- (void)tableView:(id)view dragSessionDidEnd:(id)end;
- (_Bool)tableView:(id)view dragSessionAllowsMoveOperation:(id)operation;
- (_Bool)tableView:(id)view dragSessionIsRestrictedToDraggingApplication:(id)application;

@end

#endif /* UITableViewDragDelegate_Protocol_h */

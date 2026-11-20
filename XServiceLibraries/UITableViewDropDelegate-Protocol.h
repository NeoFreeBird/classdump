//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UITableViewDropDelegate_Protocol_h
#define UITableViewDropDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol UITableViewDropDelegate <NSObject>

@required

/* required instance methods */
- (void)tableView:(id)view performDropWithCoordinator:(id)coordinator;
- (void)tableView:(id)view performDropWithCoordinator:(id)coordinator;

@optional

/* optional instance methods */
- (_Bool)tableView:(id)view canHandleDropSession:(id)session;
- (_Bool)tableView:(id)view canHandleDropSession:(id)session;
- (void)tableView:(id)view dropSessionDidEnter:(id)enter;
- (id)tableView:(id)view dropSessionDidUpdate:(id)update withDestinationIndexPath:(id)path;
- (void)tableView:(id)view dropSessionDidExit:(id)exit;
- (void)tableView:(id)view dropSessionDidEnd:(id)end;
- (id)tableView:(id)view dropPreviewParametersForRowAtIndexPath:(id)path;
- (id)tableView:(id)view dropPreviewParametersForRowAtIndexPath:(id)path;

@end

#endif /* UITableViewDropDelegate_Protocol_h */

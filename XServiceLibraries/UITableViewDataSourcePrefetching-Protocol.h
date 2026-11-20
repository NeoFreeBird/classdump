//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UITableViewDataSourcePrefetching_Protocol_h
#define UITableViewDataSourcePrefetching_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol UITableViewDataSourcePrefetching <NSObject>

@required

/* required instance methods */
- (void)tableView:(id)view prefetchRowsAtIndexPaths:(id)paths;

@optional

/* optional instance methods */
- (void)tableView:(id)view cancelPrefetchingForRowsAtIndexPaths:(id)paths;

@end

#endif /* UITableViewDataSourcePrefetching_Protocol_h */

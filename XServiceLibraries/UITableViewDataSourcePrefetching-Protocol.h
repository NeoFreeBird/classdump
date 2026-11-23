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

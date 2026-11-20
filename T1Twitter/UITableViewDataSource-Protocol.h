//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UITableViewDataSource_Protocol_h
#define UITableViewDataSource_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol UITableViewDataSource <NSObject>

@required

/* required instance methods */
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;

@optional

/* optional instance methods */
- (long long)numberOfSectionsInTableView:(id)view;
- (long long)numberOfSectionsInTableView:(id)view;
- (id)tableView:(id)view titleForHeaderInSection:(long long)section;
- (id)tableView:(id)view titleForFooterInSection:(long long)section;
- (_Bool)tableView:(id)view canEditRowAtIndexPath:(id)path;
- (_Bool)tableView:(id)view canEditRowAtIndexPath:(id)path;
- (_Bool)tableView:(id)view canMoveRowAtIndexPath:(id)path;
- (_Bool)tableView:(id)view canMoveRowAtIndexPath:(id)path;
- (id)sectionIndexTitlesForTableView:(id)view;
- (id)sectionIndexTitlesForTableView:(id)view;
- (long long)tableView:(id)view sectionForSectionIndexTitle:(id)title atIndex:(long long)index;
- (long long)tableView:(id)view sectionForSectionIndexTitle:(id)title atIndex:(long long)index;
- (void)tableView:(id)view commitEditingStyle:(long long)style forRowAtIndexPath:(id)path;
- (void)tableView:(id)view commitEditingStyle:(long long)style forRowAtIndexPath:(id)path;
- (void)tableView:(id)view moveRowAtIndexPath:(id)path toIndexPath:(id)path;
- (void)tableView:(id)view moveRowAtIndexPath:(id)path toIndexPath:(id)path;

@end

#endif /* UITableViewDataSource_Protocol_h */

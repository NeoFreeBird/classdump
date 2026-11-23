//
#ifndef TFNItemsDiffableDataSource_h
#define TFNItemsDiffableDataSource_h
@import Foundation;

#include "TFNItemsDataViewController.h"

@class UITableViewDiffableDataSource;

@interface TFNItemsDiffableDataSource : UITableViewDiffableDataSource {
    /* instance variables */
    TFNItemsDataViewController *_controller;
}

/* instance methods */
- (id)initWithItemsDataViewController:(id)controller cellProvider:(id /* block */)provider;
- (_Bool)tableView:(id)view canEditRowAtIndexPath:(id)path;
- (void)tableView:(id)view commitEditingStyle:(long long)style forRowAtIndexPath:(id)path;
- (_Bool)tableView:(id)view canMoveRowAtIndexPath:(id)path;
- (void)tableView:(id)view moveRowAtIndexPath:(id)path toIndexPath:(id)path;

@end

#endif /* TFNItemsDiffableDataSource_h */

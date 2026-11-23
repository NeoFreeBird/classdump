//
#ifndef TFNEmptyStateViewController_h
#define TFNEmptyStateViewController_h
@import Foundation;

#include "TFNEmptyStateConfiguration.h"
#include "TFNItemsDataViewController.h"

@interface TFNEmptyStateViewController : TFNItemsDataViewController // (Swift)

@property (nonatomic, retain) TFNEmptyStateConfiguration *configuration;

/* instance methods */
- (id)initWithConfiguration:(id)configuration;
- (void)viewDidLoad;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* TFNEmptyStateViewController_h */

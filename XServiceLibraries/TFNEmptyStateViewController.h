//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

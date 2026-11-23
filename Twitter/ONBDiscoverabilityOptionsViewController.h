//
#ifndef ONBDiscoverabilityOptionsViewController_h
#define ONBDiscoverabilityOptionsViewController_h
@import Foundation;

#include "ONBDiscoverabilityOptionsProvider-Protocol.h"

@class NSObject, NSString, TFNDataViewItem, TFNItemsDataViewController;

@interface ONBDiscoverabilityOptionsViewController : TFNItemsDataViewController

@property (retain, nonatomic) NSObject<ONBDiscoverabilityOptionsProvider> *optionsProvider;
@property (readonly, copy, nonatomic) NSString *scribePage;
@property (retain, nonatomic) TFNDataViewItem *findByEmailDescription;
@property (retain, nonatomic) TFNDataViewItem *findByPhoneDescription;

/* instance methods */
- (id)initWithOptionsProvider:(id)provider scribePage:(id)page;
- (id)init;
- (id)initWithCollectionViewLayout:(id)layout;
- (void)viewDidLayoutSubviews;
- (id)scribe;
- (void)_done;
- (void)update:(_Bool)update;
- (void)_scribeDiscoSection:(id)section withOptIn:(_Bool)in;

@end

#endif /* ONBDiscoverabilityOptionsViewController_h */

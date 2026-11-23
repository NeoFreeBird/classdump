//
#ifndef ONBSettingsGroupComponentTransformer_h
#define ONBSettingsGroupComponentTransformer_h
@import Foundation;

#include "ONBComponentListViewControllerDelegate-Protocol.h"
#include "ONBComponentTransformer.h"

@interface ONBSettingsGroupComponentTransformer : ONBComponentTransformer <ONBComponentListViewControllerDelegate>

/* class methods */
+ (Class)mutableComponentClass;

/* instance methods */
- (id)detailText;
- (id)componentView;
- (void)componentListViewController:(id)controller didUpdateComponents:(id)components;
- (void)private_tapAction;

@end

#endif /* ONBSettingsGroupComponentTransformer_h */

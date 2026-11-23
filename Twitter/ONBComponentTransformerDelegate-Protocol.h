//
#ifndef ONBComponentTransformerDelegate_Protocol_h
#define ONBComponentTransformerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol ONBComponentTransformerDelegate <NSObject>

@required

/* required instance methods */
- (void)onboardingComponentTransformer:(id)transformer didUpdateComponent:(id)component needsReload:(_Bool)reload;
- (void)onboardingComponentTransformer:(id)transformer presentViewController:(id)controller;
- (id)onboardingComponentTransformer:(id)transformer pickerViewControllerWithTitle:(id)title dataSource:(id)source options:(unsigned long long)options delegate:(id)delegate;
- (id)onboardingComponentTransformer:(id)transformer componentListViewControllerWithTitle:(id)title mutableComponents:(id)components delegate:(id)delegate;

@optional

/* optional instance methods */
- (id)subtaskDataProviderForOnboardingComponentTransformer:(id)transformer;
- (id)navigationLinkHandlerForOnboardingComponentTransformer:(id)transformer;

@end

#endif /* ONBComponentTransformerDelegate_Protocol_h */

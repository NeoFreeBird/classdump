//
#ifndef PTVReadOnlyModalViewController_h
#define PTVReadOnlyModalViewController_h
@import Foundation;

#include "PTVInteractiveModalViewController.h"
#include "PTVReadOnlyModalViewControllerDelegate-Protocol.h"
#include "PTVReadOnlyModalViewDelegate-Protocol.h"

@class NSString;

@interface PTVReadOnlyModalViewController : PTVInteractiveModalViewController <PTVReadOnlyModalViewDelegate>

@property (weak, nonatomic) id <PTVReadOnlyModalViewControllerDelegate> delegate;
@property (nonatomic) unsigned long long chatState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDelegate:(id)delegate chatState:(unsigned long long)state;
- (void)loadView;
- (void)readOnlyModalViewDidSelectDismiss:(id)dismiss;
- (void)didSelectDismiss;

@end

#endif /* PTVReadOnlyModalViewController_h */

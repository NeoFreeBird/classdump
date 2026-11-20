//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

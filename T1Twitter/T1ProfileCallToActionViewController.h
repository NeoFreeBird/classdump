//
#ifndef T1ProfileCallToActionViewController_h
#define T1ProfileCallToActionViewController_h
@import Foundation;

#include "T1ResizableHeaderSubheader-Protocol.h"

@class NSString, TFNItemsDataViewController, TUICallToActionItem;

@interface T1ProfileCallToActionViewController : TFNItemsDataViewController <T1ResizableHeaderSubheader>

@property (readonly, nonatomic) TUICallToActionItem *callToAction;
@property (retain, nonatomic) id subheaderInfo;
@property (copy, nonatomic) id /* block */ preferredHeightCheckBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithTitle:(id)title subtitle:(id)subtitle activeSubtitleRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range activeTextActionBlock:(id /* block */)block;
- (void)viewDidLoad;
- (void)didMoveToParentViewController:(id)controller;
- (double)preferredHeight;

@end

#endif /* T1ProfileCallToActionViewController_h */

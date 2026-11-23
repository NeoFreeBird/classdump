//
#ifndef TFNActivityViewController_h
#define TFNActivityViewController_h
@import Foundation;

#include "TFNPopoverSourceSpecification-Protocol.h"
#include "TFNPresented-Protocol.h"

@class NSString, UIActivityViewController, UIBarButtonItem, UIView;

@interface TFNActivityViewController : UIActivityViewController <TFNPresented, TFNPopoverSourceSpecification> {
    /* instance variables */
    id /* block */ _completionWithItemsHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView *sourceView;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } sourceRect;
@property (retain, nonatomic) UIBarButtonItem *barButtonItem;
@property (nonatomic) _Bool allowCenteredPresentationWithoutSource;

/* instance methods */
- (id)initWithActivityItems:(id)items applicationActivities:(id)activities;
- (id)initWithActivityItemProvider:(id)provider activities:(id)activities;
- (id)initWithActivityItemProvider:(id)provider actionItems:(id)items;
- (id /* block */)completionWithItemsHandler;
- (void)setCompletionWithItemsHandler:(id /* block */)handler;
- (void)tfnPresentedCustomPresentFromViewController:(id)controller animated:(_Bool)animated completion:(id /* block */)completion;

@end

#endif /* TFNActivityViewController_h */

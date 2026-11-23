//
#ifndef T1SettingsAuthorizationInstructionsAdapter_h
#define T1SettingsAuthorizationInstructionsAdapter_h
@import Foundation;

#include "T1SettingsAuthorizationInstructionsAdapterDelegate-Protocol.h"
#include "T1SettingsAuthorizationInstructionsView.h"

@class TFNItemsDataViewAdapter;

@interface T1SettingsAuthorizationInstructionsAdapter : TFNItemsDataViewAdapter {
    /* instance variables */
    T1SettingsAuthorizationInstructionsView *_prototypeView;
}

@property (readonly, weak, nonatomic) id <T1SettingsAuthorizationInstructionsAdapterDelegate> delegate;

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (id)init;
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller collectionViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })dataViewController:(id)controller collectionViewSizeForItem:(id)item constrainedToSize:(struct CGSize { double x0; double x1; })size withOptions:(id)options atIndexPath:(id)path;
- (_Bool)dataViewController:(id)controller shouldHighlightItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })_t1_getContentViewSizeForItem:(id)item controller:(id)controller indexPath:(id)path;
- (void)_t1_setPropertiesForContentView:(id)view withCallToAction:(id)action;
- (id)_t1_contentViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_t1_actionTapped:(id)tapped;

@end

#endif /* T1SettingsAuthorizationInstructionsAdapter_h */

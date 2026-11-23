//
#ifndef TCRTweetComposeAutocompleteViewController_h
#define TCRTweetComposeAutocompleteViewController_h
@import Foundation;

#include "TCRTypeaheadPrompt.h"
#include "TCRTypeaheadResult.h"
#include "TCRTypeaheadViewController.h"
#include "TCRTypeaheadViewControllerDelegate-Protocol.h"
#include "TFNKeyboardShortcutDelegate-Protocol.h"
#include "UISearchBarDelegate-Protocol.h"

@class NSArray, NSString, TFNSearchBar, TFNViewController, TFSTwitterScribeContext, UIView;
@protocol TCRTweetComposeAutocompleteViewControllerDelegate;

@interface TCRTweetComposeAutocompleteViewController : TFNViewController <UISearchBarDelegate, TCRTypeaheadViewControllerDelegate, TFNKeyboardShortcutDelegate>

@property (readonly, nonatomic) TFSTwitterScribeContext *scribeContext;
@property (nonatomic) struct CGPoint { double x0; double x1; } intialTouchPosition;
@property (nonatomic) double fullScreenProgress;
@property (nonatomic) _Bool transitionInProgress;
@property (nonatomic) _Bool fullscreenMode;
@property (retain, nonatomic) TFNSearchBar *searchBar;
@property (retain, nonatomic) UIView *searchBarContainer;
@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) UIView *topBackground;
@property (retain, nonatomic) TCRTypeaheadPrompt *searchPrompt;
@property (readonly, nonatomic) TCRTypeaheadViewController *typeaheadViewController;
@property (nonatomic) long long autocompleteType;
@property (copy, nonatomic) NSArray *includedMentionUserIDs;
@property (copy, nonatomic) NSArray *excludedReplyUserIDs;
@property (retain, nonatomic) TCRTypeaheadResult *results;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } availableFrame;
@property (nonatomic) double condensedHeight;
@property (weak, nonatomic) id <TCRTweetComposeAutocompleteViewControllerDelegate> delegate;
@property (copy, nonatomic) NSString *uuidString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (id)initWithCoder:(id)coder;
- (id)initWithScribeContext:(id)context hashflagEnabled:(_Bool)enabled searchContext:(id)context;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (double)tcr_maxTableViewHeight;
- (double)tcr_minTableViewHeight;
- (void)_tcr_updateViewsWithProgress:(double)progress;
- (void)viewWillLayoutSubviews;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)array;
- (void)composeTypeaheadViewController:(id)controller didSelectItem:(id)item;
- (void)composeTypeaheadViewController:(id)controller scrollViewDidScroll:(id)scroll;
- (void)searchBar:(id)bar textDidChange:(id)change;
- (void)_tcr_animateToProgress:(double)progress completion:(id /* block */)completion;
- (void)_tcr_enterFullscreenMode;
- (void)_tcr_updateDecoratingViews;
- (_Bool)canPerformAction:(SEL)action withSender:(id)sender;
- (void)handleLineDownKeyCommand;
- (void)handleLineUpKeyCommand;
- (void)handleSelectKeyCommand;

@end

#endif /* TCRTweetComposeAutocompleteViewController_h */

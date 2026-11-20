//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TCRAutocompleteViewController_h
#define TCRAutocompleteViewController_h
@import Foundation;

#include "TCRTypeaheadResult.h"
#include "TCRTypeaheadViewController.h"
#include "TCRTypeaheadViewControllerDelegate-Protocol.h"
#include "TTSSearchTypeaheadViewControllerContext-Protocol.h"

@class NSArray, NSString, TFNViewController, UITableView, UIView;
@protocol TCRAutocompleteViewControllerDelegate;

@interface TCRAutocompleteViewController : TFNViewController <TCRTypeaheadViewControllerDelegate> {
    /* instance variables */
    UIView *_separator;
    NSArray *_results;
}

@property (readonly, nonatomic) TCRTypeaheadViewController *autocompleteViewController;
@property (readonly, nonatomic) UITableView *tableView;
@property (copy, nonatomic) NSArray *includedMentionUserIDs;
@property (copy, nonatomic) NSArray *excludedReplyUserIDs;
@property (nonatomic) _Bool useDarkMode;
@property (nonatomic) _Bool isInlineReplyColorMode;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentInset;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } scrollIndicatorInsets;
@property (retain, nonatomic) id <TTSSearchTypeaheadViewControllerContext> searchContext;
@property (retain, nonatomic) TCRTypeaheadResult *typeaheadResult;
@property (weak, nonatomic) id <TCRAutocompleteViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithScribeContext:(id)context searchContext:(id)context;
- (id)init;
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)selectItem:(id)item;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)array;
- (void)composeTypeaheadViewController:(id)controller didSelectItem:(id)item;
- (void)composeTypeaheadViewController:(id)controller scrollViewDidScroll:(id)scroll;

@end

#endif /* TCRAutocompleteViewController_h */

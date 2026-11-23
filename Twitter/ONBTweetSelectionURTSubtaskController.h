//
#ifndef ONBTweetSelectionURTSubtaskController_h
#define ONBTweetSelectionURTSubtaskController_h
@import Foundation;

#include "ONBContainerSubtaskController.h"
#include "ONBSubtaskControllerDelegate-Protocol.h"
#include "T1TweetSelectionDelegate-Protocol.h"
#include "T1URTDataViewAdapterProvider-Protocol.h"

@class NSMutableSet, NSString, OCFTweetSelectionURTSubtask, OCFTweetSelectionURTSubtaskState, TFNItemsDataViewController;

@interface ONBTweetSelectionURTSubtaskController : ONBContainerSubtaskController <T1URTDataViewAdapterProvider, T1TweetSelectionDelegate> {
    /* instance variables */
    id <ONBSubtaskControllerDelegate> _delegate;
    long long _minSelectionCount;
    long long _maxSelectionCount;
    OCFTweetSelectionURTSubtask *_subtask;
    OCFTweetSelectionURTSubtaskState *_state;
    NSMutableSet *_selectedTweets;
    NSMutableSet *_selectedIndexPaths;
    TFNItemsDataViewController *_generatedViewController;
}

@property (readonly, nonatomic) _Bool hasReachedMaximum;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)supportedSubtaskClasses;

/* instance methods */
- (id)initWithSubtask:(id)subtask flowToken:(id)token delegate:(id)delegate;
- (void)dealloc;
- (id)generateContainedViewController;
- (id)nextLink;
- (id)skipLink;
- (void)nextTapped;
- (_Bool)requiresAccountToStart;
- (_Bool)itemIsSelected:(id)selected atIndexPath:(id)path;
- (_Bool)shouldSelectItem:(id)item atIndexPath:(id)path;
- (void)selectedItem:(id)item atIndexPath:(id)path;
- (void)deselectedItem:(id)item atIndexPath:(id)path;
- (void)configureView:(id)view forItem:(id)item atIndexPath:(id)path;
- (id)private_generateViewControllerWithTimelineQuery:(id)query account:(id)account;
- (id)private_scribeContext;
- (void)private_dataViewControllerDidUpdate:(id)update;
- (void)performSelectionChangeUpdates;

@end

#endif /* ONBTweetSelectionURTSubtaskController_h */

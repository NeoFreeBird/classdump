//
#ifndef T1UndoableCompositionDetailsViewController_h
#define T1UndoableCompositionDetailsViewController_h
@import Foundation;

@class TFNItemsDataViewController;

@interface T1UndoableCompositionDetailsViewController : TFNItemsDataViewController { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *composition;
    NSNumber"16@0:8 *cachedCompositionStatuses;
    NSNumber"16@0:8 *quotedStatusForID;
    NSNumber"16@0:8 *$__lazy_storage_$_focalStatusAdapter;
    NSNumber"16@0:8 *$__lazy_storage_$_statusAdapter;
    NSNumber"16@0:8 *outboxDidProcessCompositionObserver;
    NSNumber"16@0:8 *outboxDidCancelCompositionObserver;
    NSNumber"16@0:8 *outboxDidFailCompositionObserver;
    NSNumber"16@0:8 *outboxDidCancelUndoableCompositionObserver;
    NSNumber"16@0:8 *applicationWillEnterForegroundObserver;
    NSNumber"16@0:8 *applicationDidBecomeActiveObserver;
    NSNumber"16@0:8 *a11yViewAppearTime;
}

/* instance methods */
- (id)scribe;
- (id)scribePage;
- (id)scribeSection;
- (id)scribeParameters;
- (id)scribeImpressionParameters;
- (id)initWithAccount:(id)account composition:(id)composition;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidAppear:(_Bool)appear;
- (void)update:(_Bool)update;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* T1UndoableCompositionDetailsViewController_h */

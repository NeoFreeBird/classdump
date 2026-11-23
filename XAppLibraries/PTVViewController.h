//
#ifndef PTVViewController_h
#define PTVViewController_h
@import Foundation;

#include "PTVWorkClient.h"
#include "PTVWorkClientDelegate-Protocol.h"

@class NSString, UIView, UIViewController;

@interface PTVViewController : UIViewController <PTVWorkClientDelegate> {
    /* instance variables */
    PTVWorkClient *_workClient;
    long long _viewWillAppearCachePolicy;
    unsigned long long _viewWillAppearProtectionPolicy;
    id _data;
    id _keyboardShowObserver;
    id _keyboardHideObserver;
    UIView *_safeAreaDisplay;
}

@property (nonatomic) _Bool isLoading;
@property (readonly, nonatomic) int state;
@property (nonatomic) _Bool canTransitionToLoadingFromEmpty;
@property (nonatomic) _Bool canTransitionToErrorFromFetched;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)dealloc;
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewWillDisappear:(_Bool)disappear;
- (void)viewDidLayoutSubviews;
- (long long)preferredStatusBarStyle;
- (_Bool)loadWorkClient:(long long)client protectionPolicy:(unsigned long long)policy;
- (_Bool)shouldLoad;
- (void)load:(long long)load;
- (void)immediate:(id)immediate context:(id)context loadingFromNetwork:(_Bool)network;
- (void)eventual:(id)eventual context:(id)context;
- (void)error:(id)error context:(id)context;
- (id)context;
- (void)stateChanged;
- (void)isLoadingChanged;
- (void)setData:(id)data;
- (_Bool)hasData:(id)data;
- (void)logout;
- (_Bool)shouldAutomaticallyObserveKeyboard;
- (void)beginObservingKeyboard;
- (void)endObservingKeyboard;

@end

#endif /* PTVViewController_h */

//
#ifndef GADBrowserHeaderView_h
#define GADBrowserHeaderView_h
@import Foundation;

#include "UINavigationBarDelegate-Protocol.h"

@class NSString, UIBarButtonItem, UINavigationItem, UIProgressView, UIView;

@interface GADBrowserHeaderView : UIView <UINavigationBarDelegate> {
    /* instance variables */
    UIProgressView *_progressView;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_refreshButton;
    UIBarButtonItem *_stopButton;
    UINavigationItem *_navigationItem;
    id /* block */ _doneButtonHandler;
    id /* block */ _refreshButtonHandler;
    id /* block */ _stopButtonHandler;
}

@property (readonly, nonatomic) float progressBarValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)setNavigationBarTitle:(id)title;
- (void)setNavigationPageLoadState:(long long)state;
- (void)doneButtonPressed:(id)pressed;
- (void)setDoneButtonHandler:(id /* block */)handler;
- (void)refreshButtonPressed:(id)pressed;
- (void)setRefreshButtonHandler:(id /* block */)handler;
- (void)stopButtonPressed:(id)pressed;
- (void)setStopButtonHandler:(id /* block */)handler;
- (void)setProgressBarToValue:(float)value animated:(_Bool)animated completion:(id /* block */)completion;
- (void)resetProgressBar;
- (long long)positionForBar:(id)bar;

@end

#endif /* GADBrowserHeaderView_h */

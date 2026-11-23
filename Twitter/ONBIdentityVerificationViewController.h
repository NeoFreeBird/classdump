//
#ifndef ONBIdentityVerificationViewController_h
#define ONBIdentityVerificationViewController_h
@import Foundation;

#include "OCFErrorHandler-Protocol.h"
#include "ONBIdentityVerificationViewControllerDelegate-Protocol.h"
#include "ONBItemsDataViewController.h"

@class NSArray, NSDate, NSString, NSTimer, UIImageView;

@interface ONBIdentityVerificationViewController : ONBItemsDataViewController <OCFErrorHandler> {
    /* instance variables */
    id <ONBIdentityVerificationViewControllerDelegate> _delegate;
    _Bool _appInBackground;
    _Bool _viewVisible;
    NSArray *_statusIndicatorItems;
    NSDate *_pollingFirstStartDate;
    NSDate *_pollingStartDate;
    long long _codeLength;
    NSString *_hintText;
    double _pollingElapsedTime;
    double _pollingInterval;
    double _pollingTimeout;
    NSTimer *_pollingTimer;
    UIImageView *_errorImageView;
    UIImageView *_successImageView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAccount:(id)account componentsViewModel:(id)model hintText:(id)text codeLength:(long long)length pollingInterval:(double)interval pollingTimeout:(double)timeout delegate:(id)delegate;
- (void)beginEditing;
- (void)showSuccessStatusWithCompletion:(id /* block */)completion;
- (void)updateWithCode:(id)code;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewDidDisappear:(_Bool)disappear;
- (void)applicationDidEnterBackground:(id)background;
- (void)applicationWillEnterForegroundFromBackground:(id)background;
- (void)submit;
- (void)abandon;
- (id)updatedSections:(id)sections;
- (void)handleError:(id)error completion:(id /* block */)completion;
- (double)private_nextPollingInterval;
- (void)private_updatePollingTimer;
- (void)private_clearPollingTimer;
- (void)private_pollingTimerFired;
- (id)private_sections;
- (void)private_updateStatusIndicatorVisible:(_Bool)visible success:(_Bool)success;

@end

#endif /* ONBIdentityVerificationViewController_h */

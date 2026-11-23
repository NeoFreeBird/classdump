//
#ifndef T1ProfileTweetsTimelineEmptyStateProvider_h
#define T1ProfileTweetsTimelineEmptyStateProvider_h
@import Foundation;

#include "T1ProfileViewModel-Protocol.h"

@class NSObject, NSString, TFNDataViewController, TFNTwitterAccount;

@interface T1ProfileTweetsTimelineEmptyStateProvider : NSObject {
    /* instance variables */
    id <T1ProfileViewModel> _viewModel;
    _Bool _previousNeedsSetup;
    TFNTwitterAccount *_account;
    NSString *_title;
    NSString *_subtitle;
    NSString *_buttonText;
    id /* block */ _buttonAction;
    id /* block */ _composeTweetAction;
    id /* block */ _setupProfileAction;
}

@property (weak, nonatomic) TFNDataViewController *viewController;

/* instance methods */
- (id)initWithAccount:(id)account profileViewModel:(id)model composeTweetAction:(id /* block */)action setupProfileAction:(id /* block */)action;
- (id)title;
- (id)subtitle;
- (id)buttonText;
- (id /* block */)buttonAction;
- (void)profileViewModelDidInvalidateWithReason:(long long)reason;
- (id)generateEmptyStateConfiguration;
- (void)_t1_update;

@end

#endif /* T1ProfileTweetsTimelineEmptyStateProvider_h */

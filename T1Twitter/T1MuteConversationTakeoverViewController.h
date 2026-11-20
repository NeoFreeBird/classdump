//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1MuteConversationTakeoverViewController_h
#define T1MuteConversationTakeoverViewController_h
@import Foundation;

#include "TFNPromptDataSource-Protocol.h"

@class NSArray, NSString, TFNPromptContentViewSpec, TFNPromptImageSpec, TFNPromptTextSpec, TFNPromptViewController, TFNTwitterAccount, TFSTwitterScribeContext, UIImage;

@interface T1MuteConversationTakeoverViewController : TFNPromptViewController <TFNPromptDataSource> {
    /* instance variables */
    TFSTwitterScribeContext *_scribeContext;
}

@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (copy, nonatomic) id /* block */ muteActionBlock;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) TFNPromptImageSpec *imageSpec;
@property (readonly, nonatomic) long long promptLayout;
@property (readonly, nonatomic) TFNPromptTextSpec *primaryTextSpec;
@property (readonly, nonatomic) TFNPromptTextSpec *secondaryTextSpec;
@property (readonly, nonatomic) TFNPromptContentViewSpec *contentViewSpec;
@property (readonly, nonatomic) TFNPromptTextSpec *detailTextSpec;
@property (readonly, nonatomic) TFNPromptTextSpec *footerTextSpec;
@property (readonly, nonatomic) NSArray *buttonSpecs;
@property (readonly, nonatomic) _Bool showDismissOption;
@property (readonly, nonatomic) id /* block */ dismissOptionAction;
@property (readonly, nonatomic) _Bool showLogo;
@property (readonly, nonatomic) Class promptViewClass;
@property (readonly, nonatomic) id /* block */ promptViewProvider;
@property (readonly, nonatomic) id /* block */ impressionAction;
@property (readonly, nonatomic) _Bool excludeFromVDLLeftAlign;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (_Bool)shouldShowForAccount:(id)account;

/* instance methods */
- (id)initWithAccount:(id)account scribeContext:(id)context muteActionBlock:(id /* block */)block;
- (id)initWithAccount:(id)account;
- (id)initWithHidesBackButton:(_Bool)button;
- (void)viewDidAppear:(_Bool)appear;
- (void)private_cancelButtonPressed:(id)pressed;
- (void)private_muteButtonPressed:(id)pressed;
- (void)private_learnMorePressed;
- (id)scribeContext;
- (void)private_markAsShown;

@end

#endif /* T1MuteConversationTakeoverViewController_h */

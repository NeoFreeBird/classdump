//
#ifndef T1MuteKeywordFormViewController_h
#define T1MuteKeywordFormViewController_h
@import Foundation;

#include "T1KeywordForm.h"
#include "T1MuteKeywordDurationViewControllerDelegate-Protocol.h"
#include "T1MuteKeywordFormViewControllerDelegate-Protocol.h"
#include "TFNLegacyFormDelegate-Protocol.h"
#include "TNLCommunicationAgentObserver-Protocol.h"

@class NSSet, NSString, TFNLegacyFormViewController, TFNStringDataViewAdapter, TFNTwitterAccount, TFSTwitterMutedKeyword, TFSTwitterScribeContext, UIBarButtonItem;

@interface T1MuteKeywordFormViewController : TFNLegacyFormViewController <TFNLegacyFormDelegate, TNLCommunicationAgentObserver, T1MuteKeywordDurationViewControllerDelegate, T1MuteKeywordFormViewControllerDelegate> {
    /* instance variables */
    TFSTwitterScribeContext *_scribeContext;
}

@property (retain, nonatomic) T1KeywordForm *form;
@property (retain, nonatomic) UIBarButtonItem *saveButton;
@property (retain, nonatomic) TFNStringDataViewAdapter *stringAdapter;
@property (retain, nonatomic) TFSTwitterMutedKeyword *keyword;
@property (readonly, nonatomic) _Bool updating;
@property (retain, nonatomic) NSSet *discouragedKeywords;
@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (weak, nonatomic) id <T1MuteKeywordFormViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (double)timeIntervalForDate:(id)date;
+ (id)textForDate:(id)date;
+ (id)textForDuration:(double)duration;

/* instance methods */
- (id)initWithForm:(id)form appearance:(id)appearance;
- (id)initWithAccount:(id)account delegate:(id)delegate scribeContext:(id)context;
- (id)initWithAccount:(id)account keyword:(id)keyword delegate:(id)delegate scribeContext:(id)context;
- (id)initWithAccount:(id)account keywordString:(id)string delegate:(id)delegate scribeContext:(id)context;
- (_Bool)isUpdating;
- (void)deleteKeyword;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)appear;
- (_Bool)accessibilityPerformEscape;
- (void)setSections:(id)sections;
- (void)tnl_communicationAgent:(id)agent didRegisterObserverWithInitialReachabilityFlags:(unsigned int)flags status:(long long)status carrierInfo:(id)info WWANRadioAccessTechnology:(id)technology captivePortalStatus:(long long)status;
- (void)tnl_communicationAgent:(id)agent didUpdateReachabilityFromPreviousFlags:(unsigned int)flags previousStatus:(long long)status toCurrentFlags:(unsigned int)flags currentStatus:(long long)status;
- (void)durationViewControllerWillDismissWithController:(id)controller;
- (id)scribeContext;
- (id)scribeElement;
- (void)private_logAction:(id)action;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)array;
- (id)doneBarButtonItem;
- (id)layout;
- (void)submitForm;
- (void)_t1_getListWithCompletion:(id /* block */)completion;
- (void)_t1_updateKeyword:(id)keyword withDuration:(double)duration muteSurfaces:(unsigned long long)surfaces muteOptions:(unsigned long long)options;
- (void)_t1_createNewKeyword:(id)keyword withDuration:(double)duration muteSurfaces:(unsigned long long)surfaces muteOptions:(unsigned long long)options;
- (void)form:(id)form didChangeSubmittability:(_Bool)submittability;
- (void)private_dismiss;
- (_Bool)private_currentlyUnreachable;
- (id /* block */)private_submissionCompletionBlockForKeyword:(id)keyword;
- (void)muteKeywordViewController:(id)controller handleErrorForKeywordString:(id)string action:(unsigned long long)action isUserInputFormError:(_Bool)error;
- (void)muteKeywordViewController:(id)controller didRefreshKeywordList:(id)list forKeywordString:(id)string action:(unsigned long long)action;

@end

#endif /* T1MuteKeywordFormViewController_h */

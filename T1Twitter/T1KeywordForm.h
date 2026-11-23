//
#ifndef T1KeywordForm_h
#define T1KeywordForm_h
@import Foundation;

#include "T1AddKeywordDurationItem.h"
#include "T1MuteKeywordDurationViewController.h"

@class NSDictionary, NSMutableDictionary, NSSet, NSString, TFNLegacyForm, TFNLegacyFormBooleanItem, TFNLegacyFormCustomItem, TFNLegacyFormField, TFNTwitterAccount, TFSTwitterMutedKeyword;

@interface T1KeywordForm : TFNLegacyForm {
    /* instance variables */
    TFNTwitterAccount *_account;
    NSString *_pendingDiscouragedWord;
}

@property (retain, nonatomic) TFNLegacyFormField *keywordField;
@property (retain, nonatomic) TFNLegacyFormBooleanItem *homeTimelineSurfaceBooleanItem;
@property (retain, nonatomic) TFNLegacyFormBooleanItem *notificationsSurfaceBooleanItem;
@property (retain, nonatomic) TFNLegacyFormBooleanItem *fromEveryoneMuteOptionItem;
@property (retain, nonatomic) TFNLegacyFormBooleanItem *fromPeopleYouDontFollowMuteOptionItem;
@property (retain, nonatomic) T1AddKeywordDurationItem *durationItem;
@property (retain, nonatomic) T1MuteKeywordDurationViewController *durationViewController;
@property (retain, nonatomic) TFNLegacyFormCustomItem *deleteItem;
@property (nonatomic) _Bool requestInFlight;
@property (retain, nonatomic) NSMutableDictionary *userInputToValidationErrorMessage;
@property (copy, nonatomic) NSSet *discouragedKeywords;
@property (readonly, copy, nonatomic) NSDictionary *lastSavedMutedKeywordConfiguration;
@property (readonly, nonatomic) TFSTwitterMutedKeyword *keyword;
@property (readonly, nonatomic) _Bool updating;

/* instance methods */
- (id)initWithLastSavedMutedKeywordConfiguration:(id)configuration account:(id)account;
- (id)initWithKeyword:(id)keyword account:(id)account;
- (void)private_sharedInit;
- (id)sections;
- (id)indexPathForObject:(id)object;
- (_Bool)isSubmittable;
- (_Bool)isUpdating;
- (void)private_uncheckMuteOptionItem:(id)item inController:(id)controller;
- (_Bool)private_isUpdatingKeywordDurationForever;
- (_Bool)private_isUpdatingKeywordDurationExpired;
- (id)private_discouragedKeywordValidityForInput:(id)input;
- (void)private_refreshKeywordField;
- (void)private_cancelPendingDiscouragedWordTimer;

@end

#endif /* T1KeywordForm_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1UserFacepileWithActionViewModel_Protocol_h
#define T1UserFacepileWithActionViewModel_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "T1UserFacepileWithActionViewModelDelegate-Protocol.h"

@class NSArray, NSObject, NSString, TFNTwitterAccount, TFSTwitterScribeContext;

@protocol T1UserFacepileWithActionViewModel <NSObject>

@required

@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (readonly, nonatomic) NSArray *users;
@property (readonly, nonatomic) long long actionType;
@property (readonly, nonatomic) long long displayType;
@property (readonly, nonatomic) long long buttonStyle;
@property (readonly, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *entryID;
@property (readonly, nonatomic) _Bool isButtonSelected;
@property (readonly, nonatomic) TFSTwitterScribeContext *scribeContext;
@property (weak, nonatomic) NSObject<T1UserFacepileWithActionViewModelDelegate> *delegate;

/* required instance methods */
- (id)featuringText;
- (id)avatarViewModels;
- (id)buttonTitle;
- (id)selectedButtonTitle;
- (id)facepileAccessibilityLabelText;
- (void)registerObserver:(id)observer;
- (void)handleDismissUser:(id)user;
- (void)handleUserSelected:(id)selected;
- (void)handleActionButtonPress;
- (void)handleFacepileTap;

@optional

@end

#endif /* T1UserFacepileWithActionViewModel_Protocol_h */

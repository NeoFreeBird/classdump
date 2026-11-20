//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1UserRecommendationListActionControlProvider_h
#define T1UserRecommendationListActionControlProvider_h
@import Foundation;

#include "T1UserRecommendationListCheckableActionControl-Protocol.h"
#include "T1UserViewActionControlProvider-Protocol.h"

@class NSHashTable, NSObject, NSString, TFNTwitterAccount, TFSTwitterScribeContext, UIControl;
@protocol T1UserRecommendationListActionControlProviderDelegate;

@interface T1UserRecommendationListActionControlProvider : NSObject <T1UserViewActionControlProvider> {
    /* instance variables */
    long long _buttonType;
    id <T1UserRecommendationListActionControlProviderDelegate> _delegate;
    UIControl<T1UserRecommendationListCheckableActionControl> *_prototypeCheckedActionControl;
    UIControl<T1UserRecommendationListCheckableActionControl> *_prototypeUncheckedActionControl;
    NSHashTable *_providedActionControls;
    TFSTwitterScribeContext *_scribeContext;
}

@property (retain, nonatomic) TFNTwitterAccount *account;
@property (readonly, nonatomic) id /* block */ didSelectBlock;
@property (readonly, nonatomic) id /* block */ didDeselectBlock;
@property (readonly, nonatomic) id /* block */ shouldSelectBlock;
@property (copy, nonatomic) id /* block */ needsLayoutBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAccount:(id)account buttonType:(long long)type delegate:(id)delegate scribeContext:(id)context;
- (id)initWithAccount:(id)account buttonType:(long long)type scribeContext:(id)context didSelect:(id /* block */)select didDeselect:(id /* block */)deselect shouldSelect:(id /* block */)select;
- (id)init;
- (id)actionControlForUserView:(id)view withUpdateBlock:(id /* block */)block;
- (_Bool)shouldHideActionControl:(id)control;
- (void)updateActionControl:(id)control viewModel:(id)model;
- (void)cleanupActionControl:(id)control;
- (id)private_checkableActionControlWithUpdateBlock:(id /* block */)block;
- (struct CGSize { double x0; double x1; })sizeForActionControlWithUser:(id)user;
- (void)updateSelectionForUserIDNumbers:(id)idnumbers;
- (_Bool)setSelected:(_Bool)selected forUserIDNumber:(id)idnumber;
- (void)private_updateSelectionForActionControl:(id)control;
- (void)private_valueChanged:(id)changed;

@end

#endif /* T1UserRecommendationListActionControlProvider_h */

//
#ifndef T1ComposableModuleTreeCell_h
#define T1ComposableModuleTreeCell_h
@import Foundation;

#include "T1ComposableModuleTreeView.h"
#include "T1TombstoneViewDelegate-Protocol.h"
#include "T1URTRichTextInteractionHandler-Protocol.h"
#include "TFNTwitterConversationTreeContextProvider-Protocol.h"

@class TFNTableViewCell, TFNTwitterAccount;

@interface T1ComposableModuleTreeCell : TFNTableViewCell <T1TombstoneViewDelegate> {
    /* instance variables */
    TFNTwitterAccount *_account;
}

@property (readonly, nonatomic) T1ComposableModuleTreeView *treeItemView;
@property (readonly, nonatomic) id <TFNTwitterConversationTreeContextProvider> viewModel;
@property (readonly, nonatomic) id layoutState;
@property (copy, nonatomic) id /* block */ tombstoneViewTapHandler;
@property (retain, nonatomic) id <T1URTRichTextInteractionHandler> tombstoneRichTextHandler;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)updateViewModel:(id)model;
- (void)setCellLayout:(id)layout;
- (void)_t1_updateRichTextHandlerOnTombstoneView;
- (void)didTapOnViewButtonWithTombstoneView:(id)view;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* T1ComposableModuleTreeCell_h */

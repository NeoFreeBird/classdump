//
#ifndef _TtC14T1TwitterSwift25ConversationTombstoneCell_h
#define _TtC14T1TwitterSwift25ConversationTombstoneCell_h
@import Foundation;

#include "T1TombstoneViewDelegate-Protocol.h"

@class Swift.Bool, T1TwitterSwift.TombstoneView ?, TFNTextCell, _$sSo25ConversationConnectorViewC, _$syycSg;

@interface T1TwitterSwift.ConversationTombstoneCell : TFNTextCell <T1TombstoneViewDelegate> { // (Swift)
    /* instance variables */
    T1TwitterSwift.TombstoneView ? tombstoneView;
    __C.ConversationConnectorView topConnector;
    __C.ConversationConnectorView bottomConnector;
}

@property (nonatomic) _Bool showTopConnector;
@property (nonatomic) _Bool showBottomConnector;
@property (nonatomic, copy) id /* block */ buttonTapHandler;

/* class methods */
+ (id)reuseIdentifier;
+ (id)cellFor:(id)_for reuseIdentifier:(id)identifier indexPath:(id)path initialization:(id /* block */)initialization interactionHandler:(id)handler;
+ (id)cellLayoutWith:(id)with buttonRichText:(id)text layoutMetrics:(id)metrics previousLayout:(id)layout;

/* instance methods */
- (void)layoutSubviews;
- (void)didTapOnViewButtonWithTombstoneView:(id)view;
- (void)updateWith:(id)with buttonRichText:(id)text;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC14T1TwitterSwift25ConversationTombstoneCell_h */

//
#ifndef _TtC14T1TwitterSwift34DirectMessageCardViewEventRegistry_h
#define _TtC14T1TwitterSwift34DirectMessageCardViewEventRegistry_h
@import Foundation;

#include "T1CallToActionsContainerViewDelegate-Protocol.h"

@class NSObject, T1TwitterSwift.DirectMessageCardViewModel ?, _$sSo012T1PlayerCardB13ContainerViewCSgXw, _$sSo11TUICardViewCSgXw, _$sSo19TUICardViewDelegate_pSgXw;

@interface T1TwitterSwift.DirectMessageCardViewEventRegistry : NSObject <T1CallToActionsContainerViewDelegate> { // (Swift)
    /* instance variables */
    weak __C.TUICardViewDelegate? delegate;
    T1TwitterSwift.DirectMessageCardViewModel ? viewModel;
    weak __C.TUICardView? cardView;
    weak __C.T1PlayerCardPlayerContainerView? cardPlayerContainerView;
}

/* instance methods */
- (void)callToActionsContainerView:(id)view didSelectView:(id)view atIndex:(unsigned long long)index withEvent:(id)event;
- (void)didTapImageWithSender:(id)sender;
- (void)didTapVideoWithSender:(id)sender;
- (void)didTapUserViewWithSender:(id)sender;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift34DirectMessageCardViewEventRegistry_h */

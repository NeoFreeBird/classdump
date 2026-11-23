//
#ifndef PTVBroadcastOverflowMenuHeaderView_h
#define PTVBroadcastOverflowMenuHeaderView_h
@import Foundation;

#include "PTVBroadcastController.h"
#include "PTVBroadcastOverflowMenuFeaturedReasonView.h"
#include "PTVBroadcastOverflowMenuTitleView.h"
#include "PTVPagingCarouselView.h"
#include "UIScrollViewDelegate-Protocol.h"

@class NSString;

@interface PTVBroadcastOverflowMenuHeaderView : PTVPagingCarouselView <UIScrollViewDelegate> {
    /* instance variables */
    PTVBroadcastController *_broadcastController;
    PTVBroadcastOverflowMenuFeaturedReasonView *_featuredReasonView;
    PTVBroadcastOverflowMenuTitleView *_titleView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithBroadcastController:(id)controller hasClickableHashTags:(_Bool)tags delegate:(id)delegate;
- (void)addHeaderView:(id)view;
- (void)updateParticipantsCount:(long long)count;

@end

#endif /* PTVBroadcastOverflowMenuHeaderView_h */

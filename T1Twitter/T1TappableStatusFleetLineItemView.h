//
#ifndef T1TappableStatusFleetLineItemView_h
#define T1TappableStatusFleetLineItemView_h
@import Foundation;

#include "T1AvatarPresenceView.h"
#include "T1StatusViewCombinedViewModel.h"
#include "TFNPreviewSuppressing-Protocol.h"
#include "TFNPreviewable-Protocol.h"

@class NSString, TFNTappableHighlightView, TFSTwitterUserPresenceInfo;

@interface T1TappableStatusFleetLineItemView : TFNTappableHighlightView <TFNPreviewable, TFNPreviewSuppressing> {
    /* instance variables */
    struct CGSize { double width; double height; } _lastLayoutSize;
    id _previewingTarget;
    SEL _previewingAction;
}

@property (readonly, nonatomic) T1AvatarPresenceView *avatarPresenceView;
@property (retain, nonatomic) T1StatusViewCombinedViewModel *statusViewModel;
@property (readonly, nonatomic) TFSTwitterUserPresenceInfo *presenceInfo;
@property (readonly, nonatomic) long long activeLineItemType;
@property (nonatomic) _Bool suppressesPreviewing;
@property (nonatomic) long long displayContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (long long)focalActiveLineItemTypeForPresenceInfo:(id)info;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)_t1_createFleetViewIfNecessaryForAccount:(id)account;
- (void)_t1_refreshActiveLineItemType;
- (_Bool)_t1_showsSpacesLiveNestedBorders;
- (void)_t1_refreshTimelineActiveLineItemType;
- (void)updateAvatarPresence:(id)presence;
- (void)_t1_logAvatarWithPresenceImpression;
- (void)layoutSubviews;
- (void)resetUsers;
- (id)previewConfigurationForLocation:(struct CGPoint { double x0; double x1; })location;
- (void)setPreviewingTarget:(id)target action:(SEL)action;
- (_Bool)suppressesPreviewingAtLocation:(struct CGPoint { double x0; double x1; })location;

@end

#endif /* T1TappableStatusFleetLineItemView_h */

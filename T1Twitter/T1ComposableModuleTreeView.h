//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ComposableModuleTreeView_h
#define T1ComposableModuleTreeView_h
@import Foundation;

#include "T1ComposableModuleTreeViewLayoutState.h"
#include "T1TombstoneView.h"
#include "TFNComposableViewHost-Protocol.h"
#include "TFNTwitterConversationTreeContextProvider-Protocol.h"

@class NSString, TFNComposableViewSet, TUIAvatarImageView, UIView;

@interface T1ComposableModuleTreeView : UIView <TFNComposableViewHost>

@property (retain, nonatomic) id <TFNTwitterConversationTreeContextProvider> viewModel;
@property (retain, nonatomic) T1ComposableModuleTreeViewLayoutState *layoutState;
@property (readonly, nonatomic) TUIAvatarImageView *avatarView;
@property (readonly, nonatomic) T1TombstoneView *tombstoneView;
@property (readonly, nonatomic) TFNComposableViewSet *viewSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (id)_t1_updateLayoutState;

@end

#endif /* T1ComposableModuleTreeView_h */

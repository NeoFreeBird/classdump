//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift39ImmersiveRepliesSheetControlsPluginView_h
#define _TtC14T1TwitterSwift39ImmersiveRepliesSheetControlsPluginView_h
@import Foundation;

@class T1TwitterSwift.ImmersiveCardState ?, T1TwitterSwift.ImmersiveCardViewModelProtocol ?, T1TwitterSwift.ImmersiveChromeHandOff, T1TwitterSwift.ImmersivePluginViewDelegate ?, T1TwitterSwift.ImmersiveRepliesSheetControlsDisplayMode, T1TwitterSwift.ImmersiveVideoTimelineScrubber ?, T1TwitterSwift.ImmersiveVideoTimelineView ?, UIView, _$s13XDesignSystem9ButtonRowCMn, _$s8Dispatch0A8WorkItemCMn ?, _$sSD -> T1TwitterSwift.ImmersiveRepliesSheetControlsPluginView.Action _$s13XDesignSystem6ButtonCMn, _$sSo6UIViewC, _$sSo6UIViewCSg;

@interface T1TwitterSwift.ImmersiveRepliesSheetControlsPluginView : UIView { // (Swift)
    /* instance variables */
    T1TwitterSwift.ImmersiveRepliesSheetControlsDisplayMode displayMode;
    nominal type descriptor for Dispatch.DispatchWorkItem ? timelineFadeOutWorkItem;
    T1TwitterSwift.ImmersiveCardViewModelProtocol ? viewModel;
    T1TwitterSwift.ImmersivePluginViewDelegate ? delegate;
    T1TwitterSwift.ImmersiveCardState ? state;
    T1TwitterSwift.ImmersiveChromeHandOff handOff;
    nominal type descriptor for XDesignSystem.ButtonRow row;
    Swift.Dictionary -> T1TwitterSwift.ImmersiveRepliesSheetControlsPluginView.Action nominal type descriptor for XDesignSystem.Button buttons;
    __C.UIView? $__lazy_storage_$_timelineClipView;
    __C.UIView mediaOutlineView;
    T1TwitterSwift.ImmersiveVideoTimelineView ? $__lazy_storage_$_videoTimelineView;
    T1TwitterSwift.ImmersiveVideoTimelineScrubber ? $__lazy_storage_$_scrubber;
}

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)didMoveToSuperview;
- (void)removeFromSuperview;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift39ImmersiveRepliesSheetControlsPluginView_h */

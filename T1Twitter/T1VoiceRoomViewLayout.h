//
#ifndef T1VoiceRoomViewLayout_h
#define T1VoiceRoomViewLayout_h
@import Foundation;

@class NSObject;

@interface T1VoiceRoomViewLayout : NSObject

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } blockedSpeakersButtonFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } recordingViewFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } exclusiveSpaceDisclaimerViewFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } metaDetailsViewFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } titleEditViewFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } detailsLabelFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } pivotViewFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentsViewFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } liveCaptionsViewFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } privateNotificationViewFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } controlsViewFrame;
@property (readonly, nonatomic) _Bool showingErrorView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } playSpaceViewFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } dimmingViewFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } communityBadgeFrame;
@property (readonly, nonatomic) double preferredDimmingViewHeight;
@property (readonly, nonatomic) double alpha;

/* instance methods */
- (id)initWithView:(id)view;
- (id)initWithWidth:(double)width topInset:(double)inset bottomInset:(double)inset recordingViewSize:(struct CGSize { double x0; double x1; })size exclusiveSpaceDisclaimerViewSize:(struct CGSize { double x0; double x1; })size metaDetailsViewSize:(struct CGSize { double x0; double x1; })size titleEditViewSize:(struct CGSize { double x0; double x1; })size detailsLabelSize:(struct CGSize { double x0; double x1; })size pivotViewSize:(struct CGSize { double x0; double x1; })size captionsViewSize:(struct CGSize { double x0; double x1; })size controlsViewSize:(struct CGSize { double x0; double x1; })size playSpaceViewSize:(struct CGSize { double x0; double x1; })size blockedSpeakersButtonSize:(struct CGSize { double x0; double x1; })size panHeight:(double)height showingErrorView:(_Bool)view dimmingViewHeight:(double)height communityBadgeSize:(struct CGSize { double x0; double x1; })size;

@end

#endif /* T1VoiceRoomViewLayout_h */

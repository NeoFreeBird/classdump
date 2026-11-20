//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1CustomerFeedbackCardViewLayoutState_h
#define T1CustomerFeedbackCardViewLayoutState_h
@import Foundation;

@class NSString, TUICardViewLayoutState;

@interface T1CustomerFeedbackCardViewLayoutState : TUICardViewLayoutState

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } topBorderViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } closeButtonFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } selectedScoreImageFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } titleLabelFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } ratingViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } addCommentButtonFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } tweetButtonFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } privacyPolicyTextFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bottomBorderViewFrame;
@property (nonatomic) unsigned long long lastFeedbackState;
@property (nonatomic) unsigned long long lastFeedbackType;
@property (copy, nonatomic) NSString *lastPrivacyUrl;
@property (copy, nonatomic) NSString *lastTitle;

/* instance methods */
- (_Bool)isLayoutStateValidForCardContext:(id)context;

@end

#endif /* T1CustomerFeedbackCardViewLayoutState_h */

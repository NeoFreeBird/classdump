//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTAStatusAuthorViewLayoutState_h
#define TTAStatusAuthorViewLayoutState_h
@import Foundation;

#include "TFNTwitterAccount.h"
#include "TTACoreStatusViewModel-Protocol.h"

@class NSObject, NSString, TFNLayoutMetrics;

@interface TTAStatusAuthorViewLayoutState : NSObject

@property (readonly, nonatomic) double textMaxX;
@property (retain, nonatomic) id <TTACoreStatusViewModel> viewModel;
@property (nonatomic) unsigned long long options;
@property (retain, nonatomic) TFNTwitterAccount *account;
@property (retain, nonatomic) TFNLayoutMetrics *layoutMetrics;
@property (nonatomic) long long displayType;
@property (copy, nonatomic) NSString *fullName;
@property (copy, nonatomic) NSString *displayUsername;
@property (nonatomic) struct CGSize { double x0; double x1; } authorBadgeIdealSize;
@property (nonatomic) struct CGSize { double x0; double x1; } communityModeratorBadgeIdealSize;
@property (copy, nonatomic) NSString *timestamp;
@property (copy, nonatomic) NSString *viewCount;
@property (copy, nonatomic) NSString *designatorString;
@property (copy, nonatomic) NSString *designatorImageUrl;
@property (nonatomic) long long designatorIconType;
@property (nonatomic) long long designatorLabelType;
@property (copy, nonatomic) NSString *designatorUrl;
@property (nonatomic) _Bool hasAccountLabel;
@property (nonatomic) _Bool multiLineLayout;
@property (nonatomic) long long followState;
@property (nonatomic) _Bool shouldShowInlineFollowControl;
@property (nonatomic) _Bool shouldShowSubscribeButton;
@property (nonatomic) _Bool shouldShowPromoteButton;
@property (copy, nonatomic) NSString *promoteButtonTitle;
@property (nonatomic) _Bool shouldShowAnalyticsButton;
@property (nonatomic) _Bool shouldShowMessageButton;
@property (nonatomic) _Bool shouldShowCustomScreenshotPlaceholder;
@property (nonatomic) _Bool shouldShowParodyLabel;
@property (nonatomic) _Bool shouldShowGrokAnalyzeButton;
@property (copy, nonatomic) NSString *parodyLabel;
@property (copy, nonatomic) NSString *truncatedFullName;
@property (copy, nonatomic) NSString *truncatedUsername;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } fullNameFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } usernameFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } authorBadgeFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } communityModeratorBadgeFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } infoTextViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } infoTextViewSeparatorFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } timestampFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } timeSeparatorFrame;
@property (nonatomic) double availableTimestampExpansion;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } followControlSeparatorLabelFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } followControlFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } caretFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } notInterestedButtonFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } grokAnalyzeFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } viewCountSeparatorFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } viewCountTextFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } viewCountBackgroundFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } subscribeButtonFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } promoteButtonFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } analyticsButtonFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } messageButtonFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } customScreenshotPlaceholderFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } designatorBadgeFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } parodyBadgeFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } highlightViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } adLabelFrame;
@property (nonatomic) _Bool hidesAdLabel;
@property (nonatomic) _Bool hidesFullName;
@property (nonatomic) struct CGSize { double x0; double x1; } size;
@property (nonatomic) struct CGSize { double x0; double x1; } scribableTweetClickAuthorViewSize;

/* instance methods */

@end

#endif /* TTAStatusAuthorViewLayoutState_h */

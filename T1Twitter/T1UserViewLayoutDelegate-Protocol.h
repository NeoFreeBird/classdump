//
#ifndef T1UserViewLayoutDelegate_Protocol_h
#define T1UserViewLayoutDelegate_Protocol_h
@import Foundation;

#include "TFNSizeThatFitsHelperDelegate-Protocol.h"

@protocol T1UserViewLayoutDelegate <TFNSizeThatFitsHelperDelegate>

@required

/* class methods */
+ (id)sharedLayoutDelegate;
+ (struct CGSize { double x0; double x1; })defaultAvatarSizeForStyle:(long long)style showBio:(_Bool)bio layoutMetrics:(id)metrics;
+ (double)heightForLayoutParameters:(id)parameters layoutMetrics:(id)metrics;
+ (id)layoutStateWithParameters:(id)parameters layoutMetrics:(id)metrics;
+ (id)socialTextFontForCellStyle:(long long)style expanded:(_Bool)expanded;
+ (id)fullNameFontForCellStyle:(long long)style expanded:(_Bool)expanded;
+ (id)usernameFontForCellStyle:(long long)style expanded:(_Bool)expanded;
+ (id)infoTextFontForCellStyle:(long long)style expanded:(_Bool)expanded;

/* required instance methods */
- (id)layoutStateForUserView:(id)view;
- (id)adjustedLayoutMetricsForLayoutMetrics:(id)metrics;

@optional

@end

#endif /* T1UserViewLayoutDelegate_Protocol_h */

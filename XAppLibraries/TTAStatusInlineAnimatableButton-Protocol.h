//
#ifndef TTAStatusInlineAnimatableButton_Protocol_h
#define TTAStatusInlineAnimatableButton_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TTACoreStatusLiveEngagementManager.h"

@class UILabel;

@protocol TTAStatusInlineAnimatableButton <NSObject>

@required

@property (nonatomic) long long count;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (weak, nonatomic) TTACoreStatusLiveEngagementManager *livePipelineTweetManager;

@optional

@end

#endif /* TTAStatusInlineAnimatableButton_Protocol_h */

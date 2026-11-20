//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

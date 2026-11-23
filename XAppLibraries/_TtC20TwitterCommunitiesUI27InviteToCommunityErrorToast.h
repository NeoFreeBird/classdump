//
#ifndef _TtC20TwitterCommunitiesUI27InviteToCommunityErrorToast_h
#define _TtC20TwitterCommunitiesUI27InviteToCommunityErrorToast_h
@import Foundation;

#include "TFNToastViewModel-Protocol.h"

@class NSArray, NSObject, NSString, UIColor, _$sSS, _$sSSSg, _$sSaySo7NSValueCGSg;

@interface TwitterCommunitiesUI.InviteToCommunityErrorToast : NSObject <TFNToastViewModel> // (Swift)

@property (nonatomic, readonly) NSString *messageText;
@property (nonatomic, readonly) NSArray *messageTextBoldRanges;
@property (nonatomic, readonly) NSString *detailText;
@property (nonatomic, readonly) NSString *iconName;
@property (nonatomic, readonly) UIColor *iconColor;

/* instance methods */
- (id)init;

@end

#endif /* _TtC20TwitterCommunitiesUI27InviteToCommunityErrorToast_h */

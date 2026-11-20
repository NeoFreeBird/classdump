//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14CallScheduleUI15CallHistoryCell_h
#define _TtC14CallScheduleUI15CallHistoryCell_h
@import Foundation;

@class CallModels.CallConversationAvatarView ?, UITableViewCell, _$sSo11UIImageViewC, _$sSo6UIViewC, _$sSo7UILabelC;

@interface CallScheduleUI.CallHistoryCell : UITableViewCell { // (Swift)
    /* instance variables */
    __C.UIView avatarContainerView;
    __C.UILabel nameLabel;
    __C.UIImageView badgeView;
    __C.UIImageView iconView;
    __C.UILabel detailLabel;
    __C.UILabel timeLabel;
    CallModels.CallConversationAvatarView ? avatarView;
}

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC14CallScheduleUI15CallHistoryCell_h */

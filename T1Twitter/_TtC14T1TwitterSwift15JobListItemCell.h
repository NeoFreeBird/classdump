//
#ifndef _TtC14T1TwitterSwift15JobListItemCell_h
#define _TtC14T1TwitterSwift15JobListItemCell_h
@import Foundation;

@class TFNTableViewCell, _$s21TwitterProfileModules12JobViewModelCMn ?, _$sSo11UIImageViewCSg, _$sSo11UIStackViewCSg, _$sSo18TUIAvatarImageViewCSg, _$sSo7UILabelCSg;

@interface T1TwitterSwift.JobListItemCell : TFNTableViewCell { // (Swift)
    /* instance variables */
    nominal type descriptor for TwitterProfileModules.JobViewModel ? jobItem;
    __C.TUIAvatarImageView? $__lazy_storage_$_avatarImage;
    __C.UILabel? $__lazy_storage_$_titleLabel;
    __C.UIStackView? $__lazy_storage_$_subtextSections;
    __C.UILabel? $__lazy_storage_$_locationLabel;
    __C.UIImageView? $__lazy_storage_$_locationIcon;
    __C.UIStackView? $__lazy_storage_$_locationLabelWithIcon;
    __C.UILabel? $__lazy_storage_$_salaryLabel;
    __C.UIImageView? $__lazy_storage_$_salaryIcon;
    __C.UIStackView? $__lazy_storage_$_salaryLabelWithIcon;
}

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC14T1TwitterSwift15JobListItemCell_h */

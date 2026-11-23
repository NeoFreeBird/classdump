//
#ifndef T1ExpandedBioContainerViewController_h
#define T1ExpandedBioContainerViewController_h
@import Foundation;

@class _$s10TFNUISwift20TFNHostingControllerCN;

@interface T1ExpandedBioContainerViewController : type metadata for TFNUISwift.TFNHostingController { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *rootViewModel;
    NSNumber"16@0:8 *titleLabel;
    NSNumber"16@0:8 *titleAnimationDuration;
    NSNumber"16@0:8 *$__lazy_storage_$_editButton;
    NSNumber"16@0:8 *$__lazy_storage_$_doneButton;
}

/* instance methods */
- (void)editProfileBlockWithProfileBlockID:(id)id;
- (id)initWithAccount:(id)account profileUserID:(long long)id isEditing:(_Bool)editing;
- (id)initWithCoder:(id)coder;
- (void)editButtonTapped;
- (void)doneButtonTapped;

@end

#endif /* T1ExpandedBioContainerViewController_h */

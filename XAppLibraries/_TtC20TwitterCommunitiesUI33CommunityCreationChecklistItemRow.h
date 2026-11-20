//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC20TwitterCommunitiesUI33CommunityCreationChecklistItemRow_h
#define _TtC20TwitterCommunitiesUI33CommunityCreationChecklistItemRow_h
@import Foundation;

@class Swift.Bool, UIStackView, _$sSSSg, _$sSo11UIImageViewCSg, _$sSo7UILabelCSg, _$syyc;

@interface TwitterCommunitiesUI.CommunityCreationChecklistItemRow : UIStackView { // (Swift)
    /* instance variables */
    Swift.String? labelText;
    Swift.Bool checked;
    () -> () tapAction;
    __C.UILabel? $__lazy_storage_$_label;
    __C.UIImageView? $__lazy_storage_$_checkmarkImageView;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)executeTapAction;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC20TwitterCommunitiesUI33CommunityCreationChecklistItemRow_h */

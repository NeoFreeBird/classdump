//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC23TwitterProfileModulesUI21LinkProfileModuleView_h
#define _TtC23TwitterProfileModulesUI21LinkProfileModuleView_h
@import Foundation;

#include "_TtC23TwitterProfileModulesUI20SpotlightCardControl.h"

@class NSString, TwitterProfileModules.LinkProfileModule ?, _$sSo11UIImageViewCSg, _$sSo11UIStackViewCSg, _$sSo7UILabelCSg;

@interface TwitterProfileModulesUI.LinkProfileModuleView : TwitterProfileModulesUI.SpotlightCardControl { // (Swift)
    /* instance variables */
    TwitterProfileModules.LinkProfileModule ? viewModel;
    __C.UIStackView? $__lazy_storage_$_bodyView;
    __C.UIImageView? $__lazy_storage_$_imageView;
    __C.UIStackView? $__lazy_storage_$_detailsView;
    __C.UILabel? $__lazy_storage_$_callToActionLabel;
    __C.UILabel? $__lazy_storage_$_domainLabel;
}

@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic) unsigned long long accessibilityTraits;
@property (nonatomic) _Bool isAccessibilityElement;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC23TwitterProfileModulesUI21LinkProfileModuleView_h */

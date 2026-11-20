//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC20TwitterCommunitiesUI24CommunitiesExploreHeader_h
#define _TtC20TwitterCommunitiesUI24CommunitiesExploreHeader_h
@import Foundation;

@class TFNViewController, TwitterCommunitiesUI.CommunitiesTopicCarouselViewModel, _$s10TFNUISwift20TFNHostingControllerCMn ?, _$s12CoreGraphics7CGFloatVMn, _$sSS, _$syycSg;

@interface TwitterCommunitiesUI.CommunitiesExploreHeader : TFNViewController { // (Swift)
    /* instance variables */
    Swift.String accountID;
    TwitterCommunitiesUI.CommunitiesTopicCarouselViewModel viewModel;
    nominal type descriptor for TFNUISwift.TFNHostingController ? $__lazy_storage_$_carouselHostingController;
    nominal type descriptor for CoreGraphics.CGFloat dataTableViewHeaderContentHeight;
    (() -> ())? dataTableViewHeaderContentHeightDidChangeBlock;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)appear;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC20TwitterCommunitiesUI24CommunitiesExploreHeader_h */

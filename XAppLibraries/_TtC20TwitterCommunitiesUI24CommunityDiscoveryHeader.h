//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC20TwitterCommunitiesUI24CommunityDiscoveryHeader_h
#define _TtC20TwitterCommunitiesUI24CommunityDiscoveryHeader_h
@import Foundation;

@class TFNViewController, TwitterCommunities.CommunitiesContext ?, TwitterCommunitiesUI.CommunitiesTopicCarouselViewModel, _$s10TFNUISwift20TFNHostingControllerCMn ?, _$s12CoreGraphics7CGFloatVMn, _$sSS, _$sSo7UILabelCSg, _$sSo8TFSTimerCSg, _$syycSg;

@interface TwitterCommunitiesUI.CommunityDiscoveryHeader : TFNViewController { // (Swift)
    /* instance variables */
    Swift.String accountID;
    TwitterCommunitiesUI.CommunitiesTopicCarouselViewModel viewModel;
    TwitterCommunities.CommunitiesContext ? communitiesContext;
    __C.UILabel? $__lazy_storage_$_discoveryTimelineHeadingLabel;
    nominal type descriptor for TFNUISwift.TFNHostingController ? $__lazy_storage_$_carouselHostingController;
    nominal type descriptor for CoreGraphics.CGFloat dataTableViewHeaderContentHeight;
    (() -> ())? dataTableViewHeaderContentHeightDidChangeBlock;
    __C.TFSTimer? asyncRecalculateDataTableViewContentHeightTimer;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)appear;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC20TwitterCommunitiesUI24CommunityDiscoveryHeader_h */

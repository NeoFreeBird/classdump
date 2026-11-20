//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCC14T1TwitterSwift49URTTimelineModuleCarouselViewModelDataViewAdapter8HostCell_h
#define _TtCC14T1TwitterSwift49URTTimelineModuleCarouselViewModelDataViewAdapter8HostCell_h
@import Foundation;

@class Swift.Bool, T1TwitterSwift.URTTimelineModuleCarouselViewModelDataViewAdapter ?, TFNViewHostTableViewCell, _$sSo38T1TimelinesItemsCarouselViewControllerCSg, _$sSo6UIViewC;

@interface T1TwitterSwift.URTTimelineModuleCarouselViewModelDataViewAdapter.HostCell : TFNViewHostTableViewCell { // (Swift)
    /* instance variables */
    T1TwitterSwift.URTTimelineModuleCarouselViewModelDataViewAdapter ? currentAdapter;
    __C.T1TimelinesItemsCarouselViewController? hostedViewController;
    Swift.Bool extendsCarouselBeyondDisplayArea;
    Swift.Bool showsBottomDivider;
    __C.UIView bottomDivider;
}

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtCC14T1TwitterSwift49URTTimelineModuleCarouselViewModelDataViewAdapter8HostCell_h */

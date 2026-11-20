//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC20TwitterCommunitiesUI18CommunityTitleView_h
#define _TtC20TwitterCommunitiesUI18CommunityTitleView_h
@import Foundation;

@class TFNTitleView, _$sSS, _$sySSc;

@interface TwitterCommunitiesUI.CommunityTitleView : TFNTitleView { // (Swift)
    /* instance variables */
    Swift.String communityID;
    (Swift.String) -> () tapHandler;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)didTapTitleView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC20TwitterCommunitiesUI18CommunityTitleView_h */

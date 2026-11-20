//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10XElections21ElectionsKeyRacesView_h
#define _TtC10XElections21ElectionsKeyRacesView_h
@import Foundation;

@class UIView, XDiffableCollection.DiffableView, XElections.ElectionsKeyRace _$scSg ->, XElections.ElectionsXAccount _$scSg ->, _$sSo16TIPImagePipelineCSg;

@interface XElections.ElectionsKeyRacesView : UIView { // (Swift)
    /* instance variables */
    __C.TIPImagePipeline? imagePipeline;
    XDiffableCollection.DiffableView diffableView;
    XElections.ElectionsKeyRace _$scSg -> onSelectRace;
    XElections.ElectionsKeyRace _$scSg -> onDisplayRace;
    XElections.ElectionsXAccount _$scSg -> onOpenProfile;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC10XElections21ElectionsKeyRacesView_h */

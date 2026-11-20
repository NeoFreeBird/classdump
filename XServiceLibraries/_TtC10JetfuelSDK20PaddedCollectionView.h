//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10JetfuelSDK20PaddedCollectionView_h
#define _TtC10JetfuelSDK20PaddedCollectionView_h
@import Foundation;

@class UICollectionView, __C.UIEdgeInsets;

@interface JetfuelSDK.PaddedCollectionView : UICollectionView { // (Swift)
    /* instance variables */
    __C.UIEdgeInsets contentInsets;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame collectionViewLayout:(id)layout;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC10JetfuelSDK20PaddedCollectionView_h */

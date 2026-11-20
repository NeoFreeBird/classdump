//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift29FleetLineAccessibilityElement_h
#define _TtC14T1TwitterSwift29FleetLineAccessibilityElement_h
@import Foundation;

@class NSArray, NSString, Swift.Bool, T1TwitterSwift.FleetLineViewModel, UIAccessibilityElement, _$s10Foundation9IndexPathVMn ?, _$sSo16UICollectionViewC;

@interface T1TwitterSwift.FleetLineAccessibilityElement : UIAccessibilityElement { // (Swift)
    /* instance variables */
    nominal type descriptor for Foundation.IndexPath ? currentIndex;
    T1TwitterSwift.FleetLineViewModel viewModel;
    __C.UICollectionView collectionView;
    Swift.Bool isFocused;
}

@property (nonatomic, copy) NSArray *accessibilityElements;
@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, copy) NSString *accessibilityValue;
@property (nonatomic) unsigned long long accessibilityTraits;
@property (nonatomic) struct CGPoint { double x0; double x1; } accessibilityActivationPoint;

/* instance methods */
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (_Bool)accessibilityScroll:(long long)scroll;
- (id)initWithAccessibilityContainer:(id)container;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift29FleetLineAccessibilityElement_h */

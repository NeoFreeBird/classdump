//
#ifndef _TtC10TwitterURT35URTTimelineGridCollectionViewLayout_h
#define _TtC10TwitterURT35URTTimelineGridCollectionViewLayout_h
@import Foundation;

@class TwitterURT.URTTimelineGridCollectionViewLayout.Configuration, UICollectionViewFlowLayout;

@interface TwitterURT.URTTimelineGridCollectionViewLayout : UICollectionViewFlowLayout { // (Swift)
    /* instance variables */
    TwitterURT.URTTimelineGridCollectionViewLayout.Configuration configuration;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })change;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })change;
- (void)prepareLayout;
- (id)init;

@end

#endif /* _TtC10TwitterURT35URTTimelineGridCollectionViewLayout_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10XElections22ElectionsCandidateCell_h
#define _TtC10XElections22ElectionsCandidateCell_h
@import Foundation;

@class UICollectionViewCell, XElections.ElectionsCandidateRowView;

@interface XElections.ElectionsCandidateCell : UICollectionViewCell { // (Swift)
    /* instance variables */
    XElections.ElectionsCandidateRowView rowView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC10XElections22ElectionsCandidateCell_h */

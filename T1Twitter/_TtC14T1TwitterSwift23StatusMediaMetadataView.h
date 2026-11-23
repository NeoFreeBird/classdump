//
#ifndef _TtC14T1TwitterSwift23StatusMediaMetadataView_h
#define _TtC14T1TwitterSwift23StatusMediaMetadataView_h
@import Foundation;

@class Swift.Bool, T1TwitterSwift.GrokEditPhotoLabelView ?, T1TwitterSwift.MediaTagsLabel, T1TwitterSwift.StatusContentDisclosureLabel ?, UIView, _$sSo7UILabelC;

@interface T1TwitterSwift.StatusMediaMetadataView : UIView { // (Swift)
    /* instance variables */
    T1TwitterSwift.MediaTagsLabel tagsLabel;
    T1TwitterSwift.StatusContentDisclosureLabel ? aiLabel;
    __C.UILabel separatorLabel;
    T1TwitterSwift.GrokEditPhotoLabelView ? createOwnButtonView;
    Swift.Bool showTags;
    Swift.Bool showAI;
    Swift.Bool showCreateOwnButton;
    Swift.Bool showSeparator;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC14T1TwitterSwift23StatusMediaMetadataView_h */

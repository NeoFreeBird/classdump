//
#ifndef _TtC7XGoLive40GoLiveBroadcastEditContentViewController_h
#define _TtC7XGoLive40GoLiveBroadcastEditContentViewController_h
@import Foundation;

@class Swift.Bool, XGoLive.GoLiveBroadcastEditDraft, XGoLive.GoLiveBroadcastEditDraft _$scSg ->, XGoLive.GoLiveBroadcastEditing, XGoLive.GoLiveReplayScrubberView, XGoLive.GoLiveReplayThumbnailStripView, _$s13XDesignSystem16TrayFootnoteViewCMn ?, _$s13XDesignSystem30StackTrayContentViewControllerCN, _$s13XDesignSystem5InputCMn, _$sSo7UILabelC;

@interface XGoLive.GoLiveBroadcastEditContentViewController : type metadata for XDesignSystem.StackTrayContentViewController { // (Swift)
    /* instance variables */
    XGoLive.GoLiveBroadcastEditDraft _$scSg -> onSave;
    XGoLive.GoLiveBroadcastEditing editor;
    Swift.Bool showsBackButton;
    __C.UILabel descriptionLabel;
    __C.UILabel titleSectionLabel;
    nominal type descriptor for XDesignSystem.Input titleInput;
    __C.UILabel startPointSectionLabel;
    XGoLive.GoLiveReplayScrubberView scrubberView;
    __C.UILabel thumbnailSectionLabel;
    XGoLive.GoLiveReplayThumbnailStripView thumbnailStripView;
    nominal type descriptor for XDesignSystem.TrayFootnoteView ? footnoteView;
    XGoLive.GoLiveBroadcastEditDraft baseline;
    XGoLive.GoLiveBroadcastEditDraft draft;
    Swift.Bool isSaving;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC7XGoLive40GoLiveBroadcastEditContentViewController_h */

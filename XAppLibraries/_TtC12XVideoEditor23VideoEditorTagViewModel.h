//
#ifndef _TtC12XVideoEditor23VideoEditorTagViewModel_h
#define _TtC12XVideoEditor23VideoEditorTagViewModel_h
@import Foundation;

@class Swift.Bool, XVideoEditor.VideoEditorSession, XVideoEditor.VideoEditorTagViewModel.State, _TtCs12_SwiftObject;

@interface XVideoEditor.VideoEditorTagViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XVideoEditor.VideoEditorSession _editorSession;
    XVideoEditor.VideoEditorTagViewModel.State _trackingState;
    XVideoEditor.VideoEditorTagViewModel.State state;
    Swift.Bool _didLogVideoQualitySelectorImpression;
    Swift.Bool hasChanges;
}

@end

#endif /* _TtC12XVideoEditor23VideoEditorTagViewModel_h */

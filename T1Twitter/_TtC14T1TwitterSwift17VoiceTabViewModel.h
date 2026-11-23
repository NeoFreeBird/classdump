//
#ifndef _TtC14T1TwitterSwift17VoiceTabViewModel_h
#define _TtC14T1TwitterSwift17VoiceTabViewModel_h
@import Foundation;

@class Swift.Bool, T1TwitterSwift.VoiceTabAudioFeed ?, T1TwitterSwift.VoiceTabViewModelDelegate ?, _$sSa -> T1TwitterSwift.VoiceTabSectionViewModel, _$sSo16TASSpacesContext_p, _TtCs12_SwiftObject;

@interface T1TwitterSwift.VoiceTabViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.TASSpacesContext context;
    T1TwitterSwift.VoiceTabViewModelDelegate ? delegate;
    T1TwitterSwift.VoiceTabAudioFeed ? currentAudioFeed;
    Swift.Array -> T1TwitterSwift.VoiceTabSectionViewModel sectionViewModels;
    Swift.Bool isLoadingTop;
    Swift.Bool hasNewContent;
    Swift.Bool isLoadingNewContent;
    T1TwitterSwift.VoiceTabAudioFeed ? newAudioFeed;
}

@end

#endif /* _TtC14T1TwitterSwift17VoiceTabViewModel_h */

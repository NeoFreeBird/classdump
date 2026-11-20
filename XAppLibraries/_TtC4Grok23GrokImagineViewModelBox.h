//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC4Grok23GrokImagineViewModelBox_h
#define _TtC4Grok23GrokImagineViewModelBox_h
@import Foundation;

@class Grok.GrokDelegate, Grok.GrokEventScriber, Grok.GrokImagineHomeViewModel, Grok.GrokImagineLightboxViewModelManager, Grok.GrokImagineNavigationViewModel, Grok.GrokImagineTimelineImageListViewModel, Grok.GrokImagineToolbarViewModel, Grok.GrokImagineViewInjection, Grok.GrokImagineViewModel, _$sSh -> _$s7Combine14AnyCancellableCMn, _TtCs12_SwiftObject;

@interface Grok.GrokImagineViewModelBox : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Grok.GrokImagineViewModel viewModel;
    Grok.GrokImagineNavigationViewModel navigationViewModel;
    Grok.GrokImagineHomeViewModel homeViewModel;
    Grok.GrokImagineToolbarViewModel toolbarViewModel;
    Grok.GrokImagineLightboxViewModelManager lightboxViewModelManager;
    Grok.GrokImagineTimelineImageListViewModel timelineImageListViewModel;
    Grok.GrokImagineViewInjection viewInjection;
    Grok.GrokDelegate delegate;
    Grok.GrokEventScriber eventScriber;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
}

@end

#endif /* _TtC4Grok23GrokImagineViewModelBox_h */

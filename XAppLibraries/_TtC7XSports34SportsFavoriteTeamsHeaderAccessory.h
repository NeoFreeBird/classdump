//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7XSports34SportsFavoriteTeamsHeaderAccessory_h
#define _TtC7XSports34SportsFavoriteTeamsHeaderAccessory_h
@import Foundation;

@class Swift.Bool, XSports.SportsFavoriteTeamsAutoPrompt ?, XSports.SportsFavoriteTeamsStackView, XSports.SportsFavoriteTeamsStore.LoadState _$syc, _$s7Combine14AnyCancellableCMn ?, _$sSo16TIPImagePipelineCSg, _$sSo16UIViewControllerCSgXw, _$syycSg, _TtCs12_SwiftObject;

@interface XSports.SportsFavoriteTeamsHeaderAccessory : Swift._SwiftObject { // (Swift)
    /* instance variables */
    (() -> ())? onSizeChange;
    weak __C.UIViewController? host;
    XSports.SportsFavoriteTeamsStackView stackView;
    __C.TIPImagePipeline? imagePipeline;
    XSports.SportsFavoriteTeamsStore.LoadState _$syc loadState;
    XSports.SportsFavoriteTeamsAutoPrompt ? prompt;
    nominal type descriptor for Combine.AnyCancellable ? loadStateCancellable;
    nominal type descriptor for Combine.AnyCancellable ? openedCancellable;
    Swift.Bool hasAppeared;
}

@end

#endif /* _TtC7XSports34SportsFavoriteTeamsHeaderAccessory_h */

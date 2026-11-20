//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10XGifPicker18GifPickerViewModel_h
#define _TtC10XGifPicker18GifPickerViewModel_h
@import Foundation;

@class XGifPicker.Gif _$sSgcSg ->, XGifPicker.GifPickerNetworkService, XGifPicker.GifPickerSuggestions ?, XGifPicker.GifVideoLoader, _$s7Combine9PublishedVMn Swift.Bool, _$s7Combine9PublishedVMn XGifPicker.GifPickerChip, _$s7Combine9PublishedVMn XGifPicker.GifPickerError ?, _$s7Combine9PublishedVMn _$sSS, _$s7Combine9PublishedVMn _$sySa -> XGifPicker.GifPickerChip ?, _$s7Combine9PublishedVMn _$sySa -> XGifPicker.GifPickerItem, _$sSD -> XGifPicker.GifPickerChip _$sSa -> XGifPicker.GifPickerItem, _$sScTyyt _$ss5NeverOMn ?, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo014Subsystem_ios_B33Arm64_mainSimpleUserEventReporter_p, _TtCs12_SwiftObject;

@interface XGifPicker.GifPickerViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XGifPicker.Gif _$sSgcSg -> didSelectGif;
    nominal type descriptor for Combine.Published Swift.String _searchText;
    nominal type descriptor for Combine.Published Swift.String _activeSearchQuery;
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> XGifPicker.GifPickerChip ? _chips;
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> XGifPicker.GifPickerItem _gifs;
    nominal type descriptor for Combine.Published XGifPicker.GifPickerError ? _error;
    nominal type descriptor for Combine.Published Swift.Bool _isLoading;
    nominal type descriptor for Combine.Published XGifPicker.GifPickerChip _selectedChip;
    Swift.Dictionary -> XGifPicker.GifPickerChip Swift.Array -> XGifPicker.GifPickerItem cachedResults;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? contentTask;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? searchTask;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? inferenceTask;
    XGifPicker.GifPickerNetworkService service;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
    XGifPicker.GifPickerSuggestions ? suggestions;
    __C.Subsystem_ios_iosArm64_mainSimpleUserEventReporter userEventReporter;
    XGifPicker.GifVideoLoader videoLoader;
}

@end

#endif /* _TtC10XGifPicker18GifPickerViewModel_h */

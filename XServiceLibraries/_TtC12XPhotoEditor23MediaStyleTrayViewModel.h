//
#ifndef _TtC12XPhotoEditor23MediaStyleTrayViewModel_h
#define _TtC12XPhotoEditor23MediaStyleTrayViewModel_h
@import Foundation;

@class Swift.Bool, XPhotoEditor.MediaStyleTrayColors, XPhotoEditor.MediaStyleTrayCustomColorEntry, XPhotoEditor.MediaStyleTrayFill, XPhotoEditor.MediaStyleTrayFonts, XPhotoEditor.MediaStyleTraySurface, _$s7Combine19CurrentValueSubjectCMn XPhotoEditor.MediaStyleTrayMode _$ss5NeverOMn, _$s7Combine9PublishedVMn XPhotoEditor.MediaStyleTrayColorControls, _$s7Combine9PublishedVMn XPhotoEditor.MediaStyleTrayColorsPresentation, _$sSh -> _$s7Combine14AnyCancellableCMn, _TtCs12_SwiftObject;

@interface XPhotoEditor.MediaStyleTrayViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XPhotoEditor.MediaStyleTraySurface surface;
    Swift.Bool isColorSpectrumEnabled;
    XPhotoEditor.MediaStyleTrayCustomColorEntry customColorEntry;
    XPhotoEditor.MediaStyleTrayColors colors;
    XPhotoEditor.MediaStyleTrayFonts fonts;
    XPhotoEditor.MediaStyleTrayFill fill;
    nominal type descriptor for Combine.Published XPhotoEditor.MediaStyleTrayColorControls _colorControls;
    nominal type descriptor for Combine.Published XPhotoEditor.MediaStyleTrayColorsPresentation _colorsPresentation;
    nominal type descriptor for Combine.CurrentValueSubject XPhotoEditor.MediaStyleTrayMode nominal type descriptor for Swift.Never _modeSubject;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable _cancellables;
}

@end

#endif /* _TtC12XPhotoEditor23MediaStyleTrayViewModel_h */

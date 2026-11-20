//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift29T1StatusPreviewOverlayAdapter_h
#define _TtC14T1TwitterSwift29T1StatusPreviewOverlayAdapter_h
@import Foundation;

@class TFNComposableViewAdapter;

@interface T1TwitterSwift.T1StatusPreviewOverlayAdapter : TFNComposableViewAdapter // (Swift)

/* instance methods */
- (id)initializeView;
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (void)layoutOverlayWithAuthorViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame previewButtonViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithViewIdentifier:(long long)identifier;

@end

#endif /* _TtC14T1TwitterSwift29T1StatusPreviewOverlayAdapter_h */

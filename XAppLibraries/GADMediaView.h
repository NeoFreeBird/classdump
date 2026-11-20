//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADMediaView_h
#define GADMediaView_h
@import Foundation;

#include "GADMediaContent.h"
#include "GADMediaContentDisplaying-Protocol.h"
#include "GADObserverCollection.h"

@class UIView;

@interface GADMediaView : UIView {
    /* instance variables */
    id <GADMediaContentDisplaying> _internalMediaContent;
    UIView *_mediaView;
    GADObserverCollection *_observers;
}

@property (retain, nonatomic) GADMediaContent *mediaContent;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setInternalMediaContent:(id)content;
- (void)setContentMode:(long long)mode;

@end

#endif /* GADMediaView_h */

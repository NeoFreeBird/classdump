//
#ifndef T1StandardStatusEditWithGrokButtonView_h
#define T1StandardStatusEditWithGrokButtonView_h
@import Foundation;

#include "T1GrokEditPhotoLabelView.h"
#include "T1StandardStatusEditWithGrokButtonViewDelegate-Protocol.h"

@class TFNButton, UIView;

@interface T1StandardStatusEditWithGrokButtonView : UIView

@property (retain, nonatomic) TFNButton *editWithGrokButton;
@property (retain, nonatomic) T1GrokEditPhotoLabelView *installedButtonView;
@property (weak, nonatomic) id <T1StandardStatusEditWithGrokButtonViewDelegate> delegate;

/* instance methods */
- (void)applyMode:(long long)mode title:(id)title font:(id)font;
- (void)didTapEditWithGrokButton:(id)button;

@end

#endif /* T1StandardStatusEditWithGrokButtonView_h */
